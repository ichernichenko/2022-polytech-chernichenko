#include <fstream>
#include <iostream>
#include <string>

int main()
{
    // ofstream используется для записи в файлы
    // Создадим файл с именем Sample.dat
    std::ofstream outf{"../Sample.dat"};

    // Если мы не смогли открыть выходной файловый поток для записи
    if (!outf)
    {
        // Распечатываем ошибку и выходим
        std::cerr << "Uh oh, Sample.dat could not be opened for writing!" << std::endl;
        return 1;
    }

    // Запишем в этот файл две строки
    outf << "This is line 1" << '\n';
    outf << "This is line 2" << '\n';

    return 0;
}