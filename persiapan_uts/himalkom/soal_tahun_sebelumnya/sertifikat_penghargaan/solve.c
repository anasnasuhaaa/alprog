#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int nilai[n];
  int max = 0, sertif = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &nilai[i]);
    if (nilai[i] > max)
    {
      max = nilai[i];
      sertif = 1;
    }
    else if (nilai[i] == max)
    {
      sertif++;
    }
  }

  printf("%d %d", max, sertif);
  return 0;
}