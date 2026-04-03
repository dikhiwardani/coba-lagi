
void bungaTabunganSederhana(){
    float saldoAwal, bungaBulanan, totalUang, totalBunga;

    printf("\n===============================================\n");
    printf("     KALKULATOR BUNGA TABUNGAN SEDERHANA ANJAYY\n");
    printf("===============================================\n");
    
    printf("Masukan Saldo Awal (Rp):");
    printf("Anjing");
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