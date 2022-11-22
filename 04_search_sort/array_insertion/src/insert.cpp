/*
 Функция вставляет значение x в позицию p массива arr 
 (пример, после вставки x=4 в позицию p=1 в массив {1,5,8} будет {1,4,5,8})
*/
void insert(int arr[], int size, int p, int x, int result[]) 
{
   for (int i = 0; i <= size; ++i)
   {
      if (i < p)
      {
         result[i] = arr[i];
      }
      if (i == p)
      {
         result[i] = x;
      }
      if (i > p)
      {
         result[i] = arr[i - 1];
      }
   }
}