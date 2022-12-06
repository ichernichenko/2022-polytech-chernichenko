#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>

/*
   Чтение строки из /proc/stat, имеющей формат: cpu  669992823 69963647 341652106 64211934534 34415383 0 8102966 0 0 0
   Итого 10 числовых параметров
   Числа обозначают общее время, проведённое процессором в разных состояниях.
   Четвёртое число обозначает время процессора без вычислений (состояние IDLE).
*/
void get_cpuinfo(unsigned long long int fields[])
{
    char line[3];
    std::ifstream in("../stat.txt", std::ios_base::in);
    if (in.is_open())
    {
        in >> line;
        for (int i = 0; i < 10; ++i)
        {
            in >> fields[i];
        }
    }
    else
    {
        std::cout << "Ошибка чтения файла";
        return;
    }
}

/*
  Расчёт загрузки процессора в % по данным из /proc/stat
  Алгоритм: т.к. в /proc/stat общее время с начала работы, то текущую нагрузку вычисляем за определённый промежуток времени, например, за последнюю секунду
  Итого, каждую секунду снимаем показатели параметров и вычисляем: (время загрузки без простоя за последнюю сек.)/(общее время за последнюю сек.) * 100
*/

int main()
{
    unsigned long long int fields[10];     // массив параметров /proc/stat
    unsigned long long int total_tick{0};  // общее текущее время работы процессора
    unsigned long long int total_tick_old; // общее предыдущее время работы процессора
    unsigned long long int idle;           // текущее время простоя
    unsigned long long int idle_old;       // предыдущее время простоя
    unsigned long long int del_total_tick; // время работы процессора за заданный промежуток времени
    unsigned long long int del_idle;       // время прстоя процессора в моменте, равным 1 сек.
    double percent_usage{0.00};            // процент загрузки процессора в моменте

    get_cpuinfo(fields);

    for (int i = 0; i < 10; i++)
    {
        total_tick = total_tick + fields[i];
    }
    idle = fields[3]; // Четвёртое число обозначает время процессора без вычислений

    int cnt = 0;
    while (true)
    {
        std::chrono::milliseconds timespan(5000);
        std::this_thread::sleep_for(timespan); // секундная задержка

        total_tick_old = total_tick;
        idle_old = idle;

        get_cpuinfo(fields);

        total_tick = 0;
        for (int i = 0; i < 10; i++)
        {
            total_tick = total_tick + fields[i];
        }
        idle = fields[3];

        del_total_tick = total_tick - total_tick_old;
        del_idle = idle - idle_old;
      //  std::cout << del_total_tick << " " << del_idle << "    ";

        if (del_total_tick != 0)
            percent_usage = (double)(del_total_tick - del_idle) / del_total_tick * 100.00;
        else
            percent_usage = 0;

        std::cout << cnt++ << " Общая загрузка CPU: " << percent_usage << "%" << std::endl; // вывод загрузки процессора в % по данным из /proc/stat
    }

    return 0;
}