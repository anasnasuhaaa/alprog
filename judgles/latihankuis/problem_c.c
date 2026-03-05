#include <stdio.h>
int main()
{
  int length;
  scanf("%d", &length);

  int number[length];
  for (int i = 0; i < length; i++)
  {
    scanf("%d", &number[i]);
  }
  for (int i = length - 1; i >= 0; i--)
  {
    printf("%d", number[i]);
    if (length > 1 && i > 0)
    {
      printf(",");
    }
  }
}