#include <stdio.h>

#define PI 3.14159

int main()
{
  double w, h;

  while (1)
  {
    scanf("%lf", &w);
    if (w == -1)
      break;

    scanf("%lf", &h);

    double V1 = 0.0, V2 = 0.0;

    if (h > w)
    {
      double r1 = w / 2.0;
      double t1 = h - w;
      V1 = PI * r1 * r1 * t1;
    }

    double r2 = w / (2.0 * PI);
    double t2 = h;
    V2 = PI * r2 * r2 * t2;

    double maxVolume = (V1 > V2) ? V1 : V2;

    printf("%.3f\n", maxVolume);
  }

  return 0;
}
