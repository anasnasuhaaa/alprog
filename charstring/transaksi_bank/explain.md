# Penjelasan Program: Mengurutkan dan Menghitung Transaksi Rekening

## Kode Program

```c
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
```

---

## 1. Struct untuk Menyimpan Rekening

```c
typedef struct {
    char nomor[40];
} Rekening;
```

Struct `Rekening` digunakan untuk menyimpan satu nomor rekening.

Nomor rekening disimpan sebagai string, bukan bilangan bulat, karena rekening dapat diawali oleh angka nol.

Contoh:

```text
03 10103538 2222 1233 6160 0141
```

---

## 2. Membaca Jumlah Data

```c
scanf("%d", &n);
getchar();
```

`scanf()` membaca jumlah akun yang akan diproses.

`getchar()` membuang karakter newline setelah angka `n` agar pembacaan baris berikutnya berjalan dengan benar.

---

## 3. Membaca Nomor Rekening

```c
for (int i = 0; i < n; i++) {
    fgets(data[i].nomor, sizeof(data[i].nomor), stdin);

    data[i].nomor[strcspn(data[i].nomor, "\r\n")] = '\0';
}
```

`fgets()` digunakan karena nomor rekening mengandung spasi.

Baris berikut menghapus karakter newline dari hasil input:

```c
data[i].nomor[strcspn(data[i].nomor, "\r\n")] = '\0';
```

---

## 4. Mengurutkan Rekening

```c
qsort(data, n, sizeof(Rekening), bandingkan);
```

Fungsi `qsort()` mengurutkan rekening secara menaik.

Urutan ditentukan oleh fungsi:

```c
int bandingkan(const void *a, const void *b) {
    const Rekening *rekeningA = (const Rekening *)a;
    const Rekening *rekeningB = (const Rekening *)b;

    return strcmp(rekeningA->nomor, rekeningB->nomor);
}
```

`strcmp()` membandingkan dua string rekening.

Setelah diurutkan, rekening yang sama akan berada pada posisi yang berdekatan.

---

## 5. Menghitung Rekening yang Sama

```c
int jumlah = 1;

for (int i = 1; i <= n; i++) {
    if (i < n && strcmp(data[i].nomor, data[i - 1].nomor) == 0) {
        jumlah++;
    } else {
        printf("%s %d\n", data[i - 1].nomor, jumlah);
        jumlah = 1;
    }
}
```

Program membandingkan rekening saat ini dengan rekening sebelumnya.

Jika sama:

```c
jumlah++;
```

Jika berbeda, rekening sebelumnya dicetak bersama jumlah kemunculannya:

```c
printf("%s %d\n", data[i - 1].nomor, jumlah);
```

---

## Alur Singkat Program

1. Baca jumlah data rekening.
2. Simpan setiap rekening ke dalam array struct.
3. Urutkan rekening menggunakan `qsort()`.
4. Bandingkan rekening yang berdekatan.
5. Hitung jumlah transaksi untuk setiap rekening.
6. Cetak rekening secara menaik beserta jumlah transaksinya.

---

## Contoh Input

```text
6
03 10103538 2222 1233 6160 0142
03 10103538 2222 1233 6160 0141
30 10103538 2222 1233 6160 0141
30 10103538 2222 1233 6160 0142
30 10103538 2222 1233 6160 0141
30 10103538 2222 1233 6160 0142
```

## Contoh Output

```text
03 10103538 2222 1233 6160 0141 1
03 10103538 2222 1233 6160 0142 1
30 10103538 2222 1233 6160 0141 2
30 10103538 2222 1233 6160 0142 2
```
