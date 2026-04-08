#include <stdio.h>

int main()
{
  int x, n, hasil = 0;
  scanf("%d %d", &x, &n);

  int pangkat = 3;
  int elemen[n];
  elemen[0] = x;
  for (int i = 1; i < n; i++)
  {
    int hasil_sementara = 1;
    if (i % 2 == 1)
    {
      for (int j = 1; j <= pangkat; j++)
      {
        hasil_sementara *= x;
      }
      pangkat += 2;
      hasil_sementara *= -1;
      elemen[i] = hasil_sementara;
    }
    else
    {
      for (int j = 1; j <= pangkat; j++)
      {
        hasil_sementara *= x;
      }
      pangkat += 2;
      elemen[i] = hasil_sementara;
    }
  }

  for (int k = 0; k < n; k++)
  {
    printf("%d\n", elemen[k]);
    hasil += elemen[k];
  }
  printf("Hasil = %d", hasil);

  return 0;
}