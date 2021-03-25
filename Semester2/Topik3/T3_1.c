
#include <stdio.h>

int main()
{
    int data;   //data Input dan menjadi data output

    printf("Data Input :"); scanf("%d", &data); //Mendapatkan data

    data = data % 4;

    if (data == 0){
        printf("Merupakan kelipatan empat");
    }
    else{
        printf("Tidak merupakan kelipatan empat");
    }
    printf("\nData Akhir : %d\n", data);

    scanf("%d", &data); //Dibuat untuk tidak auto close
    return 0;
}
