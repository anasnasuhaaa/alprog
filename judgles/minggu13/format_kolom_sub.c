#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_N 1000
#define MAX_BARIS 42
#define MAX_NAMA 39

char *trim(char *s) {
    int panjang = strlen(s);

    while (panjang > 0 && isspace((unsigned char)s[panjang - 1])) {
        s[panjang - 1] = '\0';
        panjang--;
    }

    return s;
}

void substring(const char *st, int start, int len, char *dest) {
    strncpy(dest, st + start, len);
    dest[len] = '\0';
}

int main() {
    int n;
    int totalUsia = 0;
    int c;

    char baris[MAX_BARIS];
    char usiaString[3];
    char nama[MAX_N][MAX_NAMA];

    scanf("%d", &n);

    while ((c = getchar()) != '\n' && c != EOF);

    for (int i = 0; i < n; i++) {
        fgets(baris, sizeof(baris), stdin);

        substring(baris, 0, 2, usiaString);

        totalUsia += atoi(usiaString);

        strcpy(nama[i], baris + 2);

        trim(nama[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", nama[i]);
    }

    printf("%.2f\n", (double)totalUsia / n);

    return 0;
}