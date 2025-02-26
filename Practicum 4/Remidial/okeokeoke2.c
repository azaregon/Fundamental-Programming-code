#include <stdio.h>
#include <string.h>


typedef struct {
    char nama[100];
    int gol;
    int assist;
    int keypass;
    int dribble;
    char assisKe[100];
} Pemain;



int main() {
    Pemain listpemain[100];


    int toda;

    scanf("%d",&toda);

    for (int i = 0; i < toda; i++) {
        char nama[100];
        int gol;
        int assist;
        int keypass;
        int dribble;

        scanf("%s",&nama);


        strcpy(listpemain[i].nama,nama); 
        listpemain[i].gol = 0;
        listpemain[i].assist = 0;
        listpemain[i].keypass = 0;
        listpemain[i].dribble = 0;
        strcpy(listpemain[i].assisKe,""); 
    }


    for (int i = 0; i < toda; i++) {
        char namaAsis[100];
        char namaGol[100];
        int jumlahGol;

        scanf("%s %s %d",namaAsis,namaGol, &jumlahGol);


        // Pemain namaAsist;
        // Pemain namaGol;

        // cek nama gol dan asis sama
        if (strcmp(namaAsis,namaGol) == 0) {
            continue;
        }

        // cari assist
        for (int i = 0; i < toda; i++) {


            if (strcmp(listpemain[i].nama,namaAsis) == 0) {
                if (strcmp(listpemain[i].assisKe,"") != 0) {
                    continue;
                }
                listpemain[i].assist += jumlahGol;
                strcpy(listpemain[i].assisKe,namaGol);
            }
        }


        // cari gol
        for (int i = 0; i < toda; i++) {
            if (strcmp(listpemain[i].nama,namaGol) == 0) {
                listpemain[i].gol += jumlahGol;
            }
        }



    }


    for (int i = 0; i < toda; i++) {
        char nama[100];
        int keypass;
        int dribble;
        

        scanf("%s %d %d",nama,&keypass,&dribble);


        for (int i = 0; i < toda; i++) {
            if (strcmp(listpemain[i].nama,nama) == 0) {
                listpemain[i].keypass += keypass;
                listpemain[i].dribble += dribble;

            }
        }


    }



    int toqu;

    scanf("%d",&toqu);


    for (int i = 0; i < toqu; i++) {
        char com[10];

        scanf("%s",com);


        if (strcmp(com,"MOTM") == 0) {
            Pemain motm;
            double big = 0;

            for (int i = 0; i < toda; i++) {
                    double res =  (3*listpemain[i].gol) + (2*listpemain[i].assist) + (1*listpemain[i].keypass) + (0.2*listpemain[i].dribble);

                    if (res > big) {
                        big = res;
                        motm = listpemain[i];
                    }

            }


            printf("Man of the Match: %s\n",motm.nama);

            
        }

        else if (strcmp(com,"TABLE") == 0) {
            for (int i = 0; i < toda; i++) {

                printf("%s | Goals: %d | Assists: %d | Assist To: %s \n",listpemain[i].nama,listpemain[i].gol,listpemain[i].assist,listpemain[i].assisKe);

            }

        }
    }
}