#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  char kata[101];
  int pos[55];
  int n;
} Data;

int main()
{
  Data d;
  char line[1005];

  while (scanf(" %[^\n]", line) == 1)
  {
    char *token = strtok(line, ";");

    strcpy(d.kata, token);
    d.n = 0;

    while ((token = strtok(NULL, ";")) != NULL)
    {
      d.pos[d.n++] = atoi(token);
    }

    printf("%s(%d):", d.kata, d.n);

    for (int i = 0; i < d.n; i++)
    {
      printf("%d", d.pos[i]);
      if (i != d.n - 1)
        printf("->");
    }

    printf(" \n");
  }

  return 0;
}