#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {

    int m[9];
    printf("Enter the matrix: \n");
    for (int i = 0; i < 9; i++) {
        scanf("%d",&m[i]);
    }
    printf("The matrix: \n");
    for (int i = 0; i < 9; i++) {
        printf("%d ",m[i]);
        if ((i+1) % 3 == 0) {
            printf("\n");
        }
    }

    /*
    0 1 2
    3 4 5
    6 7 8

    D = 048 + 156 + 237 - 246 - 138 -057
    */

    int determinant = m[0]* m[4] * m[8]   +   m[1] * m[5] * m[6]   +  m[2] * m[3] * m[7]  -  m[2] * m[4] * m[6]  -  m[1] * m[3] * m[8]  -  m[0] * m[5] * m[7]; 
    printf("Matrix determinant: %d\n",determinant);
    
    (determinant) ? printf("Matrix is invertible\n") :printf("Matrix is not invertible");  

}
