# Robot Pemanen Jagung (UAS 2025)

## Deskripsi

Lisa, seorang petani modern, memiliki lahan jagung yang tersusun rapi membentuk sebuah matriks `A` berukuran `M × N`. Setiap elemen matriks menyatakan berat jagung (dalam satuan tertentu) yang dipanen dari satu tanaman.

Lisa memiliki sebuah robot pemanen yang bekerja dengan aturan berikut:

1. Robot mulai memanen dari pojok kiri atas matriks.
2. Robot bergerak mengikuti pola spiral searah jarum jam (*clockwise spiral*).
3. Setiap kali robot selesai memanen tepat **10 tanaman**, hasil panen tersebut langsung dimasukkan ke dalam satu kantong.
4. Berat sebuah kantong adalah jumlah berat jagung dari 10 tanaman yang masuk ke dalam kantong tersebut.

Tugas Anda adalah menentukan banyaknya kantong yang dihasilkan serta total berat jagung pada setiap kantong.

Dijamin bahwa jumlah tanaman pada matriks selalu merupakan kelipatan 10 sehingga tidak ada tanaman yang tersisa.

## Batasan

* `1 ≤ M, N ≤ 100`
* `0 ≤ A[i][j] ≤ 5`

## Masukanan

Masukanan diberikan dengan format berikut:

```text
M N
A11 A12 ... A1N
...
AM1 AM2 ... AMN
```

Keterangan:

* `M` adalah jumlah baris matriks.
* `N` adalah jumlah kolom matriks.
* `A[i][j]` adalah berat jagung pada baris ke-`i` dan kolom ke-`j`.

## Keluaran

* Baris pertama berisi banyaknya kantong yang dihasilkan.
* Baris kedua berisi total berat setiap kantong, dipisahkan oleh tepat satu spasi.

## Contoh Masukan

```text
5 4
2 3 1 1
1 1 3 3
2 1 2 1
2 2 1 1
1 1 3 3
```

## Contoh Keluaran

```text
2
19 16
```

## Penjelasan

Robot bergerak secara spiral searah jarum jam. Urutan sel yang dikunjungi pada matriks berukuran `5 × 4` adalah:

```text
 1  2  3  4
14 15 16  5
13 20 17  6
12 19 18  7
11 10  9  8
```

Dengan matriks:

```text
2 3 1 1
1 1 3 3
2 1 2 1
2 2 1 1
1 1 3 3
```

robot memperoleh urutan hasil panen:

```text
2 3 1 1 3 1 1 3 3 1 1 2 2 1 1 3 2 1 2 1
```

Sepuluh tanaman pertama dimasukkan ke kantong pertama:

```text
2 + 3 + 1 + 1 + 3 + 1 + 1 + 3 + 3 + 1 = 19
```

Sepuluh tanaman berikutnya dimasukkan ke kantong kedua:

```text
1 + 2 + 2 + 1 + 1 + 3 + 2 + 1 + 2 + 1 = 16
```

Sehingga dihasilkan:

* Banyak kantong: `2`
* Total berat setiap kantong: `19 16`
