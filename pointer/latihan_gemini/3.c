#include <stdio.h>

int main()
{
  int nilai[] = {10, 20, 30};
  int *p1 = nilai; // nilai[0] = 10
  int **p2 = &p1;  // alamat dari alamat nilai[0]

  // Langkah 1
  printf("%d ", **p2); // 10

  // Langkah 2
  (*p1)++;
  printf("%d ", nilai[0]); // 11

  // Langkah 3
  *p2 = *p2 + 1;
  printf("%d\n", *p2);

  return 0;
}