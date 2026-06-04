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
    int n;
    int totalUsia = 0;
    int c;

    char **nama;
    char baris[MAX_CHAR + 2];

    scanf("%d", &n);

    /* Menghapus newline setelah membaca n */
    while ((c = getchar()) != '\n' && c != EOF);

    /* Alokasi array untuk menyimpan nama */
    nama = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++) {
        char *tokenUsia;
        char *tokenNama;

        fgets(baris, sizeof(baris), stdin);

        /*
        Memisahkan string berdasarkan titik-koma.
        Contoh:
        "26;Indah Nian"
        menjadi:
        tokenUsia = "26"
        tokenNama = "Indah Nian"
        */
        tokenUsia = strtok(baris, ";");
        tokenNama = strtok(NULL, ";");

        totalUsia += atoi(tokenUsia);

        tokenNama = trim(tokenNama);

        nama[i] = (char *)malloc((strlen(tokenNama) + 1) * sizeof(char));
        strcpy(nama[i], tokenNama);
    }

    /* Menampilkan seluruh nama */
    for (int i = 0; i < n; i++) {
        printf("%s\n", nama[i]);
    }

    /* Menampilkan rata-rata usia */
    printf("%.2f\n", (double)totalUsia / n);

    /* Membebaskan memori */
    for (int i = 0; i < n; i++) {
        free(nama[i]);
    }

    free(nama);

    return 0;
}