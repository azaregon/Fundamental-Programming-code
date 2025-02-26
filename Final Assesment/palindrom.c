#include <stdio.h>
#include <string.h>


int main() {
    char str[1000];

    scanf("%s",&str);

    int palindrome = 1;


    int lenstr = strlen(str);

    for (int i = 0; i < lenstr; i++) {
        if (str[i] != str[lenstr-1-i]) {

            palindrome = 0;
            break;
        }
    }
    

    if (palindrome) printf("PALINDROM");
    else if (!palindrome) printf("BUKAN PALINDROM");

}