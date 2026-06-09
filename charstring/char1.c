#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
  // int a = 'A';
  // printf("%d", a);

  int ch;
  int n = 0;

  while ((ch = getChar()) != EOF)
  {
    n++;
  }

  printf("Jumlah karakter: %d", n);

  // Print ch
  printf("Karakter terakhir: %c", ch);

  return 0;
}
