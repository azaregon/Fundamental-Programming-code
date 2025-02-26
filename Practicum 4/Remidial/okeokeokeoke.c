#include <stdio.h>
#include <string.h>

int getPrecedence(char key) {
switch (key) {
case 'q': return 1;
case 'w': return 2;
case 'e': return 3;
case 'r': return 4;
case 't': return 5;
case 'y': return 6;
case 'u': return 7;
case 'i': return 8;
case 'o': return 9;
case 'p': return 10;
case 'a': return 11;
case 's': return 12;
case 'd': return 13;
case 'f': return 14;
case 'g': return 15;
case 'h': return 16;
case 'j': return 17;
case 'k': return 18;
case 'l': return 19;
case 'z': return 20;
case 'x': return 21;
case 'c': return 22;
case 'v': return 23;
case 'b': return 24;
case 'n': return 25;
case 'm': return 26;
}
}


int main() {
    char kar[1000000];
    scanf("%s",kar);

    char karcopy[1000000];

    strcpy(karcopy,kar);



    char * index = kar + strlen(kar)-1;

    char * pinpoint;




    // printf("%d %d",getPrecedence(*(index-1)),getPrecedence(*(index)));
    while (index-1 >= kar) {
        if ( getPrecedence(*(index-1)) < getPrecedence(*index) ) {
            pinpoint = index-1;
            // char sv = *index;
            // *index = *(index-1);
            // *(index-1) = sv;
            // printf("%s\n\n",kar);

            // if (index == kar  + strlen(kar)-1) break;

            // for (char * i = kar + strlen(kar)-1; i > index; i-- ) {
            //     if ( getPrecedence(*(index)) > getPrecedence(*i) ) {
            //         char sv = *index;
            //         *index = *(i);
            //         *(i) = sv;
            //     }
            // }


            for (char * i = kar + strlen(kar)-1; i > pinpoint; i-- ) {
                if ( getPrecedence(*(i)) > getPrecedence(*pinpoint) ) {
                    char sv = *i;
                    *i = *(pinpoint);
                    *(pinpoint) = sv;
                    break;
                }
            }

            

            // for (char * i = kar+strlen(kar)-1; i >= index+1; i--) {
            //     // printf("%p",i);
            //     char sv = *i;
            //     *i = *(index-kar);
            //     *(i-1) = sv;
            // printf("%s\n",kar);

            // char *pi = kar+strlen(kar)-1;
            // for (int i = 0; i >= k; i--) {
            //     // printf("%p",i);
            //     char sv = *i;
            //     *i = *(i-1);
            //     *(i-1) = sv;
            //     printf("%s\n",kar);


            //     // printf("%c %c\n",*i,*(index-1));

                
            // }

            char * last = kar + strlen(kar);
            // for (char * i = index; i < last-(strlen(index)/2); i++) {
            for (int i = 0; i < strlen(index)/2;i++) {
                // printf("%c\n",*(index+i));
                char sv = *(index+i);
                *(index+i) = *(last-i-1);
                *(last-i-1) = sv;

            }

            break;

        }





        index--;
        
    }

    // printf("%s",kar);
    

    if (strcmp(kar,karcopy) == 0) {
        char * last = kar + strlen(kar);
            // for (char * i = index; i < last-(strlen(index)/2); i++) {
            for (int i = 0; i < strlen(index)/2;i++) {
                // printf("%c\n",*(index+i));
                char sv = *(index+i);
                *(index+i) = *(last-i-1);
                *(last-i-1) = sv;

            }
    } else {

    }
        printf("%s",kar);


    // char newkar[100000];





}