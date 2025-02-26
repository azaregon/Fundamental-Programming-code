#include <stdio.h>


int main() {
    int jml;
    scanf("%d", &jml);

    int count[100000];
    int max_num = 0;

    for (int i = 0; i < jml; i++) {
        int at_i;
        
        scanf("%d",&at_i);

        count[at_i] += 1;
        
        if (at_i > max_num) {
            max_num = at_i;
        }
    }

    int mode = 0;
    int i_mode = 0;

    // printf("%d",max_num);

    for (int i = 1; i <= max_num; i++) {
        int at_i = count[i];

        if (at_i >= mode) {
            // printf("%d",i);
            mode = at_i;
            i_mode = i;
        }

        // printf("%d::%d\n", i,at_i);
        
    }

    printf("Modus: %d\n",i_mode);

    //prime find

    int is_prime = 1;

    for (int p=2; p < i_mode-1; p++) {

        // printf("%d\n",p);

        if (mode % p == 0) {
            is_prime = 0;
            break;
        } 
    }

    if (is_prime) {
        printf("Wah, modusnya prima nihh.");

    } else {
        printf("Yah, modusnya gak prima.");

    }
    

    // printf("%d| %d %d",max_num,i_mode,mode);
    

}