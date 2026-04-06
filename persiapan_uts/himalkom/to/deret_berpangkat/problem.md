# Penjumlahan Deret Berpangkat

Buatlah sebuah program dalam bahasa C untuk mencari dan menghitung jumlah dari deret berikut:

`X - X^3 + X^5 - X^7 + ...`

Jika diberikan suatu nilai basis `X` dan banyaknya suku `N`, program harus dapat menampilkan nilai dari masing-masing suku pada deret tersebut secara berurutan, lalu menghitung hasil penjumlahan total dari seluruh suku tersebut.

## Input Format

Satu baris berisi dua bilangan bulat:

`X N`

Keterangan:
- `X` menunjukkan **basis**
- `N` menunjukkan **jumlah suku** dalam deret

## Constraints

- Dilarang menggunakan library `math.h`

## Output Format

- Cetak sebanyak `N` baris, masing-masing berisi nilai dari setiap suku deret
- Baris terakhir mencetak:

`Hasil = <jumlah_total>`

- Akhiri seluruh keluaran dengan karakter newline (`\n`)

## Penjelasan Pola Deret

Deret memiliki pola:
- Pangkat selalu **ganjil**: `1, 3, 5, 7, ...`
- Tanda selalu **bergantian**:
  - positif
  - negatif
  - positif
  - negatif
  - dan seterusnya

Contoh jika `X = 2` dan `N = 5`:

- Suku ke-1 = `2^1 = 2`
- Suku ke-2 = `-(2^3) = -8`
- Suku ke-3 = `2^5 = 32`
- Suku ke-4 = `-(2^7) = -128`
- Suku ke-5 = `2^9 = 512`

Jumlah total:

`2 - 8 + 32 - 128 + 512 = 410`

## Sample Input 0

```txt
2 5
```

## Sample Output 0

```txt
2
-8
32
-128
512
Hasil = 410
```

## Sample Input 1

```txt
1 10
```

## Sample Output 1

```txt
1
-1
1
-1
1
-1
1
-1
1
-1
Hasil = 0
```