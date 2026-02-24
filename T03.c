#include <stdio.h>
#include <string.h>

void tampilkanStatus(int kode) {
    switch(kode) {
        case 1: printf("STATUS: [Diterima - Menunggu Antrean]\n"); break;
        case 2: printf("STATUS: [Sedang Dicuci]\n"); break;
        case 3: printf("STATUS: [Proses Pengeringan]\n"); break;
        case 4: printf("STATUS: [Sedang Disetrika]\n"); break;
        case 5: printf("STATUS: [Selesai - Siap Diambil]\n"); break;
        default: printf("STATUS: [Kode Tidak Valid]\n");
    }
}

int main() {
    int idCucian, statusSekarang;
    char namaPemilik[50];

    printf("=== MONITORING PRODUKSI LAUNDRY ITDEL ===\n");
    
    // Simulasi data masuk
    printf("Masukkan ID Kantong: ");
    scanf("%d", &idCucian);
    printf("Nama Pemilik: ");
    scanf(" %[^\n]s", namaPemilik);

    printf("\nUpdate Status untuk %s (ID: %d):\n", namaPemilik, idCucian);
    printf("1. Antrean | 2. Cuci | 3. Jemur/Kering | 4. Setrika | 5. Selesai\n");
    printf("Pilih kode status terbaru: ");
    scanf("%d", &statusSekarang);

    printf("\n--- UPDATE DATA PRODUKSI ---\n");
    printf("ID Kantong : %d\n", idCucian);
    printf("Pemilik    : %s\n", namaPemilik);
    tampilkanStatus(statusSekarang);
    printf("----------------------------\n");

    return 0;
}