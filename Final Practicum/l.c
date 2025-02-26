#include <stdio.h>
#include <math.h>

// int main() {
//     long double pi = 3.14159265358979323846;


//     long double vol ;

//     scanf("%Lf",&vol);

//     long double r  = cbrtl((vol / (2*pi)));


//     long double lP = 6*pi*r;



//     printf("Luas permukaan: %.2Lf %.2Lf %.2Lf",vol,r,lP);


// }


int main() {
    long double pi = 3.14159265358979323846;


    long double vol ;

    scanf("%Lf",&vol);

    long double r ;
    r = cbrtl(vol / (2*pi));


    long double lP = 6*pi*r*r;



    printf("Luas permukaan: %.2Lf",lP);


}