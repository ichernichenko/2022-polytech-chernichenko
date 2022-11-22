/*
  Функция вставляет значение x в у массива arr в упорядоченный массив так, чтобы не нарушить порядок
*/
#include "functions.h"

void insert_sorted(int arr[], int size, int x, int new_arr[])
{   
    int i = search_position(arr, size, x); 
    insert(arr, size, i, x, new_arr);
}