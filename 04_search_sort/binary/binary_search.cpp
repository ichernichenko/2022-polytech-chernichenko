
int binary_search(int arr[], int l, int r, int x)
{
    while ((r - l) >= 0)
    {
        int mid = l + (r - l) / 2;

        // Проверяем
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }

    return -1;
}