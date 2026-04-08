# Rata-rata Penjualan pada Rentang Hari

Pemilik toko mencatat jumlah penjualan setiap hari ke dalam sebuah array A yang berisi n bilangan bulat non-negatif.  
Nilai A[i] menyatakan total penjualan (dalam satuan ribu rupiah) pada hari ke-i.

Untuk membantu pengambilan keputusan, pemilik toko ingin mengetahui **rata-rata penjualan pada rentang hari tertentu**.

Terdapat Q pertanyaan. Setiap pertanyaan berisi dua bilangan L dan R yang menunjukkan rentang hari ke-L hingga ke-R (inklusif).  
Untuk setiap pertanyaan, hitung rata-rata penjualan pada rentang tersebut dan tampilkan dengan **2 angka di belakang koma**.

---

## Input Format
- Baris pertama: dua bilangan bulat n dan q  
- Baris kedua: n bilangan bulat non-negatif (array A)  
- q baris berikutnya: masing-masing berisi dua bilangan L dan R  

---

## Constraints
- 1 ≤ n, q ≤ besar (efisien dibutuhkan)
- 1 ≤ L ≤ R ≤ n

---

## Output Format
- q baris output
- Setiap baris berisi rata-rata dalam format **2 angka desimal**

---

## Sample Input 0
5 3  
1 2 3 4 5  
1 3  
2 5  
3 3  

## Sample Output 0
2.00  
3.50  
3.00  

---

## Sample Input 1
6 2  
7 7 7 7 7 7  
1 6  
3 4  

## Sample Output 1
7.00  
7.00  

---

## Penjelasan
Contoh 1:
- (1–3): (1+2+3)/3 = 2.00  
- (2–5): (2+3+4+5)/4 = 3.50  
- (3–3): 3/1 = 3.00 