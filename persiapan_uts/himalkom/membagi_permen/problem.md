# Pembagian Permen dengan Selisih Minimum

Pak Agri ingin membagikan sejumlah permen kepada murid-muridnya secara adil.  
Seluruh permen harus habis dibagikan, dan perbedaan jumlah permen yang diterima antar murid harus sekecil mungkin.

Sebagai contoh:
- Jika ada 5 murid dan 25 permen → masing-masing mendapat 5
- Jika ada 3 murid dan 5 permen → pembagian: 1 2 2

Tugas Anda adalah menentukan komposisi pembagian permen dari yang terkecil ke terbesar.

## Input Format
Dua bilangan bulat:
x y  
di mana:
- x = jumlah permen
- y = jumlah murid

## Constraints
- x ≥ 0
- y ≥ 1

## Output Format
Satu baris berisi y bilangan bulat yang menunjukkan jumlah permen tiap murid (urut dari kecil ke besar), dipisahkan satu spasi, dan diakhiri newline.

## Sample Input
10 4

## Sample Output
2 2 3 3

## Penjelasan
10 permen dibagi ke 4 murid:
- Setiap murid minimal mendapat 2
- Sisa 2 permen dibagikan ke 2 murid terakhir

Hasil: 2 2 3 3
