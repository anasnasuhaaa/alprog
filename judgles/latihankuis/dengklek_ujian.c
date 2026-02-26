#include <stdio.h>

int main()
{

  int nilai_dengklek;
  scanf("%d", &nilai_dengklek);
  if (nilai_dengklek >= 0 && nilai_dengklek <= 100)
  {
    printf("YA");
  }
  else
  {
    printf("TIDAK");
  }
}