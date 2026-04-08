#include <stdio.h>

int main() {
    int n;
    // Membaca jumlah jarak (n)
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int prev_h, current_h;
    // Membaca ketinggian pada kilometer pertama
    if (scanf("%d", &prev_h) != 1) {
        return 0;
    }

    // Status: 0 = Berhenti/Awal, 1 = Naik, 2 = Turun, 3 = Mendatar
    int current_state = 0; 
    int shifts = 0;

    // Memproses ketinggian di kilometer-kilometer selanjutnya
    for (int i = 1; i < n; i++) {
        scanf("%d", &current_h);
        int new_state;

        // Menentukan kondisi jalan saat ini
        if (current_h > prev_h) {
            new_state = 1; // Naik
        } else if (current_h < prev_h) {
            new_state = 2; // Turun
        } else {
            new_state = 3; // Mendatar
        }

        // Mengecek apakah butuh perpindahan gigi
        if (current_state == 0) {
            shifts++; // Perpindahan gigi dari berhenti ke jalan pertama
            current_state = new_state;
        } else if (current_state != new_state) {
            shifts++; // Perpindahan gigi karena kondisi jalan berubah
            current_state = new_state;
        }
        
        // Update ketinggian sebelumnya
        prev_h = current_h;
    }

    // Perpindahan gigi dari kondisi jalan terakhir kembali ke berhenti (netral)
    if (current_state != 0) {
        shifts++;
    }

    // Mencetak total perpindahan gigi
    printf("%d\n", shifts);

    return 0;
}