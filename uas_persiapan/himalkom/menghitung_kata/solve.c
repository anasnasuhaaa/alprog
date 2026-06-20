#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
  char target[10];
  char input_str[100];
  int count = 0;

  if (scanf("%s", target) != 1)
    return 0;

  getchar();
  while (fgets(input_str, sizeof(input_str), stdin))
  {
    char *word = strtok(input_str, " \n\t\r");
    while (word != NULL)
    {
      if (strcasecmp(word, target) == 0)
        count++;
      word = strtok(NULL, " \n\t\r");
    }
  }
  printf("%d", count);
  return 0;
}