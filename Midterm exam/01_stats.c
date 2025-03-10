#include <stdio.h>
#include <limits.h>
#include <math.h>
    int max(int a[], unsigned int aSize);
    int min(int a[], unsigned int aSize);
    int sum(int a[], unsigned int aSize);
    double average(int sum, unsigned int aSize);
    double sDeviation(int a[], double mean, unsigned int aSize);
int main() {
    int i;
    int a[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    printf("%s%13s\n", "Element", "Value");
    for (i = 0; i < 10; i++) {
        printf("%7d%13d\n", i, a[i]);
    }
    unsigned aSize = sizeof(a) / sizeof(a[0]);
    printf("Size of a = %d\n", aSize);
    printf("max(): %d\n", max(a, aSize));
    printf("min(): %d\n", min(a, aSize));
    int arraySum = sum(a, aSize);
    printf("sum(): %d\n", arraySum);
    double avg = average(arraySum, aSize);
    printf("average(): %.3f\n", avg);
    printf("sDeviation(): %.3f\n", sDeviation(a, avg, aSize));
    return 0;
}
int max(int a[], unsigned int aSize) {
    int i;
    int m = INT_MIN; /* INT_MIN from <limits.h> */
    for (i = 0; i < aSize; i++) {
        int at_i = a[i];
        if (at_i > m) {
            m = at_i;
        }
    } /* Please continue this function */
    return m;
}
int min(int a[], unsigned int aSize) {
    int i;
    int m = INT_MAX; /* INT_MAX from <limits.h> */
    for (i = 0; i < aSize; i++) {
        int at_i = a[i];
        if (at_i < m) {
            m = at_i;
        }
    } /* Please continue this function */
    return m;
}
int sum(int a[], unsigned int aSize) {
    int i;
    int s = 0;
    for (i = 0; i < aSize; i++) {
        int at_i = a[i];
        s += at_i;

    } /* Please continue this function */

    return s;

}
double average(int sum, unsigned int aSize) {
/* Please continue this function */
    return (double) sum / (double) aSize; 

}
double sDeviation(int a[], double mean, unsigned int aSize) {
    int i;
    double s = 0.0;
    for (i = 0; i < aSize; i++) {
        int at_i = a[i];
        // (xi-avg(x)^2)
        double calc = pow(((double)at_i-mean),2);
        // printf("%f",calc);

        s += calc;
    } /* Please continue this function */
    double res = sqrt(((double) s/(double) aSize));
    printf("%f",s);
    return res;

}
