#include <iostream>
using namespace std;
int search(int arr[], int n, int x, int result[]);

int main()
{
    int arr[] = {2, 5, 2, 3, 6, 2, 5, 8, 2};
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n];

    int count = search(arr, n, x, result);
    if (count == -1)
    {
        cout << "Элемент " << x << " не найден " << endl;
    }
    else
    {
        cout << "Количество найденных элементов " << x << " равно " << count << endl;
        cout << "Элемент найден в индексах" << endl;
        for (int i = 0; i < count; ++i)
        {
            cout << result[i] << endl;
        }
    }
    return 0;
}

