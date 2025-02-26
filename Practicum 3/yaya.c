#include <stdio.h>



long long ttp(int n) {
    long long res = 1;
    for (int i = 0; i < n; i++) {
        res *= 2;
    }

    return res;
}

// int cari(int max) {
//     if (max > 1) {
//         res_main += max + 
//     }
// }

long long  cari(int max) {
    
    long long res_main = 0; 
    for (int i = 0; i < max; i++) {
        long long this = ttp(i+1) -1;
        res_main += (max-i) * this;
        // printf(max-i)
    }

    return res_main;
}

int main() {

    // printf("%lld\n",ttp(1)-1);
    // printf("%lld\n",ttp(3)-1);
    // printf("%lld\n",ttp(4)-1);

    int masukan;


    scanf("%d",&masukan);
    printf("%lld",cari(masukan));
    
}