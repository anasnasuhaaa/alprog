#include <stdio.h>
int main()
{
  int a = 5;
  int *p;
  p = &a; // p berisi alamat dari a// & adalah operator referensi
  printf("%d %d %p %p\n", a, *p, p, &a);
  *p = 10; // nilai a berubah menjadi
}