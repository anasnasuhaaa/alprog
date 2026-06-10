#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nomor[40];
} Rekening;

int bandingkan(const void *a, const void *b) {
    const Rekening *rekeningA = (const Rekening *)a;
    const Rekening *rekeningB = (const Rekening *)b;

    return strcmp(rekeningA->nomor, rekeningB->nomor);
}

int main() {
    int n;
    Rekening data[5000];

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        fgets(data[i].nomor, sizeof(data[i].nomor), stdin);

        data[i].nomor[strcspn(data[i].nomor, "\r\n")] = '\0';
    }

    qsort(data, n, sizeof(Rekening), bandingkan);

    int jumlah = 1;

    for (int i = 1; i <= n; i++) {
        if (i < n && strcmp(data[i].nomor, data[i - 1].nomor) == 0) {
            jumlah++;
        } else {
            printf("%s %d\n", data[i - 1].nomor, jumlah);
            jumlah = 1;
        }
    }

    return 0;
}