#include <stdio.h>
#include <string.h>
int main()
{
  char s[200000];
  scanf("%s", &s);

  int n = strlen(s);

  for (int i = 0; i < n; i++)
  {
    if (s[i] != s[i + 1])
      printf("%c", s[i]);
  }

  return 0;
}