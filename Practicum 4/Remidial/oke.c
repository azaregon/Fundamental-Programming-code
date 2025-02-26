#include <stdio.h>
#include <string.h>


typedef struct {
    char nama[25];
    char pkm[25];
    int HP;
    int ATK;
    int DEF;
    int SPD;
} Pkmn;


// double rata2dt(Pkmn lst[],) {

// }

int main() {
    int jmlD;
    scanf("%d",&jmlD);

    Pkmn lstpk[jmlD];

    for (int i = 0; i < jmlD; i++)
    {
        char nama[25];
        char pkm[25];
        int HP;
        int ATK;
        int DEF;
        int SPD;

        scanf("%s %s %d %d %d %d", &nama,&pkm,&HP,&ATK,&DEF,&SPD);



        strcpy(lstpk[i].nama,nama);
        strcpy(lstpk[i].pkm,pkm);
        lstpk[i].HP = HP;
        lstpk[i].ATK = ATK;
        lstpk[i].DEF = DEF;
        lstpk[i].SPD = SPD;
    }
    float rata[jmlD];

    for (int i = 0; i < jmlD; i++)
    {
        float rataI;

        Pkmn dt = lstpk[i];

        rataI = ( lstpk[i].HP + lstpk[i].ATK + lstpk[i].DEF + lstpk[i].SPD) / 6;


        rata[i] = rataI;
    }

    float highest = 0;
    int indexH = 0;
    for (int i = 0; i < jmlD; i++)
    {
        if (rata[i] > highest) {
            highest = rata[i];
            indexH = i;
        }
    }


    printf("%s wins! %s said ez",lstpk[indexH].pkm,lstpk[indexH].nama);

    
}