#include <stdio.h>
#include <ctype.h>

int main()
{
  char c1, c2;
  int ch;

  if (scanf("%c %c", &c1, &c2) != 2)
    return 0;

  while ((ch = getchar()) != '\n' && ch != EOF)
    ;

  char c1_lower = tolower(c1);
  char c1_upper = toupper(c1);
  char c2_lower = tolower(c2);
  char c2_upper = toupper(c2);

  while ((ch = getchar()) != EOF)
  {
    if (ch == c1_lower)
    {
      putchar(c2_lower);
    }
    else if (ch == c1_upper)
    {
      putchar(c2_upper);
    }
    else
    {
      putchar(ch);
    }
  }

  return 0;
}