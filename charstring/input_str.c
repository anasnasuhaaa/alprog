#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
  int capacity = 10, idx_str = 0;
  char ch;
  char *str = malloc(capacity * sizeof(char));

  while ((ch = getchar()) != EOF)
  {
    if (ch == '\n' || ch == '\r')
    {
      continue;
    }

    if (idx_str >= capacity - 1)
    {
      capacity *= 2;
      str = realloc(str, capacity * sizeof(char));
    }
    str[idx_str++] = ch;
  }

  // str[idx_str] = '\0';
  printf("String length: %d", idx_str);
  printf("String: %s", str);

  free(str);

  return 0;
}