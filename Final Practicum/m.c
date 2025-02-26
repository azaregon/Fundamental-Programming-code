#include <stdio.h>



int main() {

    // int lst[100000];
    // int

    long long q;
    long long k;
    long long hasil = 0;


    scanf("%d %d",&q,&k);

    for (long i =2; i <=q;i++) {
        // hasil = k%i;
        hasil = (hasil+k) % i;
    }
    hasil+=1;



    printf("yapp, sapi ke %lld sepertinya memang yang terbaik.",hasil);



}