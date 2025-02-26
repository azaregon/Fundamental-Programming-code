#include <stdio.h>

long long cari(int n ) {
    if (n == 1) {
        return 2;
    } else {
        return 3 * cari(n-1);
    }
}

int main() {
    int n;

    scanf("%d",&n);
    long long hasil = cari(n);

    printf("Ada %lld model, bebaskan aku!",hasil);
}