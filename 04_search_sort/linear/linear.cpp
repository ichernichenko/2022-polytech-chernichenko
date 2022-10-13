#include <iostream>
using namespace std;
int search(int arr[], int n, int x, int result[]);

int main()
{
    int arr[] = {2, 5, 2, 3, 6, 2, 5, 8, 2};
    int x = 0;
    const int n = sizeof(arr) / sizeof(arr[0]);
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

int search(int arr[], int n, int x, int result[])
{
    int j = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            result[j++] = i;
        }
    }

    if (j == 0)
    {
        return -1;
    }
    else
    {
        return j;
    };
}