#include <stdio.h>
#include <string.h>

struct Makanan
{
  char name[20];
  int price;
  char asal[20];
};

int main()
{

  struct Makanan makanan1 = {"Gudeg", 15000, "Jogja"};

  printf("Makanan 1: ");
  printf("%S", makanan1.name);

  return 0;
}