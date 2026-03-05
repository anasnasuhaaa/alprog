#include <stdio.h>

int main()
{

  int n;
  scanf("%d", &n);

  int ori_number[n];
  int number[n];
  int reverse_number[n];
  int output[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ori_number[i]);
    number[i] = ori_number[i];
    int remainder;
    int reversed = 0;
    while (number[i] != 0)
    {
      remainder = number[i] % 10;
      reversed = reversed * 10 + remainder;
      number[i] /= 10;
    }
    reverse_number[i] = reversed;
    if (ori_number[i] == reverse_number[i])
    {
      output[i] = 1;
    }
    else
    {
      output[i] = 0;
    }
  }
  for (int j = 0; j < n; j++)
  {
    printf("%d \n", output[j]);
  }

  return 0;
}