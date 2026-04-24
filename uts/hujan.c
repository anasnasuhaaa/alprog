// Analisis Curah Hujan BMKG
#include <stdio.h>

int main()
{
  int n, q;
  scanf("%d %d", &n, &q);

  int curah[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &curah[i]);
  }

  for (int i = 0; i < q; i++)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    double avg = 0.00;

    for (int i = a - 1; i <= b - 1; i++)
    {
      avg += (double)curah[i];
    }

    avg /= (double)(b - a) + 1.00;

    printf("Hari ke %d-%d: %.2lf\n", a, b, avg);
  }

  return 0;
}