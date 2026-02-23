#include <stdio.h>

int main()
{
  int w, h;
  double pi = 3.14159;

  while (1)
  {
    scanf("%d %d", &w, &h);

    if (w == -1 || h == -1) break;
 
    double r1 = w / (2.0 * pi);
    double t1 = h - (2.0 * r1);
    double volume1 = pi * r1 * r1 * t1;

    double r2 = h / (2.0 * (pi + 1.0));
    if (r2 > w / 2.0)
    {
      r2 = w / 2.0;
    }
    
    double t2 = w;
    double volume2 = pi * r2 * r2 * t2;

    double maxVolume;
    if (volume1 > volume2)
    {
      maxVolume = volume1;
    }
    else
    {
      maxVolume = volume2;
    }
    printf("%.3f\n", maxVolume);
  }

  return 0;
}