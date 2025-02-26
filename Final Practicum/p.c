#include <stdio.h>
#include <string.h>
#include <stdlib.h>


double rth[15];
int hTop;
int indexmenang = 0;

typedef struct 
{
    char nama[100];
    long long h;
} P;


typedef struct 
{
    int Pcnt;
    P Plst[1050];
} Gr;


int compare(const void* a,const void* b) {
    P *A = (P *)a;
    P *B = (P *)b;
    if (A->h < B->h) return -1;
    if (A->h > B->h) return 1;
    if (A->h == B->h) return 0; 
}



void list (Gr Grlst[],int size,int final) {
    for (int i = 0; i < size; i++) {
        printf("Team %d : ",i+1);
        int totalh =0;
        Gr now = Grlst[i];
        // qsort(Grlst[i].Plst,Grlst[i].Pcnt,sizeof(P),compare);   


        for (int j = 0; j < now.Pcnt;j++) {
            
            totalh += now.Plst[j].h;
            printf("%s-%dcm",now.Plst[j].nama,now.Plst[j].h);

            if (j != Grlst[i].Pcnt-1) {
                printf(" | ");
            }
        }

        rth[i] = totalh/Grlst[i].Pcnt;
        if (final) {
            if (indexmenang == i) {
                printf(" | Verdict : Win!");
            } else {
                 printf(" | Verdict : Lose!");
            }
        
        }

        printf("\n");

    } 
}



int main() {
    int Grcnt = 1;
    Gr Grlst[15];

    Grlst[Grcnt-1].Pcnt = 0;

    int tGl = 0;
    int rtGl = 0;
    int PcntGl = 0;


    while (1) {
        char comm[20];

        scanf("%s",comm);

        if (strcmp(comm,"ADD") == 0) {
            if (Grcnt < 1000) {
                char nama[100];
                long long int h;

                tGl += h;
                PcntGl += 1;
                rtGl = tGl / PcntGl;

                scanf("%s",nama);
                scanf("%lld",&h);

                strcpy(Grlst[Grcnt-1].Plst[Grlst[Grcnt-1].Pcnt].nama,nama);
                Grlst[Grcnt-1].Plst[Grlst[Grcnt-1].Pcnt].h = h;

                // qsort(Grlst[Grcnt-1].Plst,Grlst[Grcnt-1].Pcnt+1,sizeof(P),compare);   
                Grlst[Grcnt-1].Pcnt+=1;
            } else {
                printf("New group plzzzz");
            }

        } else if (strcmp(comm,"BREAK") == 0 ) {

            if (Grlst[Grcnt-1].Pcnt ==0) {
                continue;
            }
            
            if (Grcnt < 10-1 ) {
                Grcnt+=1;
            } else {
                printf("Haiyah dah full lah!");


            }
        } else if (strcmp(comm,"LIST") == 0) {
            for (int i = 0; i<Grcnt;i++) {
                qsort(Grlst[i].Plst,Grlst[i].Pcnt,sizeof(P),compare);   

            }
            printf("-----Current List-----\n");
            list(Grlst,Grcnt,0);
        } else if (strcmp(comm,"END") == 0) {
            for (int i = 0; i<Grcnt;i++) {
                qsort(Grlst[i].Plst,Grlst[i].Pcnt,sizeof(P),compare);   

            }
            for (int i = 0; i < Grcnt;i++) {
                if (rth[i] > rtGl) {
                    hTop = rth[i];
                    indexmenang = i;
                }
            }
            printf("-----Final List-----\n");

            list(Grlst,Grcnt,1);
            break;
        }
    }
}
