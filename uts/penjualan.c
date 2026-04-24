// Analisis Penjualan
#include <stdio.h>
int main()
{

  long int nilai[7];
  for (int i = 0; i < 7; i++)
  {
    scanf("%ld", &nilai[i]);
  }

  double avg = 0.00;
  long long max = 0;
  int hari_max = 0;
  for (int i = 0; i < 7; i++)
  {
    avg += nilai[i];
    if (nilai[i] > max)
    {
      max = nilai[i];
      hari_max = i;
    }
  }
  avg /= 7;
  printf("%.2lf\n", avg);
  printf("%lld\n", max);
  switch (hari_max)
  {
  case 0:
    printf("Minggu");
    break;
  case 1:
    printf("Senin");
    break;
  case 2:
    printf("Selasa");
    break;
  case 3:
    printf("Rabu");
    break;
  case 4:
    printf("Kamis");
    break;
  case 5:
    printf("Jumat");
    break;
  case 6:
    printf("Sabtu");
    break;

  default:
    break;
  }

  return 0;
}