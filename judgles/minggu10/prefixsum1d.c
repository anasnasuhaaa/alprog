#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int prefix[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &prefix[i]);
    }

    int arr[n];
    arr[0] = prefix[0];
    for (int i = 1; i < n; i++)
    {
        arr[i] = prefix[i] - prefix[i - 1];
    }

    int p;
    while (1)
    {
        scanf("%d", &p);
        if (p == -9) break;

        printf("%d ", arr[p - 1]); 
    }

    return 0;
}