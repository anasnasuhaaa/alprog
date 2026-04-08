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
    // Ketua kelas di paling utara
    printf("*\n");

    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < anakPerBaris[j]; k++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  else
  {
    // Ketua kelas di tengah
    int mid = n / 2;

    for (int j = 0; j < n; j++)
    {
      if (j == mid)
      {
        // baris tengah: tambah 1 bintang untuk ketua
        for (int k = 0; k < anakPerBaris[j] + 1; k++)
        {
          printf("*");
        }
      }
      else
      {
        // baris lain: geser 1 spasi ke kanan
        printf(" ");
        for (int k = 0; k < anakPerBaris[j]; k++)
        {
          printf("*");
        }
      }
      printf("\n");
    }
  }

  return 0;
}