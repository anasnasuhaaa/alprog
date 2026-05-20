#include <stdio.h>

int bersihkan_nol(int ukuran, int *arr)
{
  int *baca = arr;
  int *tulis = arr; // tulis mulai dari awal array

  for (int i = 0; i < ukuran; i++)
  {
    // Asisten baca memeriksa elemen ke-i
    if (*(baca + i) != 0)
    {
      // 1. Tulis angka valid ke posisi yang dijaga asisten 'tulis'
      *tulis = *(baca + i);

      // 2. Asisten 'tulis' maju 1 langkah ke kotak berikutnya
      tulis++;
    }
  }

  // Berapa jumlah data valid?
  // Jarak melangkah si 'tulis' dari awal array (arr) adalah jumlah datanya!
  return tulis - arr;
}

int main()
{
  int data[] = {12, 0, 35, 0, 0, 42, 10};
  int n = 7;

  // Panggil fungsi, tampung jumlah data validnya
  int jumlah_valid = bersihkan_nol(n, data);

  printf("Jumlah data valid: %d\n", jumlah_valid);

  printf("Data setelah dibersihkan: ");
  for (int i = 0; i < jumlah_valid; i++)
  {
    printf("%d ", data[i]);
  }
  printf("\n");
  return 0;
}