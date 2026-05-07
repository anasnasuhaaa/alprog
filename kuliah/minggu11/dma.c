#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  int size;

  printf("Enter size: ");
  scanf("%d", &size);
  ptr = (int *)malloc(size * sizeof(int));

  if (ptr == NULL)
  {
    printf("Ga fungsi");
  }
  else
  {
    for (int i = 0; i < size; i++)
    {
      int input;
      scanf("%d", &input);
      ptr[i] = input;
    }
    for (int i = 0; i < size; i++)
    {
      printf("%d ", ptr[i]);
    }
  }

  return 0;
}