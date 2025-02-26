#include <stdio.h>
#include <string.h>


int main() {
    long long int N,M,F;
    // N: tahun sekarang; M: lama perjalanan; F: bahan bakar

    scanf("%lld %lld %lld", &N, &M,&F);


    long long max = (N ^ F) -1;

    printf("%lld",max);


    
}