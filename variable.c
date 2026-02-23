#include <stdio.h>
#include <stdbool.h>
int main()
{
  // int
  int number = 4;
  printf("Ini adalah type data int %d \n", number);

  // Float
  float num_float = 2.3;
  printf("Ini adalah tipe data fload %f \n", num_float);

  // Double
  double phi = 3.14159265359;
  printf("ini adalah tipe data double %lf \n", phi); // The default is 6 digit decimal
  printf("ini adalah tipe data double %.15lf \n", phi);

  // Char
  char character = 'A';
  printf("Ini adalah tipe data char %c \n", character);

  // String
  char name[] = "Anas Nasuha";
  printf("My name is %s \n", name);

  // Boolean
  bool status = true;
  bool progress = 0;
  printf("%d \n", status);
  printf("%d \n", progress);
}