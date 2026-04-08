# Zero VS Manusia

Zero adalah sebuah robot cerdas generasi terbaru yang dirancang untuk membaca dan mengeksekusi instruksi dalam bentuk deret angka yang sangat panjang. Namun, Zero memiliki satu kendala utama: ia harus berurusan dengan manusia. Saat manusia mengirim instruksi, mereka sering tidak sadar bahwa mereka mengulang angka yang sama berkali-kali.

Contoh kesalahan kirim:

- Instruksi `12` terkirim sebagai `112`
- Instruksi `30` terkirim sebagai `33000`
- Instruksi `707` terkirim sebagai `77007`

Agar tetap efisien, Zero menggunakan modul **CompactNumeric v1.0**. Modul ini memadatkan deret angka dengan aturan berikut:

1. Jika ada digit yang sama dan **bersebelahan**, simpan hanya **satu digit**
2. Proses dilakukan dari **kiri ke kanan** untuk seluruh deret

Dengan kata lain, setiap kelompok digit berurutan yang sama harus dikompresi menjadi **satu digit**.

Tugasmu adalah membuat modul tersebut.

## Input Format

Satu baris berisi deret digit `0–9`.

## Constraints

- Panjang input minimal `1`
- Input hanya terdiri dari karakter digit (`0` sampai `9`)

## Output Format

Cetak deret digit yang sudah dipadatkan.

## Contoh Penjelasan

- `112` menjadi `12`
- `33000` menjadi `30`
- `77007` menjadi `707`

## Sample Input 0

```txt
101010
```

## Sample Output 0

```txt
101010
```

## Sample Input 1

```txt
1122334455
```

## Sample Output 1

```txt
12345
```