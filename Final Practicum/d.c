#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char nama[10];
    scanf("%s %d",nama,&n);

    if (strcmp(nama,"Oddie") != 0 && strcmp(nama,"Ellie") != 0) {
        printf("Who is that?");
        return 0 ;
    }

    int cnt = 0;
    for (int i = 1; i <= n;i++) {

        if (strcmp(nama,"Oddie") == 0 && i % 2 != 0) {
            cnt+=i;
        } else if (strcmp(nama,"Ellie") == 0 && i % 2 == 0) {
            cnt += i;
        }

    }

    printf("%d",cnt);
}