
#include <stdio.h>

int main()
{
    int Sudut_Miring;
    int Sudut_lain[2];

    printf("Masukan sisi segitiga\n");
    printf("Sisi yg paling besar : "); scanf("%d", &Sudut_Miring);
    printf("Sisi Lainnya         : "); scanf("%d", &Sudut_lain[0]);
    printf("Sisi Lainnya         : "); scanf("%d", &Sudut_lain[1]);

    //Sisi_A = (Sisi_B^2 + Sisi_C^2)^0.5
    if ((Sudut_Miring*Sudut_Miring) == ((Sudut_lain[0]*Sudut_lain[0]) + (Sudut_lain[1]*Sudut_lain[1]))){
        printf("\nTeridentifikasi Segitiga Siku-siku");
    }
    else if((Sudut_Miring*Sudut_Miring) > ((Sudut_lain[0]*Sudut_lain[0]) + (Sudut_lain[1]*Sudut_lain[1]))){
        printf("\nTeridentifikasi Segitiga Tumpul");
    }
    else{
        printf("\nTeridentifikasi Segitiga Lancip");
    }

    scanf("%d", &Sudut_Miring); //Dibuat untuk tidak auto close
    return 0;
}
