#include <stdio.h>
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
int main()
{

  int r, c;
  scanf("%d %d", &r, &c);
  int size_arr = r * c;

  int arr[size_arr];

  for (int i = 0; i < size_arr; i++)
  {
    scanf("%d", &arr[i]);
  }

  bubbleSort(size_arr, arr);

  int idx = 0;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d", arr[idx++]);

      if (j == c - 1)
        printf("\n");
      else
        printf(" ");
    }
  }

  return 0;
}