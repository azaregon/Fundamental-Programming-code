#include <stdio.h>


typedef struct  {
    long long meem[100000];
} memm;

memm mem[2000000000];

long long f(int a,int b, int n) {
    long long res;

    n = n %

    if (mem[n] != 0) {
        return mem[n];
    }

    if (n == 0) {
        res = 1;
    } else if (n == 1) {
        res = 2;
    } else if (n == 2) {
        res = a+b;
    } else if (n == 3) {
        res = 5;
    } else if ( n % 2  == 0 && n > 3) {
        res = ( a *f(a,b,n-2) +b ) % 1000000007;
    } else if ( n % 2  != 0 && n > 3) {
        res = ( 4*f(a,b,n-2) - 4*f(a,b,n-4) + (n-1)*(n-1)/4 ) % 1000000007 ;

    }

    mem[n] = res;

    return res;
}

int main() {

    int tc;

    scanf("%d",&tc);

    for (int i = 0; i < tc; i++) {

        int a,b,n;
        scanf("%d %d %d",&a,&b,&n);

        long long res2 = f(a,b,n);


        printf("%ld\n",res2);

    }

    
}