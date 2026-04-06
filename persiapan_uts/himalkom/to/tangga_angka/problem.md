# Pola Tangga Angka

Seorang mahasiswa sedang berlatih membuat pola angka untuk meningkatkan kemampuan logika pemrogramannya. Kali ini, ia diminta membuat pola tangga angka yang sedikit berbeda dari biasanya.

Diberikan sebuah bilangan bulat `N` yang menyatakan jumlah baris. Anda diminta mencetak pola dengan aturan:

- **Baris ke-1** berisi angka dari `1` sampai `1` (**menaik**)
- **Baris ke-2** berisi angka dari `2` sampai `1` (**menurun**)
- **Baris ke-3** berisi angka dari `1` sampai `3` (**menaik**)
- **Baris ke-4** berisi angka dari `4` sampai `1` (**menurun**)
- dan seterusnya secara bergantian **naik** dan **turun**

Dengan kata lain:

- **Baris ganjil** → cetak angka secara **menaik** (`1 → i`)
- **Baris genap** → cetak angka secara **menurun** (`i → 1`)

Setiap angka dipisahkan oleh **spasi**.

## Input Format

Satu baris berisi sebuah bilangan bulat:

`N`

## Constraints

- `1 ≤ N ≤ 100`

## Output Format

Cetak pola sesuai aturan sebanyak `N` baris.

## Contoh Pola

Jika `N = 4`, maka hasilnya:

```txt
1
2 1
1 2 3
4 3 2 1
```

## Sample Input 0

```txt
3
```

## Sample Output 0

```txt
1
2 1
1 2 3
```

## Sample Input 1

```txt
4
```

## Sample Output 1

```txt
1
2 1
1 2 3
4 3 2 1
```