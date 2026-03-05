#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int nilai[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &nilai[i]);
  }

  int is_hard = 0;
  int is_easy = 0;
  for (int i = 0; i < n; i++)
  {
    if (nilai[i] == 1)
    {
      is_hard = 1;
    }
  }

  printf("%s\n", is_hard ? "HARD" : "EASY");

  return 0;
}