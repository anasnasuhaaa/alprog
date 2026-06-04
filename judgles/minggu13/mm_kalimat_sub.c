#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 2000

char *trim(char *s) {
    int panjang = strlen(s);

    while (panjang > 0 && isspace((unsigned char)s[panjang - 1])) {
        s[panjang - 1] = '\0';
        panjang--;
    }

    return s;
}

int main() {
    int n, query;
    int c;
    char **kalimat;

    scanf("%d", &n);

    while ((c = getchar()) != '\n' && c != EOF);

    kalimat = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++) {
        kalimat[i] = (char *)malloc((MAX_CHAR + 2) * sizeof(char));
        fgets(kalimat[i], MAX_CHAR + 2, stdin);
        kalimat[i] = trim(kalimat[i]);
    }

    scanf("%d", &query);

    while (query != -9) {
        printf("%s\n", kalimat[query - 1]);
        scanf("%d", &query);
    }

    for (int i = 0; i < n; i++) {
        free(kalimat[i]);
    }

    free(kalimat);

    return 0;
}