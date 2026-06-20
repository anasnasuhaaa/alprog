#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int ch;
  int n = 0;
  int last_ch = 0;

  while ((ch = getchar()) != EOF)
  {
    n++;
    if (isgraph(ch))
    {
      last_ch = ch;
    }
  }

  printf("Jumlah karakter: %d\n", n);
  if (n > 0)
  {
    printf("Karakter Terakhir: %c\n", (char)last_ch);
  }

  for (int i = 0; i < n; i++)
  {
    printf("%c", (char)ch);
  }

  return 0;
}
