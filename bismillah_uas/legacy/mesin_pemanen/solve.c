#include <stdio.h>
#include <stdlib.h>

int main()
{
  char input[100];
  fgets(input, sizeof(input), stdin);
  printf("%s\n", input);
  int num = atoi(input);
  printf("%d", num);

  return 0;
}