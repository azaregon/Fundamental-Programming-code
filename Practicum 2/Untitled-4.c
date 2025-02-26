#include <stdio.h>

int main(){
    int jml;
    scanf("%d",&jml);

    long long list[100000][2];

    for (int i = 0; i < 100001; i++) {
        list[i][1] = 0;
        
    }


    for (int i = 0; i < 10; i++) {
        int at_i;

        scanf("%lld",&at_i);

        list[at_i-1][1] += 1;
    }

    int terbanyak = 0;
    int i_terbanyak;

    for (int i = 0; i < 100001; i++) {
        if (list[i][1] > terbanyak) {
            terbanyak = list[i][1];
            i_terbanyak = i;
        }   
    }


    printf("%d", i_terbanyak);

    

    
    
    
}