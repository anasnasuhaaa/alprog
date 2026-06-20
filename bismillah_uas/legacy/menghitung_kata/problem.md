# Menghitung Kata (UAS 2025)

## Deskripsi

Diberikan sebuah kata dan beberapa baris kalimat yang hanya terdiri dari kata, spasi, dan karakter newline. Tugas Anda adalah menghitung berapa kali kata tersebut muncul pada seluruh kalimat.

Perbandingan kata **tidak memperhatikan huruf besar dan huruf kecil** (*case-insensitive*). Dengan kata lain, `"be"`, `"Be"`, `"BE"`, dan `"bE"` dianggap sebagai kata yang sama.

Hanya kata yang **persis sama** yang dihitung. Kata yang hanya mengandung kata target sebagai bagian dari kata lain tidak dihitung.

## Masukanan

* Baris pertama berisi sebuah kata yang akan dihitung.
* Baris-baris berikutnya berisi kalimat yang hanya terdiri dari kata, spasi, dan karakter newline.

## Keluaran

Sebuah bilangan bulat yang menyatakan banyaknya kemunculan kata yang dicari pada seluruh kalimat.

## Contoh Masukan

```text
be
To be is not to be
Be is the best of beleave
```

## Contoh Keluaran

```text
3
```

## Penjelasan

Kata yang dicari adalah:

```text
be
```

Kemunculan yang dihitung:

```text
To be is not to be
   ^^           ^^

Be is the best of beleave
^^
```

Total terdapat **3** kemunculan kata `"be"`.

Perhatikan bahwa kata `"beleave"` **tidak dihitung** karena tidak sama persis dengan kata `"be"`.
