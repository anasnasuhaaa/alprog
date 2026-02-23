#include <stdio.h>
int main()
{

  int n;

  printf("Masukkan angka: ");
  scanf("%d", &n);
  int counter = 1;
  while (counter <= n)
  {
    /* code */
    printf("Welcome ke %d\n", counter);
    counter++;
  }

  return 0;
}