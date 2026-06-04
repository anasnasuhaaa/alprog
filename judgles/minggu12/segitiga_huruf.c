#include <stdio.h>

int main() {
    int N;
    char ch1, ch2, ch3;

    if (scanf("%d", &N) != 1) return 0;

    if (scanf(" %c%c%c", &ch1, &ch2, &ch3) != 3) return 0;

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%c\n", ch1);
        } 
        else if (i == N) {
            for (int j = 1; j < N; j++) {
                printf("%c", ch2);
            }
            printf("%c\n", ch3);
        } 
        else {
            printf("%c", ch1);
            for (int j = 1; j <= i - 2; j++) {
                printf(" ");
            }
            printf("%c\n", ch3);
        }
    }

    return 0;
}