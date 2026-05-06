#include <stdio.h>

int main()
{
    int *ptr;
    int x;
 
    ptr = &x;
    *ptr = 0;
 
    printf("%d", x);
    printf("%d", *ptr);
 
    *ptr += 5;
    printf("%d", x);
    printf("%d", *ptr);
 
    (*ptr)++;
    printf("%d", x);
    printf("%d", *ptr);
 
    return 0;
}