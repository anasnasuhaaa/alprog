# Mesin Pemanen (UAS 2025)

## Deskripsi

Sebuah lahan sawah direpresentasikan sebagai sebuah grid berukuran `N × M`.

Setiap petak pada grid berisi salah satu dari karakter berikut:

* `'0'`–`'9'` : banyaknya buah pada petak tersebut.
* `'.'` : petak kosong (bernilai 0 buah).
* `'#'` : rintangan yang tidak dapat dilewati.

Kita memiliki sebuah mesin pemanen yang hanya boleh melakukan **satu kali perjalanan** dengan aturan sebagai berikut:

1. Mesin memilih sebuah petak awal yang **bukan** `'#'` dan berada di salah satu tepian grid:

   * baris paling atas,
   * baris paling bawah,
   * kolom paling kiri,
   * atau kolom paling kanan.
2. Mesin harus bergerak menuju bagian dalam grid.

   * Jika mulai dari sisi kiri, mesin bergerak ke kanan.
   * Jika mulai dari sisi kanan, mesin bergerak ke kiri.
   * Jika mulai dari sisi atas, mesin bergerak ke bawah.
   * Jika mulai dari sisi bawah, mesin bergerak ke atas.
3. Setelah mulai bergerak, mesin harus bergerak lurus dan **tidak boleh berbelok**.
4. Mesin berhenti apabila langkah berikutnya:

   * keluar dari grid, atau
   * memasuki petak `'#'`.

Mesin memanen seluruh buah dari setiap petak yang dilalui, termasuk petak awal.

Nilai buah pada setiap petak:

* `'.'` bernilai `0`.
* Karakter digit bernilai sesuai digit tersebut.

Tentukan jumlah buah maksimum yang dapat dipanen dalam tepat satu kali perjalanan.

## Batasan

* `1 ≤ N, M ≤ 2000`

## Masukan

* Baris pertama berisi dua bilangan bulat `N` dan `M`.
* `N` baris berikutnya masing-masing berisi sebuah string sepanjang `M` yang hanya terdiri dari karakter:


## Keluaran

Cetak sebuah bilangan bulat yang menyatakan jumlah buah maksimum yang dapat dipanen.

## Contoh Masukan 1

```text id="o2w7gc"
3 4
.324
4#42
1#23
```

## Contoh Keluaran 1

```text id="vl6m9f"
9
```

## Penjelasan Contoh 1

Grid:

```text id="az2pk8"
. 3 2 4
4 # 4 2
1 # 2 3
```

Nilai maksimum `9` dapat diperoleh dari:

Baris pertama:

```text id="g7v4sw"
3 + 2 + 4 = 9
```

atau kolom terakhir:

```text id="k5h1nd"
4 + 2 + 3 = 9
```

Sehingga hasil maksimum adalah:

```text id="vq9r1e"
9
```

## Contoh Masukan 2

```text id="p4m2cb"
4 5
12#3.
..4#5
9.1..
##2#8
```

## Contoh Keluaran 2

```text id="s8t6fk"
13
```

## Contoh Masukan 3

```text id="d5y9ju"
3 5
#####
4#7#3
#####
```

## Contoh Keluaran 3

```text id="b3r7we"
4
```

## Catatan

Perjalanan mesin selalu membentuk sebuah segmen lurus horizontal atau vertikal yang:

* dimulai dari sebuah petak pada tepian grid,
* bergerak menuju bagian dalam grid,
* dan berhenti tepat sebelum keluar grid atau menabrak rintangan (`'#'`).

Tujuan program adalah mencari segmen yang menghasilkan total buah terbesar.
