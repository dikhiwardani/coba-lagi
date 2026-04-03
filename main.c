
void splitBill() {
    float total;
    int orang;
    float hasil;

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