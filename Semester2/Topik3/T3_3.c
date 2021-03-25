
#include <stdio.h>

int main()
{
    int data_Awal[3];    //Data_Awal array ada 3
    int data_Akhir[3];   //Data_Akhir

    printf("Input Data : (integer)\n");
    printf("Data 1 : "); scanf("%d", &data_Awal[0]);
    printf("Data 2 : "); scanf("%d", &data_Awal[1]);
    printf("Data 3 : "); scanf("%d", &data_Awal[2]);

    if (data_Awal[0] > data_Awal[1]){ 
                                                //ke1 > ke2
        if (data_Awal[0] > data_Awal[2]){
                                                    //ke1 > ke3
            data_Akhir[2] = data_Awal[0];
            if (data_Awal[1] > data_Awal[2]){
                                                        //ke2 > ke3
                                                            //ke1 > ke2 > ke3
                data_Akhir[0] = data_Awal[2];
                data_Akhir[1] = data_Awal[1];
            }
            else{
                                                        //ke3 > ke2
                                                            //ke1 > ke3 > ke2
                data_Akhir[0] = data_Awal[1];
                data_Akhir[1] = data_Awal[2];
            }
        }
        else{
                                                    //ke3 > ke1
                                                        //ke3 > ke1 > ke2
            data_Akhir[0] = data_Awal[1];
            data_Akhir[1] = data_Awal[0];
            data_Akhir[2] = data_Awal[2];
        }
    }
    else{
                                                //ke2 > ke1
        if (data_Awal[0] > data_Awal[2]){
                                                    //ke1 > ke3
                                                        //ke2 > ke1 > ke3
            data_Akhir[0] = data_Awal[2];
            data_Akhir[1] = data_Awal[0];
            data_Akhir[2] = data_Awal[1];
        }
        else{
                                                    //ke3 > ke1
            data_Akhir[0] = data_Awal[0];
            if (data_Awal[1] > data_Awal[2]){
                                                        //ke2 > ke3
                                                            //ke2 > ke3 > ke1
                data_Akhir[1] = data_Awal[2];
                data_Akhir[2] = data_Awal[1];
            }
            else{
                                                            //ke3 > ke2 > ke1
                data_Akhir[1] = data_Awal[1];
                data_Akhir[2] = data_Awal[2];
            }
        }
    }

    printf("Sudah diurutkan menjadi :\n");
    printf("Data 1 : %d\n", data_Akhir[0]);
    printf("Data 2 : %d\n", data_Akhir[1]);
    printf("Data 3 : %d\n", data_Akhir[2]);

    scanf("%d", &data_Awal[0]); //Dibuat untuk tidak auto close
    return 0;
}
