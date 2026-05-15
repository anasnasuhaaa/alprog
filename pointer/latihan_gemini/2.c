#include <stdio.h>

#include <stdio.h>

int main()
{
  int data[] = {100, 200, 300, 400};
  int *ptr1 = &data[0];
  int *ptr2 = &data[3];

  ptr1++;                 // data[1] = 200
  *ptr1 = *ptr1 + 50;     // = 200 + 50 = 250
  printf("%d ", data[1]); // 250

  ptr2 = ptr2 - 2;         // data[3-2] = 250
  *ptr2 = *ptr1;           // 250 = 250
  printf("%d ", data[1]);  // 250
  printf("%d\n", data[2]); // 300

  return 0;
}