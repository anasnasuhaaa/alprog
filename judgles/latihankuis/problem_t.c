#include <stdio.h>
int main()
{

  char s[100];
  scanf("%s", s);
  char find_leter = 'O';
  int count = 0;
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] == find_leter)
    {
      count++;
    }
  }

  if (count == 1)
  {
    printf("Ya\n");
  }
  else
  {
    printf("Tidak\n");
  }

  return 0;
}