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