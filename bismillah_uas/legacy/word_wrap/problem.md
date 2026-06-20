# Word Wrap (UAS 2022/2023)

## Deskripsi

Diberikan beberapa paragraf dari sebuah dokumen dan sebuah nilai `L` yang menyatakan lebar maksimum setiap baris.

Tugas Anda adalah menampilkan kembali seluruh paragraf sehingga:

* Panjang setiap baris tidak melebihi `L` karakter.
* Kata tidak boleh dipotong.
* Jika sebuah kata tidak muat pada baris saat ini, kata tersebut harus ditempatkan pada baris berikutnya.
* Urutan kata harus tetap sama seperti pada masukan.
* Setiap baris keluaran diakhiri dengan karakter newline.

Diasumsikan bahwa panjang setiap kata selalu lebih kecil dari `L`.

## Batasan

* `1 < L < 100`
* `1 < n < 10`, dengan `n` adalah jumlah paragraf
* Setiap paragraf memiliki panjang maksimum `5000` karakter

## Masukan

Masukan diberikan dengan format berikut:

```text id="q8m2wn"
L
P1
P2
...
Pn
```

Keterangan:

* Baris pertama berisi bilangan bulat `L`, yaitu lebar maksimum setiap baris.
* Baris-baris berikutnya berisi beberapa paragraf hingga akhir masukan.
* Setiap paragraf terdiri dari kata-kata yang dipisahkan oleh spasi.

## Keluaran

Cetak kembali seluruh paragraf dengan lebar maksimum `L`.

Aturan pencetakan:

* Tidak boleh memotong kata.
* Setiap baris memiliki panjang paling banyak `L` karakter.
* Setiap baris diakhiri dengan newline.
* Setiap paragraf diproses secara independen.

## Contoh Masukan

```text id="s6r3ty"
30
Given a sequence of words, and a limit on the number of characters
that can be put in one line (line width). Put line breaks in the given
sequence such that the lines are printed neatly.
Assume that the length of each word is smaller than the line width. The
word processors like MS Word do task of placing line breaks. The idea
is to have balanced lines. In other words, not have few lines with lots
of extra spaces and some lines with small amount of extra spaces.
```

## Contoh Keluaran

```text id="d9k5ha"
Given a sequence of words, and
a limit on the number of
characters that can be put in
one line (line width). Put
line breaks in the given
sequence such that the lines
are printed neatly.
Assume that the length of each
word is smaller than the line
width. The word processors
like MS Word do task of
placing line breaks. The idea
is to have balanced lines. In
other words, not have few
lines with lots of extra
spaces and some lines with
small amount of extra spaces.
```

## Penjelasan

Misalkan lebar baris adalah:

```text id="v4x8mp"
L = 30
```

Baris pertama paragraf:

```text id="g7z1cq"
Given a sequence of words, and a limit on the number of characters
```

diproses dengan menambahkan kata satu per satu selama panjang baris tidak melebihi `30` karakter.

Baris pertama yang dapat dibentuk adalah:

```text id="p3n7wr"
Given a sequence of words, and
```

Penambahan kata berikutnya (`a`) akan membuat panjang baris melebihi batas, sehingga kata tersebut dipindahkan ke baris berikutnya.

Proses yang sama dilakukan hingga seluruh paragraf selesai diproses.

## Catatan

Tujuan soal ini bukan melakukan *text justification* (meratakan teks kiri-kanan), melainkan hanya melakukan **word wrapping**, yaitu memindahkan kata ke baris berikutnya ketika kata tersebut tidak lagi muat pada baris saat ini.
