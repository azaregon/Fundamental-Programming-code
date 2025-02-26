#include <stdio.h>



// long long fib(long long x,long long y,long long a,long long b,long long n) {
//     // if (n > 1000000006) {
//     //     n = n %1000000007;
//     // }
//     if (n == 0) {
//         return x % 1000000007;
//     } else if (n == 1) {
//         return y % 1000000007;
//     }

//     long long min2 = x;
//     long long min1 = y;
//     long long nxt = 0;

//     for (long long i = 0; i < n-1; i++) {
//         nxt = (a*min1 + b*min2) % 1000000007;
//         min2 = min1;
//         min1 = nxt ;
//     }


//     return nxt   ;
// }


// long long memo1[500000000000000000] = {0} ;
// long long memo2[500000000000000000] = {0};

// long long fib(int x,int y,int a,int b,int n) {
//     n = n % 500000000000000000;
//     long long * memo;
//     memo = memo1;
//     if (n >= 500000000000000000 ) {
//         memo = memo2;
        
//     }
//     if (memo[n] != 0) {
//         return memo[n];
//     }
//     if (n == 0) {
//         memo[n] = x;
//         return x;
//     } else if (n == 1) {
//         memo[n] = y;
//         return y;
//     } else {
//         long long res = a * fib(x,y,a,b,n-1) + b * fib(x,y,a,b,n-2) ;
//         memo[n] = res % 1000000007;
//         return res % 1000000007;//a * fib(x,y,a,b,n-1) + b * fib(x,y,a,b,n-2) 
//     }
// }



// long long memo1[1000000000];

typedef struct {
    long long meem[1000000000];
} memm;

memm memo[1000000000];


long long fib(int x,int y,int a,int b,int n) {
    long long m = n / 1000000000;
    long long l = n % 1000000000;
    
    if (memo[m].meem[l] != 0) {
        return memo[m].meem[l];
    }
    if (n == 0) {
        memo[m].meem[l] = x;
        return x;
    } else if (n == 1) {
        memo[m].meem[l] = y;
        return y;
    } else {
        long long res = a * fib(x,y,a,b,n-1) + b * fib(x,y,a,b,n-2) ;
        memo[m].meem[l] = res % 1000000007;
        return res % 1000000007;//a * fib(x,y,a,b,n-1) + b * fib(x,y,a,b,n-2) 
    }
}


int main() {


    long long x,y,a,b,n,hasil;


    scanf("%lld %lld %lld %lld %lld",&x,&y,&a,&b,&n);

    // for (int i = 0; i < 1000; i++) {
    //     printf("%lld ",memo[i]);
    // }
    hasil = fib(x,y,a,b,n);

    // for (int i = 0; i < 1000; i++) {
    //     printf("%lld ",memo[i]);
    // }

    printf("%lld", hasil );
 



}