#include <stdio.h>
int main()
{

  int uts;
  int uas;

  scanf("%d %d", &uts, &uas);
  int mean = (uts + uas) / 2;

  if (uts > 40 && uas > 40 && mean > 60)
  {
    printf("LULUS\n");
  }
  else if ((uts <= 40 || uas <= 40) && mean > 60)
  {
    printf("LULUS BERSYARAT\n");
  }
  else if (mean < 60)
  {
    printf("TIDAK LULUS\n");
  }

  return 0;
}