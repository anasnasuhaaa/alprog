#include <stdio.h>

// START FUNGSI BUBBLE SORT
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int n, int arr[n])
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
        swap(&arr[j], &arr[j + 1]);
    }
  }
}
// END FUNGSI BUBBLE SORT


int main()
{
  int m, n;
  printf("Masukkan ukuran: ");
  scanf("%d %d", &m, &n);

  // MENJADIKAN ARRAY 1 DIMENSI
  int size_arr = m * n;
  int arr[size_arr];

  printf("Masukkan Array: \n");
  for (int i = 0; i < size_arr; i++)
  {
    scanf("%d", &arr[i]);
  }

  bubbleSort(size_arr, arr);
  int idx_arr = 0;

  printf("Hasil sort Array: \n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d", arr[idx_arr++]);
      if (j == n - 1)
        printf("\n");
      else
        printf(" ");
    }
  }

  return 0;
}