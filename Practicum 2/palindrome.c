#include <stdio.h>
#include <string.h>

int main(){
    char str1[3000] = "abc";

    int l_str1 = strlen(str1);

    char str2[l_str1];

    for (int i = 0; i < l_str1; i++) {
        str2[l_str1-i-1] = str1[i]; 
    }


    printf("%s",str2);
}