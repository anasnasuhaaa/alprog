# Rotasi Deret Naik-Turun

Semua mahasiswa yang mengambil mata kuliah Alpro pasti pernah mengerjakan soal **naik-turun** pada praktikum minggu ke-6.

Sebagai pengingat:
- Lima suku pertama dari **barisan ganjil** adalah: `1, 3, 5, 7, 9`
- Lima suku pertama dari **barisan genap** adalah: `2, 4, 6, 8, 10`

Anda diminta untuk **menggabungkan kedua barisan** tersebut dengan aturan sebagai berikut:

1. Barisan **ganjil** ditulis dalam **urutan menaik**
2. Barisan **genap** ditulis dalam **urutan menurun**
3. Gabungkan kedua barisan secara **selang-seling**: ganjil, genap, ganjil, genap, dan seterusnya

Sebagai ilustrasi, untuk `N = 5`, gabungan kedua barisan menjadi:

`1 10 3 8 5 6 7 4 9 2`

Namun, agar lebih menantang, setelah membentuk deret tersebut, Anda harus **memutarnya ke kanan sebanyak `K` langkah**.  
Jika `K > panjang deret`, gunakan:

`K mod panjang_deret`

> **Catatan:** Penggunaan array diperbolehkan pada soal ini.

## Input Format

Satu baris berisi dua bilangan bulat:

`N K`

## Constraints

- `1 ≤ N`
- `0 ≤ K`

## Output Format

Cetak deret hasil **rotasi ke kanan sebanyak `K` langkah** dalam satu baris, dipisahkan oleh spasi.

## Sample Input 0

```txt
5 0
```

## Sample Output 0

```txt
1 10 3 8 5 6 7 4 9 2
```

## Sample Input 1

```txt
5 3
```

## Sample Output 1

```txt
4 9 2 1 10 3 8 5 6 7
```