#include <stdio.h>
#include <ctype.h>

int main()
{
  char string[200000];
  fgets(string, sizeof(string), stdin);
  for (int i = 0; string[i] != '\0'; i++)
  {
    if (tolower(string[i]) != tolower(string[i + 1]))
      printf("%c", string[i]);
  }
}