# Ayam Kapten (UAS 2023/2024)

## Deskripsi

Sebanyak `N` ekor ayam berbaris dari kiri ke kanan dan diberi nomor urut mulai dari `1` hingga `N`.

Tinggi masing-masing ayam dicatat dalam sebuah deret:

```text id="u3q8wn"
A1 A2 ... AN
```

Seekor ayam disebut **Ayam Kapten** apabila **tidak ada ayam di sebelah kanannya yang memiliki tinggi lebih besar ataupun sama dengan dirinya**.

Dengan kata lain, seekor ayam merupakan Ayam Kapten jika tingginya lebih besar dari seluruh ayam yang berada di sebelah kanannya.

Tugas Anda adalah menentukan ayam-ayam mana saja yang merupakan Ayam Kapten.

## Batasan

* `1 ≤ N ≤ 10000`
* `1 ≤ Ai ≤ 100`

## Masukan

Masukan diberikan dalam format berikut:

```text id="v5m7rk"
N
A1 A2 ... AN
```

Keterangan:

* `N` adalah jumlah ayam.
* `Ai` adalah tinggi ayam ke-`i` dalam sentimeter.

## Keluaran

* Baris pertama berisi banyaknya Ayam Kapten.
* Baris kedua berisi nomor urut seluruh Ayam Kapten dalam urutan menaik, dipisahkan oleh satu spasi.

## Contoh Masukan 1

```text id="p9z4nc"
6
16 17 4 3 5 2
```

## Contoh Keluaran 1

```text id="t6k2ws"
3
2 5 6
```

## Penjelasan Contoh 1

Tinggi ayam:

```text id="h7r3mv"
16 17 4 3 5 2
```

Analisis setiap ayam:

| Nomor | Tinggi | Ayam di Sebelah Kanan | Kapten? |
| ----- | ------ | --------------------- | ------- |
| 1     | 16     | 17, 4, 3, 5, 2        | Tidak   |
| 2     | 17     | 4, 3, 5, 2            | Ya      |
| 3     | 4      | 3, 5, 2               | Tidak   |
| 4     | 3      | 5, 2                  | Tidak   |
| 5     | 5      | 2                     | Ya      |
| 6     | 2      | -                     | Ya      |

Sehingga Ayam Kapten adalah ayam nomor:

```text id="x4q8tj"
2 5 6
```

Jumlah Ayam Kapten:

```text id="w9m5py"
3
```

## Contoh Masukan 2

```text id="r2n8gd"
5
5 4 3 2 1
```

## Contoh Keluaran 2

```text id="k7v1af"
5
1 2 3 4 5
```

## Penjelasan Contoh 2

Tinggi ayam selalu menurun dari kiri ke kanan:

```text id="m3z6qw"
5 4 3 2 1
```

Setiap ayam memiliki tinggi yang lebih besar daripada seluruh ayam di sebelah kanannya, sehingga seluruh ayam merupakan Ayam Kapten.

Jumlah Ayam Kapten:

```text id="s8p4cx"
5
```

Nomor ayam:

```text id="g5t9hk"
1 2 3 4 5
```

## Catatan

Ayam terakhir selalu merupakan Ayam Kapten karena tidak memiliki ayam lain di sebelah kanannya.
