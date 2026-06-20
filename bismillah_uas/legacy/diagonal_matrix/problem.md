# Jumlah Diagonal Matriks

## Deskripsi

Diberikan sebuah matriks persegi berukuran **N × N** yang berisi bilangan bulat. Tugas Anda adalah menghitung:

1. Jumlah seluruh elemen pada **diagonal utama**.
2. Jumlah seluruh elemen pada **antidiagonal**.

Diagonal utama adalah elemen-elemen yang berada pada posisi `(i, i)`.

Antidiagonal adalah elemen-elemen yang berada pada posisi `(i, N - 1 - i)`.

## Batasan

* `1 < N < 1000`
* `-1000000 <= elemen matriks <= 1000000`

## Masukan

* Baris pertama berisi sebuah bilangan bulat `N`, yaitu ukuran matriks.
* `N` baris berikutnya masing-masing berisi `N` bilangan bulat yang merupakan elemen matriks.

## Keluaran

Cetak dua buah bilangan bulat:

* Jumlah elemen pada diagonal utama.
* Jumlah elemen pada antidiagonal.

Kedua nilai dipisahkan oleh satu spasi dan diakhiri dengan karakter newline.

## Contoh Masukan 1

```text
4
1 2 3 4
5 6 7 8
9 2 1 2
3 4 5 6
```

## Contoh Keluaran 1

```text
14 16
```

## Penjelasan

Jumlah diagonal utama:

```text
1 + 6 + 1 + 6 = 14
```

Jumlah antidiagonal:

```text
4 + 7 + 2 + 3 = 16
```
