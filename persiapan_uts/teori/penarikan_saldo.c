#include <stdio.h>

int main()
{
  long long penarikan, saldo = 1000000;
  scanf("%lld", &penarikan);

  if (penarikan % 50000 == 0)
  {
    if (penarikan <= saldo)
    {
      saldo -= penarikan;
      printf("Berhasil. Sisa saldo = %lld rupiah.", saldo);
    }
    else
    {
      printf("Saldo tidak cukup.");
    }
  }
  else
  {
    printf("Penarikan harus kelipatan 50000 rupiah.");
  }

  return 0;
}