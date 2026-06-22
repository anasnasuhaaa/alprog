#include <stdio.h>
#include <string.h>

int main()
{
  char word[5005];
  int L;
  scanf("%d", &L);
  int current_len = 0;
  int is_first_word = 1;

  while (scanf("%s", word) != EOF)
  {
    int word_len = strlen(word);
    if (is_first_word)
    {
      printf("%s", word);
      current_len = word_len;
      is_first_word = 0;
    }
    else if (current_len + 1 + word_len <= L)
    {
      printf(" %s", word);
      current_len += word_len + 1;
    }
    else
    {
      printf("\n%s", word);
      current_len = word_len;
    }
  }

  return 0;
}
