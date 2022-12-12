#include <cassert>

void matmul(int **a, int a_m, int a_n, int **b, int b_m, int b_n, int **c); // Умножение двух матриц
/// @brief 
/// @param a - матрица а
/// @param m_a - количество строк матрицы а
/// @param n_a - количество столбцов матрицы а
/// @param b  - матрица b
/// @param m_b - количество строк матрицы b
/// @param n_b - количесвто столбцов матрицы b
/// @return 
bool mateq(int **a, int m_a, int n_a, int **b, int m_b, int n_b); // Сравнение двух матриц

int main()
{
    const int n = 3;
    const int m = 3;

    int a_row0[] = {3, 1, 6};
    int a_row1[] = {2, 0, 5};
    int a_row2[] = {1, 3, 2};
    int *a[] = {a_row0, a_row1, a_row2};

    int b_row0[] = {9, 3, 7};
    int b_row1[] = {7, 1, 5};
    int b_row2[] = {1, 4, 5};
    int *b[] = {b_row0, b_row1, b_row2};

    int c_row0[] = {40, 34, 56};
    int c_row1[] = {23, 26, 39};
    int c_row2[] = {32, 14, 32};
    int *expected_c[] = {c_row0, c_row1, c_row2};

    int **c = new int *[n]; // Объявили массив с 
    for (int i = 0; i < n; i++)
        c[i] = new int[n]; // Заполняем массив с массивами

    matmul(a, n, m, b, m, n, c);

    assert(mateq(c, 3, 3, expected_c, 3, 3) == true);

    return 0;
}

void matmul(int **a, int a_m, int a_n, int **b, int b_m, int b_n, int **c)
{
    if (a_n != b_m)
        return;
    for (int i = 0; i < a_m; i++)
    {
        for (int j = 0; j < b_n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < a_n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

bool mateq(int **a, int m_a, int n_a, int **b, int m_b, int n_b)
{
    if (m_a != m_b || n_a != n_b)
        return false;
    for (int i = 0; i < m_a; i++)
    {
        for (int j = 0; j < n_b; j++)
        {
            if (a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}