#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tampilkanHeader() {
    printf("\n");
    printf("--------------------------------------------------------------\n");
    printf("|               APLIKASI KEUANGAN KELOMPOK 10                 |\n");
    printf("|              Kalkulator Keuangan Sehari-hari                |\n");
    printf("--------------------------------------------------------------\n\n");
}

int main() {
    int pilihan;

    do {
        tampilkanHeader();
        
        printf("[1] Kalkulator Diskon Belanja\n");
        printf("[2] Kalkulator Split Bill\n");
        printf("[3] Kalkulator Bunga Tabungan\n");
        printf("[4] Kalkulator Sisa Uang Jajan\n");
        printf("[5] Keluar dari Program\n\n");
        printf(" Pilih menu (1-5): ");
        
        
        if (scanf("%d", &pilihan) !=1) {
            printf("input tidak valid! Harap masukkan angka.\n");
            while(getchar() != '\n'); 
            pilihan = 0;
            continue;
        }

        switch(pilihan) {
            case 1:
                kalkulator_diskon();
                break;
            case 2:
                splitBill();
                break;
            case 3:
                bungaTabunganSederhana();
                break;
            case 4:
                hitungSisaUang();
                break;
            case 5:
                printf("Terima kasih telah menggunakan Aplikasi Keuangan Kelompok 10\n");
                printf("Semoga membantu mengelola keuanganmu yaa\n\n");
                break;
            default:
                printf("\n Pilihan tidak valid! Silakan pilih angka 1-5.\n");
        }
    } while(pilihan != 5);

    return 0;
}

void kalkulator_diskon() {
    float harga_awal, persentase_diskon;
    float jumlah_diskon, harga_akhir;
 
    printf("\n========================================\n");
    printf("     KALKULATOR DISKON BELANJA\n");
    printf("========================================\n");
 

    printf("Masukkan harga awal barang (Rp): ");
    scanf("%f", &harga_awal);
 
    if (harga_awal <= 0) {
        printf("[ERROR] Harga awal harus lebih dari 0!\n");
        return;
    }
 
    printf("Masukkan persentase diskon (%%): ");
    scanf("%f", &persentase_diskon);
 
    if (persentase_diskon < 0 || persentase_diskon > 100) {
        printf("[ERROR] Persentase diskon harus antara 0 - 100!\n");
        return;
    }
 
    jumlah_diskon = harga_awal * (persentase_diskon / 100);
    harga_akhir   = harga_awal - jumlah_diskon;
 
    printf("\n----------------------------------------\n");
    printf("  HASIL PERHITUNGAN:\n");
    printf("----------------------------------------\n");
    printf("  Harga Awal       : Rp %.2f\n", harga_awal);
    printf("  Diskon (%.0f%%)     : Rp %.2f\n", persentase_diskon, jumlah_diskon);
    printf("  --------------------------------\n");
    printf("  Harga yang Harus\n");
    printf("  Dibayar          : Rp %.2f\n", harga_akhir);
    printf("----------------------------------------\n");
    printf("  Kamu hemat Rp %.2f!\n", jumlah_diskon);
    printf("========================================\n\n");

}
