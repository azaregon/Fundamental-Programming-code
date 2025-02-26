#include <stdio.h>
#include <string.h>

// Function to map characters to their QWERTY precedence
int getPrecedence(char key) {
    switch (key) {
        case 'q': return 1; case 'w': return 2; case 'e': return 3;
        case 'r': return 4; case 't': return 5; case 'y': return 6;
        case 'u': return 7; case 'i': return 8; case 'o': return 9;
        case 'p': return 10; case 'a': return 11; case 's': return 12;
        case 'd': return 13; case 'f': return 14; case 'g': return 15;
        case 'h': return 16; case 'j': return 17; case 'k': return 18;
        case 'l': return 19; case 'z': return 20; case 'x': return 21;
        case 'c': return 22; case 'v': return 23; case 'b': return 24;
        case 'n': return 25; case 'm': return 26;
        default: return -1; // For invalid characters
    }
}

// Helper function to reverse a part of the string
void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char kar[1000000];
    scanf("%s", kar);

    int len = strlen(kar);
    int i;

    // Step 1: Find the first decreasing element from the end
    for (i = len - 2; i >= 0; i--) {
        if (getPrecedence(kar[i]) < getPrecedence(kar[i + 1])) {
            break;
        }
    }

    if (i < 0) {
        // If no such element exists, the sequence is the last permutation
        reverse(kar, 0, len - 1);
    } else {
        // Step 2: Find the next larger element in the suffix
        for (int j = len - 1; j > i; j--) {
            if (getPrecedence(kar[j]) > getPrecedence(kar[i])) {
                // Swap the elements
                char temp = kar[i];
                kar[i] = kar[j];
                kar[j] = temp;
                break;
            }
        }
        // Step 3: Reverse the suffix
        reverse(kar, i + 1, len - 1);
    }

    // Output the next permutation
    printf("%s\n", kar);
    return 0;
}