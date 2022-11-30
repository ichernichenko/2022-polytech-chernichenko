
void swap(int arr[], int idx_a, int idx_b)
{
    int temp = arr[idx_a]; // временная переменная
    arr[idx_a] = arr[idx_b];
    arr[idx_b] = temp; 
}

int partition(int arr[], int start, int end)
{

    // Опорный элемент — первый элемент
    int pivot = arr[start];

    // Считаем число элементов меньше опорного
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // Помещаем опорный элемент в нужное место
    int pivotIndex = start + count;
    swap(arr, pivotIndex, start);

    // Перебрасываем элементы меньше опорного
    // в левую часть, а больше опорного в правую часть
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr, i, j);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void quick_sort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    // Разбиение массива
    int p = partition(arr, start, end);

    // Сортировка левой части
    quick_sort(arr, start, p - 1);
    // Сортировка правой части
    quick_sort(arr, p + 1, end);
}

