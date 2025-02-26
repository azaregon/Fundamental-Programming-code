#include <stdio.h>


long long fact(int n) {
    if (n == 0||n == 1) {
        return 1;
    }

    return n * fact(n-1);
}

int main() {
    int n;
    scanf("%d",&n);


    long long res = fact(n);


    printf("%lld",res);
}