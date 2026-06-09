# Penjelasan Program Jumlah dan Posisi Kata

## Kode Program

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char kata[101];
    int pos[55];
    int n;
} Data;

int main() {
    Data d;
    char line[1005];
    char *token;

    while (scanf(" %1004[^\n]", line) == 1) {
        token = strtok(line, ";");

        strcpy(d.kata, token);
        d.n = 0;

        token = strtok(NULL, ";");

        while (token != NULL) {
            d.pos[d.n] = atoi(token);
            d.n++;

            token = strtok(NULL, ";");
        }

        printf("%s(%d):", d.kata, d.n);

        for (int i = 0; i < d.n; i++) {
            printf("%d", d.pos[i]);

            if (i < d.n - 1) {
                printf("->");
            }
        }

        printf(" \n");
    }

    return 0;
}
```

---

## 1. Struct untuk Menyimpan Data

```c
typedef struct {
    char kata[101];
    int pos[55];
    int n;
} Data;
```

Struct `Data` menyimpan:

* `kata`: kata yang dibaca.
* `pos`: daftar posisi kata.
* `n`: jumlah posisi kata.

Contoh isi struct untuk input:

```text
bogor;1;20;30;90
```

adalah:

```c
d.kata = "bogor";
d.pos[0] = 1;
d.pos[1] = 20;
d.pos[2] = 30;
d.pos[3] = 90;
d.n = 4;
```

---

## 2. Membaca Satu Baris Input

```c
while (scanf(" %1004[^\n]", line) == 1) {
```

Program membaca input satu baris penuh sampai input habis.

Contoh:

```text
bogor;1;20;30;90
```

akan disimpan di dalam variabel `line`.

---

## 3. Mengambil Kata

```c
token = strtok(line, ";");
strcpy(d.kata, token);
```

Fungsi `strtok()` memisahkan data berdasarkan tanda `;`.

Token pertama adalah kata.

Contoh:

```text
bogor;1;20;30;90
```

Token pertama:

```text
bogor
```

Kemudian kata tersebut disimpan ke:

```c
d.kata
```

---

## 4. Mengambil Semua Posisi

```c
d.n = 0;
token = strtok(NULL, ";");

while (token != NULL) {
    d.pos[d.n] = atoi(token);
    d.n++;

    token = strtok(NULL, ";");
}
```

`strtok(NULL, ";")` digunakan untuk mengambil token berikutnya.

Untuk input:

```text
bogor;1;20;30;90
```

token posisi yang diperoleh adalah:

```text
1
20
30
90
```

Fungsi `atoi()` mengubah string angka menjadi integer.

Contoh:

```c
atoi("20")
```

menghasilkan:

```text
20
```

Setiap posisi disimpan ke dalam array `d.pos`, lalu `d.n` ditambah satu.

---

## 5. Mencetak Hasil

```c
printf("%s(%d):", d.kata, d.n);
```

Baris ini mencetak kata dan jumlah posisi.

Contoh:

```text
bogor(4):
```

Kemudian posisi dicetak satu per satu:

```c
for (int i = 0; i < d.n; i++) {
    printf("%d", d.pos[i]);

    if (i < d.n - 1) {
        printf("->");
    }
}
```

Tanda `->` hanya dicetak di antara angka, bukan setelah angka terakhir.

Hasil akhirnya:

```text
bogor(4):1->20->30->90
```

---

## Alur Singkat Program

1. Baca satu baris input.
2. Ambil kata sebelum tanda `;`.
3. Ambil semua angka posisi setelah kata.
4. Simpan posisi ke array.
5. Hitung jumlah posisi.
6. Cetak kata, jumlah posisi, dan daftar posisinya.
7. Ulangi sampai input habis.
