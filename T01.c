#include <stdio.h>
#include <string.h>

int main() {
    char kode[10];
    int porsi;
    long totalBayar = 0;
    long harga = 0;

    printf("--- Sistem Kasir Mak Roby ---\n");

    while (1) {
        // Input Kode Menu
        scanf("%s", kode);

        // Cek jika input adalah END
        if (strcmp(kode, "END") == 0) {
            break;
        }

        // Input Porsi
        scanf("%d", &porsi);

        // Logika penentuan harga berdasarkan kode
        if (strcmp(kode, "NGS") == 0) {
            harga = 15000;
        } else if (strcmp(kode, "AP") == 0) {
            harga = 20000;
        } else if (strcmp(kode, "GG") == 0) {
            harga = 12000;
        } else {
            harga = 0;
            printf("Kode menu tidak valid!\n");
        }

        totalBayar += (harga * porsi);
    }

    // Tampilkan Struk
    printf("\n==============================\n");
    printf("        STRUK PEMBAYARAN       \n");
    printf("==============================\n");
    printf("Total Belanja: Rp %ld\n", totalBayar);

    // Logika Kupon
    if (totalBayar >= 200000) {
        printf("Kupon Didapat: KUPON KUNING\n");
    } else if (totalBayar >= 100000) {
        printf("Kupon Didapat: KUPON BIRU\n");
    } else {
        printf("Kupon Didapat: -\n");
    }
    
    printf("==============================\n");
    printf("Terima Kasih, Ucok & Butet!\n");

    return 0;
}