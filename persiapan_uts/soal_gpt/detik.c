#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int jam = n / 3600;
  int menit = (n % 3600) / 60;
  int detik = n % 60;

  printf("Jam: %d\n", jam);
  printf("Menit: %d\n", menit);
  printf("Detik: %d\n", detik);


  return 0;
}