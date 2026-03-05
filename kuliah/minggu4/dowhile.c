#include <stdio.h>
int main()
{

  int counter = 1;
  do
    printf("Hello %d\n", counter++);

  while (counter <= 10);

  return 0;
}