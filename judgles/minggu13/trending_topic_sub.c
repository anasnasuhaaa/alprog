#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_BARIS 2000
#define MAX_TOPIK 1000
#define MAX_PANJANG_TOPIK 100

int main() {
    char baris[MAX_BARIS];
    char daftarTopik[MAX_TOPIK][MAX_PANJANG_TOPIK];
    int frekuensi[MAX_TOPIK];

    int banyakTopik = 0;
    int indeksTerpopuler = -1;

    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        int panjangBaris = strlen(baris);

        for (int i = 0; i < panjangBaris; i++) {
            if (baris[i] == '#') {
                char topik[MAX_PANJANG_TOPIK];
                int panjangTopik = 0;

                i++;
                while (
                    i < panjangBaris &&
                    (isalnum((unsigned char)baris[i]) || baris[i] == '_')
                ) {
                    if (panjangTopik < MAX_PANJANG_TOPIK - 1) {
                        topik[panjangTopik] =
                            tolower((unsigned char)baris[i]);

                        panjangTopik++;
                    }

                    i++;
                }

                topik[panjangTopik] = '\0';

                if (panjangTopik > 0) {
                    int indeksTopik = -1;

                    for (int j = 0; j < banyakTopik; j++) {
                        if (strcmp(daftarTopik[j], topik) == 0) {
                            indeksTopik = j;
                            break;
                        }
                    }

                    if (indeksTopik == -1) {
                        strcpy(daftarTopik[banyakTopik], topik);
                        frekuensi[banyakTopik] = 0;

                        indeksTopik = banyakTopik;
                        banyakTopik++;
                    }

                    frekuensi[indeksTopik]++;

                    if (
                        indeksTerpopuler == -1 ||
                        frekuensi[indeksTopik] >
                            frekuensi[indeksTerpopuler] ||
                        (
                            frekuensi[indeksTopik] ==
                                frekuensi[indeksTerpopuler] &&
                            indeksTopik < indeksTerpopuler
                        )
                    ) {
                        indeksTerpopuler = indeksTopik;
                    }
                }
                i--;
            }
        }
    }

    if (indeksTerpopuler != -1) {
        printf("%s\n", daftarTopik[indeksTerpopuler]);
    }

    return 0;
}