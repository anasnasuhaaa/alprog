#include <stdio.h>

int main()
{
  int myAge = 30;
  int *ptr = &myAge;

  printf("%d\n", myAge);
  printf("%p\n", &myAge);
  printf("%p", ptr);
  printf("\n\n");

  // Pointer Array
  int arrNum[5] = {12, 35, 90, 54, 21};
  for (int i = 0; i < 5; i++)
  {
    printf("%d \n", arrNum[i]);
  }
  printf("\n");

  // Get the memory address of the myNumbers array
  printf("%p\n", arrNum);

  // Get the memory address of the first array element
  printf("%p\n", &arrNum[0]);
  for(int i = 0; i < )
  return 0;
}