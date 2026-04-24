#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int freq[201] = {0};

    int x;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        freq[x + 100]++;
    }

    for (int i = 0; i < 201; i++) {
        if (freq[i] > 0) {
            printf("%d ada %d\n", i - 100, freq[i]);
        }
    }

    return 0;
}