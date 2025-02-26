#include <stdio.h>
#include <string.h>


int main() {
    char word[10000];
    printf("Enter word or sentence: "); gets(word);
    // gets("Enter word or sentence: %s",word);


    int is_palindrome = 1;

    for (int i = 0; i < strlen(word); i++) {
        if (word[i] != word[strlen(word)-i-1]) {
            is_palindrome = 0;
            break;
        }
    }


    (is_palindrome) ? printf("It is a palindrome") : printf("It is not a palindrome");
}
