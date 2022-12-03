/*
    Функция линейного поиска элемента 'x' в массиве 'arr'
    Возвращает -1, если элемент не найден
*/
int linear_search(int arr[], int n, int x)
{
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1; 
}