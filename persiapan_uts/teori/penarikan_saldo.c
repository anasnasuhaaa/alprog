#include <stdio.h>

int main()
{
 long long penarikan;
 long long saldo = 1000000;
  scanf("%lld", &penarikan);

  if (penarikan <= saldo)
  {
    if (penarikan % 50000 == 0)
    {
      saldo = saldo - penarikan;
      printf("Berhasil. Sisa saldo = %lld", saldo);
    }
    else
    {
      printf("Penarikan harus kelipatan 50000.");
    }
  }
  else
  {
    printf("Saldo tidak cukup.");
  }

  return 0;
}