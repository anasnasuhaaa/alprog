#include <stdio.h>
#include <ctype.h>

int main() {
    int frekuensi[26] = {0};
    int ch;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            frekuensi[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (frekuensi[i] > 0) {
            printf("%c %d\n", 'a' + i, frekuensi[i]);
        }
    }

    return 0;
}