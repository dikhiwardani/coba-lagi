
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