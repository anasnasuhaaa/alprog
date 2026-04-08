# Baris Depan Kelas

Sekolah Dasar Pemrograman Negeri 1 Dramaga memiliki kebiasaan unik untuk berbaris di depan kelas sebelum memulai sesi praktikum. Seorang guru bertugas untuk memantau pola barisan tersebut dengan menggunakan drone.

Setiap barisan selalu dipimpin oleh seorang **ketua kelas** yang posisinya ada di depan.

Aturan posisi ketua kelas adalah sebagai berikut:

- Jika jumlah barisan **ganjil**, maka ketua kelas berada **tepat di tengah barisan**
- Jika jumlah barisan **genap**, maka ketua kelas berada di **paling utara barisan** (baris paling atas)

Setiap baris memiliki sejumlah anak, dan **jumlah bintang (`*`) yang dicetak selalu ditambah 1** untuk mengakomodasi posisi ketua kelas.

Tugas Anda adalah membuat program untuk mencetak pola barisan tersebut.

## Input Format

- **Baris pertama** berisi sebuah bilangan bulat `n`, yaitu jumlah barisan
- **Baris kedua** berisi sebanyak `n` bilangan bulat positif yang menyatakan jumlah anak pada tiap baris

## Constraints

- `1 ≤ n ≤ 1000`
- Jumlah anak tiap baris adalah **bilangan bulat positif**

## Output Format

Cetak pola barisan sesuai dengan deskripsi soal.  
Setiap baris output diakhiri dengan newline (`\n`).

## Aturan Pola

- Jika `n` **ganjil**:
  - Ketua kelas berada di **baris tengah**
  - Baris lain dicetak dengan **spasi di depan** agar tampak bergeser

- Jika `n` **genap**:
  - Ketua kelas berada di **baris paling atas**
  - Baris pertama hanya mencetak `*`
  - Baris berikutnya mencetak jumlah anak pada masing-masing baris

## Sample Input 0

```txt
3
3 4 5
```

## Sample Output 0

```txt
 ***
*****
 *****
```

## Penjelasan Sample 0

Karena jumlah barisan adalah `3` (**ganjil**), maka ketua kelas berada di **baris tengah**.

Jumlah anak tiap baris:
- Baris 1: `3` anak → dicetak `3 + 1 = 4` posisi, dengan pergeseran
- Baris 2: `4` anak → dicetak `4 + 1 = 5` posisi
- Baris 3: `5` anak → dicetak `5 + 1 = 6` posisi, dengan pergeseran

Pola dibuat agar ketua kelas tampak berada di tengah formasi.

## Sample Input 1

```txt
4
6 6 6 6
```

## Sample Output 1

```txt
*
******
******
******
******
```

## Penjelasan Sample 1

Karena jumlah barisan adalah `4` (**genap**), maka ketua kelas berada di **baris paling utara** (baris paling atas), sehingga:

- Baris pertama hanya berisi ketua kelas: `*`
- Baris berikutnya mencetak pola anak pada tiap baris