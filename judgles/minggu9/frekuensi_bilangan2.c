#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int number[101] = {0};

  int x;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    number[x]++;
  }

  for (int i = 0; i < 101; i++)
  {
    if (number[i] != 0)
    {
      printf("Nilai %d muncul %d kali\n", i, number[i]);
    }
  }

  return 0;
}