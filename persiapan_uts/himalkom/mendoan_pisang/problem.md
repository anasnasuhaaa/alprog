# Ketersediaan Gorengan di Warung Kopi Hadi

Pada hari pertama (ke-1), kedua jenis gorengan tersedia, yaitu **tempe mendoan** dan **pisang goreng**.

Selanjutnya:
- Tempe mendoan tersedia setiap **3 hari sekali** setelah hari pertama (hari ke-4, ke-7, ke-10, dst)
- Pisang goreng tersedia setiap **5 hari sekali** setelah hari pertama (hari ke-6, ke-11, ke-16, dst)

Diberikan sebuah bilangan **N** yang menyatakan hari ke-N sejak warung dibuka, tentukan jenis gorengan apa saja yang tersedia pada hari tersebut.

---

## Kemungkinan Output
Jawaban hanya salah satu dari:
- **TEMPE**
- **PISGOR**
- **TEMPE DAN PISGOR**
- **KOSONG**

---

## Input Format
Satu bilangan bulat:
N

---

## Constraints
- 1 ≤ N ≤ 5.000.000.000

---

## Output Format
Satu baris berisi salah satu dari:
TEMPE  
PISGOR  
TEMPE DAN PISGOR  
KOSONG  

---

## Sample Input 0
1

## Sample Output 0
TEMPE DAN PISGOR

---

## Sample Input 1
4

## Sample Output 1
TEMPE

---

## Penjelasan
- Hari ke-1: kedua gorengan tersedia  
- Hari ke-4: hanya tempe tersedia (kelipatan 3 setelah hari pertama)  