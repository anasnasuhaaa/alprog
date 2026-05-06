#include <stdio.h>

void what(int *a, int n)
{
    for (int i=0; i<n; i++)
        a[i]=a[i]+5;
}

int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);

    what(arr, n);

    for (int i=0; i<n; i++)
        printf("%d ", ++*arr);
    printf("\n");

    return 0;
}