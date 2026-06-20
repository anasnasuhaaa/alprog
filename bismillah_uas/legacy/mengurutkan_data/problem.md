# Mengurutkan Data (UAS 2025)

## Deskripsi

Diberikan sebuah matriks `A` berukuran `M × N` yang berisi bilangan bulat.

Sebuah matriks dikatakan **terurut menaik** apabila setiap elemen memenuhi kondisi berikut:

* Lebih kecil atau sama dengan elemen di sebelah kirinya.
* Lebih kecil atau sama dengan elemen di sebelah kanannya.
* Lebih kecil atau sama dengan elemen pada diagonal kanan bawahnya.

Secara matematis:

```text id="d1kq3m"
A[i][j] ≤ A[i][j-1]
A[i][j] ≤ A[i][j+1]
A[i][j] ≤ A[i+1][j+1]
```

Tugas Anda adalah mengubah matriks yang diberikan menjadi matriks yang terurut menaik.

Apabila diperlukan, fungsi berikut dapat digunakan untuk mengurutkan data secara menaik menggunakan algoritma Bubble Sort:

```c id="cw1h4u"
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int n, int arr[n]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
```

## Batasan

* `1 ≤ M, N ≤ 100`
* `0 ≤ A[i][j] ≤ 100`

## Masukan

Masukan diberikan dalam format berikut:

```text id="v9h8sx"
M N
A11 A12 ... A1N
...
AM1 AM2 ... AMN
```

Keterangan:

* `M` adalah jumlah baris matriks.
* `N` adalah jumlah kolom matriks.
* `A[i][j]` adalah elemen matriks pada baris ke-`i` dan kolom ke-`j`.

## Keluaran

Cetak matriks yang telah terurut menaik.

Setiap baris matriks dicetak pada satu baris keluaran, dengan elemen-elemen dipisahkan oleh satu spasi.

## Contoh Input

```text id="pq7y1e"
3 4
3 4 1 2
0 0 2 3
6 9 3 2
```

## Contoh Keluaran

```text id="lg4n2b"
0 0 1 2
2 2 3 3
3 4 6 9
```

## Penjelasan

Seluruh elemen matriks dapat dianggap sebagai kumpulan data yang kemudian diurutkan secara menaik:

```text id="t6m2za"
3 4 1 2 0 0 2 3 6 9 3 2
↓
0 0 1 2 2 2 3 3 3 4 6 9
```

Setelah diurutkan, elemen-elemen tersebut ditempatkan kembali ke dalam matriks secara baris demi baris sehingga menghasilkan:

```text id="o5d7kr"
0 0 1 2
2 2 3 3
3 4 6 9
```
