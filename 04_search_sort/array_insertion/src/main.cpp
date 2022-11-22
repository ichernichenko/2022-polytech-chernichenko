#include <iostream>
#include <cassert>
using namespace std;

void insert(int arr[], int size, int p, int x, int result[]);
int search_position(int arr[], int size, int x);
void insert_sorted(int arr[], int size, int x, int new_arr[]);

int main()
{
   // Пример использования insert
   int arr[] = {1, 5, 8};
   int size_arr = sizeof(arr) / sizeof(arr[0]);
   int size_result = size_arr + 1;
   int result_arr[size_result];

   insert(arr, size_arr, 1, 3, result_arr); // {1,3,5,8}

   int arr_expected[] = {1, 3, 5, 8};

   for (int i = 0; i <= size_arr; ++i)
   {
      assert(result_arr[i] == arr_expected[i]);
   }

   // Пример использования search_position
   assert(search_position(result_arr, size_result, 3) == 1);
   assert(search_position(result_arr, size_result, 9) == 4);
   assert(search_position(result_arr, size_result, 1) == 0);

   // Пример использования insert_sorted
   int new_arr[size_arr + 1];
   insert_sorted(arr, size_arr, 7, new_arr); // {1,5,7,8}
   
   int arr_expected1[] = {1, 5, 7, 8};

   for (int i = 0; i <= size_arr; ++i)
   {
      assert(new_arr[i] == arr_expected1[i]);
   }

}
