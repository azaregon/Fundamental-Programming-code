#include <stdio.h>
#include <string.h>
#include <math.h>


typedef struct {
    int x;
    int y;

} pos;


double eud(pos one, pos two) {
    return sqrt( ((two.x-one.x) * (two.x-one.x)) + ((two.y-one.y) * (two.y-one.y)) );
}


int main() {
    int jmlD;
    scanf("%d",&jmlD);

    pos poseslst[jmlD];

    for (int i = 0; i < jmlD; i++)
    {
        int x;
        int y;
        scanf("%d %d", &x,&y);
        
        poseslst[i].x = x;
        poseslst[i].y = y;

    }

    int indexA = 0;
    int indexB = 1;
     
    double lowest = 10000000;

    while(indexB < jmlD) {
        for (int i = indexB; i < jmlD; i++) {
            // printf("%d %d %d\n",i,indexA,i);
            pos one = poseslst[indexA];
            pos two = poseslst[i];


            double jarak = eud(one,two);
            // printf("%.2lf\n",jarak);



            if (jarak < lowest) {
                lowest = jarak;
            }
        }


        indexA += 1; indexB += 1;
    }

    printf("%.2lf",lowest);



    
    
    
}