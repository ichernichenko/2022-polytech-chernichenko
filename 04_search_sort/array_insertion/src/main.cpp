#include <iostream>
#include <cassert>
using namespace std;

void insert(int arr[], int size, int p, int x, int result[]);

int main()
{
   int arr[] = {1, 5, 8};
   int size = sizeof(arr) / sizeof(arr[0]);
   int result[size + 1];
  
   insert(arr, size, 1, 3, result); // {1,3,5,8}

   int arr_expected[] = {1, 3, 5, 8};
      
   for (int i = 0; i <= size; ++i)
   {
      cout << result[i];
      assert(result[i] == arr_expected[i]);
   }
   
}
