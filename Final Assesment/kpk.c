#include <stdio.h>


int main() {


    long long  a;
    long long  b;


    scanf("%lld %lld",&a,&b);

    long long kpk = a*b;

    long long bigger;
    long long lesser;

    if (b > a) {
        bigger = b;
        lesser = a;
    } else if (a > b) {
        bigger = a;
        lesser = b;
    } else {
        bigger = a;
        lesser = b;
    }

    for (long long i = 0; i < a*b; i++) {
        long long i_now = i+1;

        // printf("%lld %% %lld = %lld",i_now*bigger,lesser,i_now*bigger % lesser);
        // printf("%lld %lld | %lld\n",bigger,lesser,i_now*bigger);

        if (i_now*bigger % lesser == 0) {
            // printf(" --> %lld",i_now*bigger);
            kpk = i_now * bigger;
            break;
        } 
        // printf("\n");
        
        
    }


    printf("%lld",kpk);


}