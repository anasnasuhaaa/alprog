# Mobil Manual

**Batas Waktu:** 1 detik  
**Batas Memori:** 32 MB

Pak Yono memiliki sebuah mobil tua yang antik dan unik. Mobil tersebut adalah **mobil manual**, sehingga menggunakan **gigi persneling** secara manual untuk mengatur kecepatan dan tenaga mobil, terutama saat melewati jalan **menanjak**, **menurun**, atau **mendatar**.

Mobil memiliki beberapa kondisi gigi:

- **Naik** → untuk jalan menanjak
- **Turun** → untuk jalan menurun
- **Mendatar** → untuk jalan datar
- **Netral / berhenti** → saat mobil tidak berjalan

Setiap kali kondisi jalan berubah, Pak Yono harus **memindahkan gigi persneling secara manual**.

Selain itu:

- Di **awal perjalanan**, Pak Yono harus memindahkan gigi dari **netral** ke kondisi jalan pertama
- Di **akhir perjalanan**, Pak Yono juga harus memindahkan gigi dari kondisi jalan terakhir kembali ke **netral**

Pak Yono ingin pergi ke suatu tempat wisata di daerah Puncak yang memiliki jalur naik-turun. Ia sudah menyiapkan data berupa **ketinggian tanah pada setiap kilometer** perjalanan.

Tugas Anda adalah membantu Pak Yono menentukan **berapa kali perpindahan gigi persneling** yang harus dilakukan selama perjalanan.

## Input Format

Input terdiri dari:

- Sebuah bilangan bulat `n` dengan syarat:

`2 < n < 1000000`

yang menyatakan **panjang jalur perjalanan** dalam satuan kilometer.

- Diikuti oleh `n` buah bilangan bulat positif, masing-masing menyatakan **ketinggian tanah** pada setiap kilometer perjalanan.

## Constraints

- `2 < n < 1000000`
- Setiap nilai ketinggian berada pada rentang:

`1 ≤ tinggi ≤ 100000`

## Output Format

Cetak satu baris berisi sebuah bilangan bulat yang menyatakan **jumlah perpindahan gigi persneling** yang dilakukan Pak Yono selama perjalanan, mulai dari **berhenti di awal** hingga **berhenti lagi di akhir**.

## Aturan Penentuan Kondisi Jalan

Untuk setiap dua titik ketinggian yang berurutan:

- Jika ketinggian **bertambah**, maka kondisi jalan adalah **naik**
- Jika ketinggian **berkurang**, maka kondisi jalan adalah **turun**
- Jika ketinggian **tetap**, maka kondisi jalan adalah **mendatar**

Setiap kali kondisi jalan **berubah**, maka terjadi **1 perpindahan gigi**.

Jangan lupa menghitung juga:

- **1 perpindahan di awal** perjalanan (dari netral ke kondisi pertama)
- **1 perpindahan di akhir** perjalanan (dari kondisi terakhir ke netral)

## Contoh Masukan 1

```txt
10
1 2 3 4 4 5 8 9 3 2
```

## Contoh Keluaran 1

```txt
5
```

## Penjelasan Contoh 1

Pak Yono akan menempuh perjalanan selama `10 km`.

Perubahan kondisi jalannya adalah:

- `1 → 2 → 3 → 4` → **naik**
- `4 → 4` → **mendatar**
- `4 → 5 → 8 → 9` → **naik**
- `9 → 3 → 2` → **turun**

Urutan perpindahan gigi:

1. **Netral → Naik**
2. **Naik → Mendatar**
3. **Mendatar → Naik**
4. **Naik → Turun**
5. **Turun → Netral**

Total perpindahan gigi = **5**

## Contoh Masukan 2

```txt
5
10 20 30 40 50
```

## Contoh Keluaran 2

```txt
2
```

## Penjelasan Contoh 2

Jalur yang ditempuh hanya berupa **tanjakan** saja.

Urutan perpindahan gigi:

1. **Netral → Naik**
2. **Naik → Netral**

Total perpindahan gigi = **2**