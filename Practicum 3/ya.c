#include <stdio.h>


long long sum = 1;


void fib(int a, int b, int x) {

    if (x == 0) {
        sum = 0;
        printf("0");
    } 
    

    long long res =  a+b;
    if (a+b <= x) {
        sum += res;
        fib(b,res,x);
    }

    if (a+b <= x) {

    printf("%lld ",res);
    }
}

int main() {

    long long x;
    scanf("%lld",&x);
    

    // if (x == 0) {
    //     printf("%d",0);
    //     sum = 0;
    // }
    // else if (x == 1) {
    //     printf("%d %d %d",1,1,0);
    //     sum = 2;
    // }
    // else {
    //     fib(0,1,x); 
    //     printf("%d %d",1,0);
    //     sum+=1;
    // }
    // printf("%d %d \n",1,0);
    fib(0,1,x);
    printf("%d %d", 1,0);
    printf("\n%lld",sum);


}





