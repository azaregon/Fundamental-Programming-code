#include <stdio.h>



long long lcm(long long a,long long b) {
    long long bigger;
    long long lesser;
    long long kpk = a*b;

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

        if (i_now*bigger % lesser == 0) {

            kpk = i_now * bigger;
            break;
        }

        
        
    }

    return kpk;
}


long long gcd(long long a,long long b) {
    long long elceem =0;
    return (a*b)/lcm(a,b);
}



int main() {

    long long a,b;
    scanf("%lld %lld",&a,&b);



    printf("%lld",gcd(a,b));

}