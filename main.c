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
    printf("     KALKULATOR DISKON BELANJA ANAJYY\n");
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

void bungaTabunganSederhana(){
    float saldoAwal, bungaBulanan, totalUang, totalBunga;

    printf("\n===============================================\n");
    printf("     KALKULATOR BUNGA TABUNGAN SEDERHANA ANJAYY\n");
    printf("===============================================\n");
    
    printf("Masukan Saldo Awal (Rp):");
    scanf("%f", &saldoAwal );
        while (saldoAwal <= 0) {    
            printf("[ERROR] Saldo awal harus lebih dari 0!\n");
            printf("Masukan Saldo Awal (Rp):");
            scanf("%f", &saldoAwal );
        }
    
    printf("Masukan Persentase Bunga Bulanan (%):");
    scanf("%f", &bungaBulanan);
        while (bungaBulanan < 0 || bungaBulanan > 100) {
                printf("[ERROR] Persentase bunga bulanan harus antara 0 - 100!\n");
                printf("Masukan Persentase Bunga Bulanan (%):");
                scanf("%f", &bungaBulanan);    
        }
    totalBunga = saldoAwal * (bungaBulanan / 100);
    totalUang = totalBunga + saldoAwal;
    
    printf("\n===============================================\n");
    printf("     KALKULATOR BUNGA TABUNGAN SEDERHANA \n");
    printf("===============================================\n");
    
    printf("Saldo Awal                       = Rp %2.lf\n", saldoAwal);
    printf("Persentase Bunga Bulanan         = %2.lf%\n", bungaBulanan);
    printf("Total Bunga Bulanan yang didapat = Rp %2.lf\n", totalBunga);
    printf("Total Uang                       = Rp %2.lf\n", totalUang);
}

void splitBill() {
    float total;
    int orang;
    float hasil;
    int min;

    printf("Total tagihan: ");
    scanf("%f", &total);

    printf("Jumlah orang: ");
    scanf("%d", &orang);

     if (orang <= 0) {
        printf("\n[ERROR] Jumlah orang tidak valid!\n");
    } else {
        hasil = total / orang;

    
        printf("\n==============================\n");
        printf("        HASIL PEMBAGIAN       \n");
        printf("==============================\n");
        printf("Total Tagihan : Rp %.2f\n", total);
        printf("Jumlah Orang  : %d orang\n", orang);
        printf("------------------------------\n");
        printf("Per Orang Bayar : Rp %.2f\n", hasil);
        printf("==============================\n");
    }

}

void hitungSisaUang() {
    float uangSaku, pengeluaran, sisa, kyy;

    printf("Masukkan uang saku hari ini: ");
    scanf("%f", &uangSaku);

    printf("Masukkan total estimasi pengeluaran hari ini: ");
    scanf("%f", &pengeluaran);

    sisa = uangSaku - pengeluaran;

    printf("\n=====================================\n");
    printf("           HASIL PERHITUNGAN         \n");
    printf("=====================================\n");
    printf("Uang saku       : Rp %.2f\n", uangSaku);
    printf("Pengeluaran     : Rp %.2f\n", pengeluaran);
    printf("-------------------------------------\n");
    printf("Sisa uang       : Rp %.2f\n", sisa);
    printf("=====================================\n");

    if (sisa < 0) {
        printf("Uang kamu kurang!\n");
    } else if (sisa == 0) {
        printf("Uang kamu pas.\n");
    } else {
        printf("Kamu masih punya sisa uang.\n");
    }
}
