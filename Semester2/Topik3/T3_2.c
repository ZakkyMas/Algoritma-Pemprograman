
#include <stdio.h>

int main()
{
    float Harga_Awal;   //Harga Awal
    float Diskon = 0.2; //Diskon 20%
    float Harga_Akhir;  //Harga setelah dipotong diskon
    float Harga_Minimal = 100000; //Harga minimal untuk menggunakan diskon

    printf("Masukan Harga : "); scanf("%f", &Harga_Awal); //Mendapatkan Harga awal

    if(Harga_Awal > Harga_Minimal){
        Harga_Akhir = Harga_Awal - Harga_Awal * Diskon;
        printf("Dapat potongan diskon 20Persen");
    }
    else{
        Harga_Akhir = Harga_Awal;
        printf("Tidak dapat potongan diskon 20Persen");
    }

    printf("\nHarga dibayarkan : %f", Harga_Akhir);
    
    scanf("%f", &Harga_Awal); //Dibuat untuk tidak auto close
    return 0;
}
