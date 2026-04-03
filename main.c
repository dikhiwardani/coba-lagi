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