#include <stdio.h>

int main(){
    int jml;

    scanf("%d",&jml);

    int ID[11][2] = {
        
        {0,0},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},{9,0},{10,0}
    };

    for (int i = 0; i < jml; i++) {
        int atI;

        scanf("%d",&atI);

        ID[atI][1] += 1;
        
    }   


    int i_banyak = 0;
    int jm_banyak = 0;
    int i_sedikit = 4;
    int jm_sedikit = 26358278;

    int seri = 0;
    int jm_seri = 0;

    
    

    
    for (int i = 0; i < 10; i++) {
        if (ID[i][1] > jm_banyak ) {
            i_banyak = i;
            jm_banyak = ID[i][1];
        }

        if ((ID[i][1] < jm_sedikit)  && ID[i][1] != 0) {
            //printf("%d",(ID[i][1] < ID[i_sedikit][1]) );
            i_sedikit = i;
            jm_sedikit = ID[i][1];
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (ID[i][1] == ID[j][1] && i != j && ID[i][1] != 0) {
                // printf("%d",jm_seri);
                jm_seri = (ID[i][1] > jm_seri) ? ID[i][1] : jm_seri;
            }
        }
    }
    // printf("%d %d\n", jm_banyak,jm_seri);

    if (jm_banyak > jm_seri) {
        seri = 0;
     } else {
        seri = 1;
    }


    if (seri == 1) {
        printf("%d", -1);
    }
    else {
        printf("%d\n", ID[i_banyak][0]);
        printf("%d", jml-jm_banyak);
    }

    

} 