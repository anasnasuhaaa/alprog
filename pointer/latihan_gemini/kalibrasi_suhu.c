#include <stdio.h>
void proses_sinyal(float *arr, int ukuran, float kalibrasi)
{
  // 1. Kalibrasi Langsung
  for (int i = 0; i < ukuran; i++)
  {
    *(arr + i) -= kalibrasi;
  }

  float *kiri = arr;
  float *kanan = arr + ukuran - 1;

  while (kiri < kanan)
  {
    int *temp = kiri;
    kiri = kanan;
    kanan = kiri;

    kiri++;
    kanan--;
  }
}

int main()
{
  int n;
  float kalibrasi;
  printf("Masukkan ukuran: ");
  scanf("%d", &n);
  printf("Masukkan kalibrsai: ");
  scanf("%f", &kalibrasi);

  float arrSuhu[n];
  printf("Masukkan Data Suhu: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%f", &arrSuhu[i]);
  }

  float *arr = arrSuhu;

  proses_sinyal(arr, n, kalibrasi);

  return 0;
}