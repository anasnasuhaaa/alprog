#include <stdio.h>
#include <stdlib.h>
#define m 2
#define n 3

int main()
{
    int *arr = (int *)malloc(m*n*sizeof(int));
    for (int i=0; i<m; i++)
    for (int j=0; j<n; j++) arr[i*n+j] = i+j;

    for (int i=0; i<m; i++)
    for (int j=0; j<n; j++)
    {
        printf("%d", arr[i*n+j]);
        if (j==n-1) printf("\n");
        else printf(" ");
    }
    return 0;
}