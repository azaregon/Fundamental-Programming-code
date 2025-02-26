#include <stdio.h>

int dechiper(int i,int arr_from[] );


int main() {
    int numss[15] = {94,222,221,186,181,208,207,110,187,185,17,212,115,215,100};
    int numsd[15] = {94,222,221,186,181,208,207,110,187,185,17,212,115,215,100};
    int len = 15;
    char dechipered[15];

    // for (int i = 0; i < len; i++) {
    //     nums[i] = numss[len-1-i];
    //     // printf("%d ",numss[i]);
    // }


    // for (int i = len; i >= 0; i--) {
    //     int op1 = numss[i-1] + numss[i];
    //     int op2 = numss[i-1] - numss[i];
    //     int op3 = (numss[i-1] * 2) - numss[i];
    //     int op4 = ((numss[i-1]-3) * 2) + numss[i];

    //     if (65 <= op1 && op1 <= 122) {
    //         numss[i-1] = op1;
    //     } else if (65 <= op2 && op2 <= 122) {
    //         numss[i-1] = op2;
    //     } else if (65 <= op3 && op3 <= 122) {
    //         numss[i-1] = op3;
    //     } else if (65 <= op4 && op4 <= 122) {
    //         numss[i-1] = op4;
    //     }
    // }

    // for (int i = 0; i < len; i++) {
    //     printf("%c", (char) numss[i]);
    // }

    dechiper(15,numsd);


    for (int i = 0; i < len-1; i++) {
        printf("%c",(char) numsd[i]);
    }
}


int dechiper(int i,int arr_from[]) {

    // printf("%d\n",arr_from[i-1]);


    if (i == 0) {
        return 0;
    }


    int val_at_i = arr_from[i];
    int val_at_nxt_i = arr_from[i-1];

    int op1 = val_at_nxt_i + val_at_i;
    int op2 = val_at_nxt_i - val_at_i;
    int op3 = (val_at_nxt_i * 2) - val_at_i;
    int op4 = ((val_at_nxt_i-3) * 2) + val_at_i;
    if (65 <= op1 && op1 <= 122) {
        arr_from[i-1] = op1;
    } else if (65 <= op2 && op2 <= 122) {
        arr_from[i-1] = op2;
    } else if (65 <= op3 && op3 <= 122) {
        arr_from[i-1] = op3;
    } else if (65 <= op4 && op4 <= 122) {
        arr_from[i-1] = op4;
    }
    
    // printf("%d %d | ",i,arr_to[i+1]);
    // printf("%d %d %d %d\n",op1,op2,op3,op4);

    dechiper(i-1,arr_from);
    return 0;

}