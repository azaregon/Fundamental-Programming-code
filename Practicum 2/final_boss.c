#include <stdio.h>
#include <math.h>

int main()
{
    //unsigned long long int m = 5,n = 3,f = 1;
    //unsigned long long int m = 3,n = 5,f = 1;
    //unsigned long long int m = 6277,n = 38,f = 21;
    unsigned long long int n,m,f;

    // n: year from
    // m: distance
    // f:fuel left

    scanf("%llu %llu %llu",&n,&m,&f);
    
    unsigned long long k = ~0;
    
    int can_save = 0;

    unsigned long long k_check = (n ^ (m+1));

    if (0 <= k_check && k_check <=f) {
        can_save = 1;}
    else if (n > m) {
        //bcause m
        can_save = 1;
    }
    else{
        
        for (int i = 0; i <=64; i++) {
            unsigned long long k_now = k >> i;
            
            unsigned long long max =  ((n ^ k_now) == 0) ? (n ^ k_now)-1:(n ^ k_now) ;
            printf("%llu %llu %d | ",k_now,max, max>=n);
            // printf("%d\n",k_now);

            

            if (max >= m  && k_now <= f) {
                can_save = 1;
                break;
            }
            
            //printf("%llu\n",k>>i);
            //printf("%lld",k);
        }
    }
    
    if (can_save) {
        printf("HAHAHA, I CAN SAVE THE WORLD");
    } else {
        printf("OH NOOO, I FAILED");
    }

}
