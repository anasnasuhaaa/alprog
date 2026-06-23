#include <stdio.h>
#include <string.h>

int main()
{
  int t;
  scanf("%d", &t);

  while (t--)
  {
    char s[5005];
    char stack[5005];
    int top = -1;

    scanf("%s", s);
    int len_s = strlen(s);

    for (int i = 0; i < len_s; i++)
    {
      if (top >= 0 && stack[top] == s[i])
      {
        char dup = s[i];
        top--;

        while (i + 1 < len_s && s[i + 1] == dup)
        {
          i++;
        }
      }
      else
      {
        stack[++top] = s[i];
      }
    }
    if (top == -1)
    {
      printf("-\n");
    }
    else
    {
      stack[top + 1] = '\0';
      printf("%s\n", stack);
    }
  }
  return 0;
}