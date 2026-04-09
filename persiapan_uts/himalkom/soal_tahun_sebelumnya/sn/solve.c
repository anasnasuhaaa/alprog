#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int bil[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &bil[i]);
  }

  for (int i = 0; i < n; i++)
  {
    int hasil = 0;

    // 1 2 3 4 5
    for (int j = i - 1; j > 0; j--)
    {
      hasil += bil[j];
    }

    if (i % 2 == 0)
    {
      hasil += 2;
    }
    else
    {
      hasil += 3;
    }

    if (i == 0)
    {
      printf("%d\n", bil[i]);
    }
    else
    {
      printf("%d \n", hasil);
    }
  }

  int basis = 2;
  int pangkat = 5;
  // Hasilnya harusnya 32
  int hasil = 1;
  for (int i = 1; i <= pangkat; i++)
  {
    hasil *= basis;
  }
  printf("%d", hasil);

  return 0;
}