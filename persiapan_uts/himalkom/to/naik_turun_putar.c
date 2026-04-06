#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int total = 2 * n;
    int arr[200005], hasil[200005];

    int ganjil = 1;
    int genap = 2 * n;

    // Membentuk deret gabungan
    for (int i = 0; i < total; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = ganjil;
            ganjil += 2;
        }
        else
        {
            arr[i] = genap;
            genap -= 2;
        }
    }

    // Supaya rotasi tidak berlebihan
    k = k % total;

    // Rotasi ke kanan
    for (int i = 0; i < total; i++)
    {
        hasil[(i + k) % total] = arr[i];
    }

    // Output
    for (int i = 0; i < total; i++)
    {
        printf("%d", hasil[i]);
        if (i != total - 1)
            printf(" ");
    }

    return 0;
}