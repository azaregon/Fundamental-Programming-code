#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);


    long long res =0;

    for (int i = 0; i< n; i++) {
        res += (i+1) * (i+1);
        
    }


    printf("%lld",res);
}