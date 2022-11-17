#include <iostream>
using namespace std;

int binary_search(int arr[], int l, int r, int x);

int main()
{
    int arr[] = {-5, -4, -3, 0, 3, 4, 5};
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binary_search(arr, 0, n - 1, x);
    if (result == -1)
    {
        cout << "Элемент не найден" << endl;
    }
    else
    {
        cout << "Элемент " << x << " найден на позиции " << result << endl;
    }
    return 0;
}