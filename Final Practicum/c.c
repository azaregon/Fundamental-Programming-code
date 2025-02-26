#include <stdio.h>


int main() {
    double x1,y1,x2,y2;


    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

    if (x1 ==x2) {
        printf("-_-");
        return 0;
    }

    double m = (y2-y1)/(x2-x1);

    double k = (double)y1-(m*(double)x1);


    printf("%.2lf %.2lf",m,k);





}