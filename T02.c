#include <stdio.h>

int main() {
    int N, kodeKelompok, total = 0;

    // 1. Meminta input jumlah total data
    printf("Masukkan jumlah total data (N): ");
    scanf("%d", &N);

    int nilai[N]; // Deklarasi array sebesar N

    // 2. Meminta input deret nilai
    printf("Masukkan %d deret nilai:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    // 3. Meminta input kode kelompok
    // Contoh: 1 untuk indeks ganjil, 2 untuk indeks genap
    printf("\nMasukkan Kode Kelompok (1: Ganjil, 2: Genap): ");
    scanf("%d", &kodeKelompok);

    // 4. Proses Penjumlahan berdasarkan kelompok
    for (int i = 0; i < N; i++) {
        if (kodeKelompok == 1) {
            // Kelompok Ganjil (Posisi 1, 3, 5...)
            if ((i + 1) % 2 != 0) {
                total += nilai[i];
            }
        } else if (kodeKelompok == 2) {
            // Kelompok Genap (Posisi 2, 4, 6...)
            if ((i + 1) % 2 == 0) {
                total += nilai[i];
            }
        }
    }

    // 5. Output Hasil
    printf("-------------------------------\n");
    printf("Total nilai untuk kelompok %d adalah: %d\n", kodeKelompok, total);

    return 0;
}