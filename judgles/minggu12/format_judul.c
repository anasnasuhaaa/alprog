#include <stdio.h>
#include <ctype.h>

int main() {
    int c;
    int n = 1;

    while ((c = getchar()) != EOF) {
        if (isspace(c)) {
            putchar(c);
            n = 1;
        } else {
            if (n) {
                putchar(toupper(c));
                n = 0;
            } else {
                putchar(c);
            }
        }
    }

    return 0;
}