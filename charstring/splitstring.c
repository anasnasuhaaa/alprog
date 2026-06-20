#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
  char string[] = "C Programming is Fun";
  char *word_token = strtok(string, " ");
  while (word_token)
  {
    printf("%s\n", word_token);
    word_token = strtok(NULL, " ");
  }

  return 0;
}