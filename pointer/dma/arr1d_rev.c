#include <stdio.h>
#include <stdlib.h>

int *rev_arr(int n, int *t)
{
  int *dtArev;
  dtArev = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    dtArev[i] = t[n - i - 1];
  }
  return dtArev;
}

void println(int n, int *a)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d", a[i]);
    if (i < n)
      printf(" ");
  }
}

int main()
{
  int *dtA, n, x;
  printf("Masukkan ukuran array: ");
  scanf("%d", &n);

  dtA = (int *)malloc(n * sizeof(int));
  printf("Masukkan isi array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    dtA[i] = x;
  }

  int *res = rev_arr(n, dtA);
  println(n, res);

  return 0;
}