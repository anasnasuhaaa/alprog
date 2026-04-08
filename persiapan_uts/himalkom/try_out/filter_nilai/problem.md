# Filter Nilai Praktikum

Asisten praktikum Alpro sedang merekap nilai ujian dari `N` orang mahasiswa. Untuk menentukan siapa saja yang perlu mengikuti perbaikan (**remedial**), asisten tersebut membutuhkan program yang dapat menyaring nilai mahasiswa berdasarkan batas kelulusan (**KKM**) `K`.

Diberikan `N` buah nilai mahasiswa, tugas Anda adalah:

1. Mencari **berapa banyak mahasiswa yang lulus**, yaitu yang memiliki nilai **lebih dari atau sama dengan `K`**
2. Menampilkan **nilai-nilai yang lulus** tersebut sesuai dengan **urutan aslinya**

## Input Format

- **Baris pertama** berisi dua buah bilangan bulat `N` dan `K` yang dipisahkan oleh spasi  
  - `N` adalah jumlah mahasiswa
  - `K` adalah batas minimal nilai kelulusan
- **Baris kedua** berisi `N` buah bilangan bulat yang menyatakan nilai masing-masing mahasiswa, dipisahkan oleh spasi

## Constraints

- `1 ≤ N`
- Nilai mahasiswa berupa bilangan bulat

## Output Format

- **Baris pertama** mencetak:

`Jumlah lulus: X`

dengan `X` adalah banyaknya mahasiswa yang lulus.

- **Baris kedua** mencetak nilai-nilai mahasiswa yang lulus secara berurutan, dipisahkan oleh sebuah spasi.

### Pengecualian
Jika tidak ada satu pun mahasiswa yang lulus, maka baris kedua harus mencetak:

`Tidak ada yang lulus.`

## Sample Input 0

```txt
5 70
65 80 75 50 90
```

## Sample Output 0

```txt
Jumlah lulus: 3
80 75 90
```