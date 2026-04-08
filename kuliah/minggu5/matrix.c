#include <stdio.h>
int main()
{
  int baris, kolom;
  scanf("%d %d", &baris, &kolom);

  int jumlah_per_baris[baris];
  for (int i = 0; i < baris; i++)
  {
    int jumlah = 0;
    for (int i = 0; i < kolom; i++)
    {
      int elemen;
      scanf("%d", &elemen);
      jumlah += elemen;
    }
    jumlah_per_baris[i] = jumlah;
  }

  for (int i = 0; i < baris; i++)
  {
    printf("%d\n", jumlah_per_baris[i]);
  }

  return 0;
}