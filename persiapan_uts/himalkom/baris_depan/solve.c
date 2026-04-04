#include <stdio.h>
int main()
{

  int n;
  scanf("%d", &n);
  int anakPerBaris[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &anakPerBaris[i]);
  }

  if (n % 2 == 0)
  {
    printf("*\n");
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < anakPerBaris[i]; j++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  else
  {
    int mid = n / 2;
    for (int i = 0; i < n; i++)
    {
      if (i == mid)
      {
        printf("*");
        for (int j = 0; j < anakPerBaris[i]; j++)
        {
          printf("*");
        }
        printf("\n");
      }
      else
      {
        printf(" ");
        for (int j = 0; j < anakPerBaris[i]; j++)
        {
          printf("*");
        }
        printf("\n");
      }
    }
  }

  return 0;
}