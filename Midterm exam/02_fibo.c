#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

long long int result_i[2]={0,1}; 
long long int result_r[2]={0,1}; 

int iterativeResult(int num);
int recursiveResult(int num);


int main() {
    int number;

    printf("Enter a number: "); scanf("%d",&number); printf("\n\n");
   
    struct timespec t_i_s, t_i_e, t_r_s, t_r_e;

    clock_gettime(CLOCK_MONOTONIC,&t_i_s);
    iterativeResult(number);
    clock_gettime(CLOCK_MONOTONIC,&t_i_e);

    printf("Iterative\n");
    printf("%dth Fibonacci = %lld\n",number, result_i[0]);
    printf("Sum of Fibonacci until %dth term = %lld\n",number, result_i[1]);

    long long secondsElapsed_i = t_i_e.tv_sec - t_i_s.tv_sec;
    long long nanosecondsElapsed_i = t_i_e.tv_nsec - t_i_s.tv_nsec;
    long long elapsed_i = secondsElapsed_i * 1000000000 + nanosecondsElapsed_i;
    printf("Iterative time: %lld nanoseconds\n\n",elapsed_i);



    clock_gettime(CLOCK_MONOTONIC,&t_r_s);
    int a = recursiveResult(number);
    clock_gettime(CLOCK_MONOTONIC,&t_r_e);
    printf("Recursive\n");
    printf("%dth Fibonacci = %lld\n",number, result_r[0]);
    printf("Sum of Fibonacci until %dth term = %lld\n",number, result_r[1]);

    long long secondsElapsed_r = t_r_e.tv_sec - t_r_s.tv_sec;// end - start
    long long nanosecondsElapsed_r = t_r_e.tv_nsec - t_r_s.tv_nsec;
    long long elapsed_r = secondsElapsed_r * 1000000000 + nanosecondsElapsed_r;
    printf("Recursive time: %lld nanoseconds\n\n",elapsed_r);


    if ( elapsed_i < elapsed_r) {
        printf("Iterative method is faster than recursive by %lld nanoseconds\n",elapsed_r-elapsed_i);
    } else {
        printf("Recursive method is faster than iterative by %lld nanoseconds\n",elapsed_i-elapsed_r);
    }

    




}



int iterativeResult(int num) {
    long long int sequences[num+2];
    long long int sum=0;

    for (int i = 0; i <= num ;i++) {
        if (i == 0) {
            sequences[i] = 0;
        } else if (i == 1) {
            sequences[i] = 1;
        } else {
            sequences[i] = sequences[i-1] + sequences[i-2];
        }
        sum+=sequences[i];
    }

    // for (int i =0;i<=num; i++) {
    //     printf("%lld ",sequences[i]);
    // }
    // printf("\n");

    result_i[0] = sequences[num];
    result_i[1] = sum;

    return 0;
} 


int recursiveResult(int num) {
    long long int at_i = 0;
    if (num == 0) {
        at_i =  0;
        // result_r[1] = 0;
        return at_i;
    } else if (num == 1) {
        at_i = 1;
        // result_r[1] = 1;
        return at_i;
    } else {
        at_i = recursiveResult(num-2) + recursiveResult(num-1);
        // at_i = recursiveResult(num-2) + recursiveResult(num-1) + 1;

        // printf("%d ",result[1]);
    }

    if (at_i > result_r[0]) {
        // the sum will be added if the fibonacci at i is greater than what we saved
        // we need this so it will not added the fibonacci at i twice 
        // (because we used recursive, there are possibilities that the same fibonacci at i will occur more than one time)
        result_r[1] = result_r[1] + at_i;
        // printf("%d %d \n\n",num,result[1]);

    }
    
    if (at_i >= result_r[0]) {
        result_r[0] = at_i;
    }
    
    return at_i;
}
