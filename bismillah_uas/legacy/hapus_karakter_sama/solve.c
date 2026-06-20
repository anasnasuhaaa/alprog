#include <stdio.h>
#include <string.h>

void solve() {
    char s[5005];
    if (scanf("%s", s) != 1) return;

    char stack[5005];
    int top = -1;
    int n = strlen(s);

    int i = 0;
    while (i < n) {
        // Jika karakter saat ini sama dengan karakter berikutnya, 
        // artinya ada blok karakter kembar yang harus dihapus.
        if (i + 1 < n && s[i] == s[i + 1]) {
            char duplicate = s[i];
            // Lewati semua karakter kembar yang sama berturut-turut
            while (i < n && s[i] == duplicate) {
                i++;
            }
            
            // Periksa juga apakah karakter kembar ini sama dengan puncak stack (efek kaskade)
            while (top >= 0 && stack[top] == duplicate) {
                top--;
            }
        } 
        // Jika tidak sama dengan karakter berikutnya
        else {
            // Cek apakah sama dengan puncak stack
            if (top >= 0 && stack[top] == s[i]) {
                char duplicate = stack[top];
                // Hapus dari stack
                while (top >= 0 && stack[top] == duplicate) {
                    top--;
                }
                // Lewati jika karakter input saat ini masih sama
                while (i < n && s[i] == duplicate) {
                    i++;
                }
            } else {
                // Jika benar-benar berbeda, masukkan ke stack
                stack[++top] = s[i];
                i++;
            }
        }
    }

    // Output Hasil
    if (top == -1) {
        printf("-\n");
    } else {
        stack[top + 1] = '\0'; // Jangan lupa null-terminator
        printf("%s\n", stack);
    }
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        solve();
    }
    
    return 0;
}