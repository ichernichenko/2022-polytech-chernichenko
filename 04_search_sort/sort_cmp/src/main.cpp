#include <iostream>
#include "func.h"
#include <chrono>
using namespace std;

int main()
{
    int arr_size[] = {10, 100, 1000, 10000, 100000, 1000000};
    int size = sizeof(arr_size) / sizeof(arr_size[0]);
    for (int i = 0; i < size; i++)
    {
        int n = arr_size[i];
        int arr[n];
        fill_array_random(arr, n, 0, 1000);
        auto begin = chrono::steady_clock::now(); //Текущее время перед выполнением функци
        selection_sort(arr, n);
        auto end = chrono::steady_clock::now();                                    //Текущее время после выполнения функции
        auto elapsed_ss = chrono::duration_cast<chrono::nanoseconds>(end - begin); //Потраченное время на выполнение функции

        begin = chrono::steady_clock::now();
        quick_sort(arr, 0, n);
        end = chrono::steady_clock::now();
        auto elapsed_qs = chrono::duration_cast<chrono::nanoseconds>(end - begin);
        cout << n << ": " << elapsed_ss.count() << " nanoc (ss), " << elapsed_qs.count() << " nanoc (qs)\n";
    }
    return -1;
}
