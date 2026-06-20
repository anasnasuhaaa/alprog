# Menghapus Karakter yang Sama (UAS 2023/2024)

## Deskripsi

Diberikan sebuah string `S` yang hanya terdiri dari huruf kecil `'a'` sampai `'z'`.

Tugas Anda adalah menghapus semua kelompok karakter yang:

* memiliki karakter yang sama, dan
* muncul secara berurutan (bersebelahan),

secara terus-menerus hingga tidak ada lagi karakter yang sama dan bersebelahan.

Proses penghapusan dapat menyebabkan karakter yang sebelumnya terpisah menjadi bersebelahan. Jika setelah penghapusan terbentuk kelompok karakter yang sama dan bersebelahan, maka kelompok tersebut juga harus dihapus.

### Contoh

Diberikan string:

```text id="a4m8ky"
azxxzzy
```

Langkah-langkah penghapusannya:

1. Hapus `"xx"`:

```text id="q7r5nf"
azzzy
```

2. Hapus `"zzz"`:

```text id="h2v9pa"
ay
```

Tidak ada lagi karakter yang sama dan bersebelahan, sehingga hasil akhirnya adalah:

```text id="x8k3dt"
ay
```

Terdapat `T` string yang harus diproses secara independen menggunakan aturan yang sama.

## Batasan

* `1 ≤ L ≤ 5000`, dengan `L` adalah panjang string.
* `1 ≤ T ≤ 1000`

## Masukan

Masukan diberikan dalam format berikut:

```text id="n6p4wr"
T
S1
S2
...
ST
```

Keterangan:

* `T` adalah jumlah string yang akan diproses.
* Setiap string `Si` hanya terdiri dari huruf kecil `'a'` sampai `'z'`.

## Keluaran

Cetak `T` baris.

Setiap baris berisi string hasil setelah seluruh proses penghapusan selesai.

Jika string hasil menjadi kosong, cetak tanda:

```text id="m9z1vb"
-
```

## Contoh Masukan

```text id="j5t8cn"
5
azxxxzy
caaabbbaac
aaaacddddcappp
aaaaaaaaaa
qpaaaaadaaaaadprq
```

## Contoh Keluaran

```text id="f3w7kd"
ay
-
a
-
qrq
```

## Penjelasan

### Kasus 1

Input:

```text id="u7q2xp"
azxxxzy
```

Proses:

```text id="b5r9nm"
azxxxzy
→ azzzy
→ ay
```

Hasil:

```text id="s8v4gc"
ay
```

### Kasus 2

Input:

```text id="r2n8yf"
caaabbbaac
```

Proses:

```text id="t6k3zh"
caaabbbaac
→ ccaac
→ ccc
→ (kosong)
```

Hasil:

```text id="y4m7wp"
-
```

### Kasus 3

Input:

```text id="e9x2ra"
aaaacddddcappp
```

Proses:

```text id="z3q6hn"
aaaacddddcappp
→ ccappp
→ ppp
→ (kosong)
```

Perhatikan bahwa setelah `"aaaa"` dan `"dddd"` dihapus, dua karakter `'c'` menjadi bersebelahan dan ikut terhapus.

Hasil:

```text id="w8k5bf"
a
```

### Kasus 4

Input:

```text id="g7v1me"
aaaaaaaaaa
```

Seluruh karakter membentuk satu kelompok yang sama sehingga langsung terhapus.

Hasil:

```text id="n4p8yd"
-
```

### Kasus 5

Input:

```text id="c2r9sx"
qpaaaaadaaaaadprq
```

Proses:

```text id="k6w3tb"
qpaaaaadaaaaadprq
→ qpddprq
→ qpprq
→ qrq
```

Hasil:

```text id="h5z7na"
qrq
```
