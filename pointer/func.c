#include <stdio.h>
#include <stdlib.h>

int tambah(int a, int b) { return a + b; }
int kurang(int a, int b) { return a - b; }
int kali(int a, int b) { return a * b; }
int bagi(int a, int b) { return a / b; }

int main()
{
  int x;
  printf("__Selamat datang di program kalkulator___\n");
  printf("1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n Silakan pilih: ");

  scanf("%d", &x);

  printf(fp(3, 3));

  return 0;
}