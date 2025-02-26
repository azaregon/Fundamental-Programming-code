#include <stdio.h>
#include <string.h>

int main(){

    long long int to_inp;
    scanf("%lld",&to_inp);


    for (long long int i = 0; i < to_inp; i++) {
        char command[1000] = "", str1[1000] = "", str2[1000]="";


        scanf("%s %s %s",command, str1, str2);

        int l_str1= strlen(str1) ,l_str2 = strlen(str2);

        int cnt_str1[27] = {0},cnt_str2[27]={0};

        if (strcmp(command,"FLIP") == 0) {
            // char flipped[3000]="";
            int fliped = 1;
            for (int j = 0;j < l_str1; j++) {
                if (str1[j] == str2[l_str2 - j -1]) {
                    
                } else {
                    fliped = 0;
                    break;
                }
            }
            // for (int i = 0; i < l_str1; i++) {
            //     flipped[l_str1-i-1] = str1[i];
            //     // printf("%c\n",flipped[l_str1]);
            // }

            // printf("%s %s  ",flipped,str2);

            // checker
            if (fliped) {
                printf("Flip %s to get %s\n",str1,str2);
            } else {
                printf("This cannot lah bro\n");
            }
        }

        else if (strcmp(command,"ANAGRAM") == 0) {
            if(1) {
                // char str1tmp[3000] ;
                // char str2tmp[3000];

                // strcpy(str2tmp,str2);
                // strcpy(str1tmp,str1);



                // for (int i = 0; i < l_str1; i++) {
                //     for (int j = 0; j < l_str1; j++) {
                //         if (str1tmp[j]> str1tmp[j+1]) {
                //             char sv = str1tmp[j];
                //             str1tmp[j] = str1tmp[j+1];
                //             str1tmp[j+1] = sv;
                //         }
                //     }
                // }

                // for (int i = 0; i < l_str1; i++) {
                //     for (int j = 0; j < l_str1; j++) {
                //         if (str2tmp[j]> str2tmp[j+1]) {
                //             char sv = str2tmp[j];
                //             str2tmp[j] = str2tmp[j+1];
                //             str2tmp[j+1] = sv;
                //         }
                //     }
                // }
                // printf("%s %s\n",str1tmp,str2tmp);
                
                for (int i = 0; i < l_str1; i++) {

                    char at_i = str1[i];
                    // printf("%c",at_i);

                    switch (at_i)
                    {
                    case 'a':
                        cnt_str1[0]+=1;
                        break;
                    case 'b':
                        cnt_str1[1]++;
                        break;
                    case 'c':
                        cnt_str1[2]++;
                        break;
                    case 'd':
                        cnt_str1[3]++;
                        break;
                    case 'e':
                        cnt_str1[4]++;
                        break;
                    case 'f':
                        cnt_str1[5]++;
                        break;
                    case 'g':
                        cnt_str1[6]++;
                        break;
                    case 'h':
                        cnt_str1[7]++;
                        break;
                    case 'i':
                        cnt_str1[8]++;
                        break;
                    case 'j':
                        cnt_str1[9]++;
                        break;
                    case 'k':
                        cnt_str1[10]++;
                        break;
                    case 'l':
                        cnt_str1[11]++;
                        break;
                    case 'm':
                        cnt_str1[12]++;
                        break;
                    case 'n':
                        cnt_str1[13]++;
                        break;
                    case 'o':
                        cnt_str1[14]++;
                        break;
                    case 'p':
                        cnt_str1[15]++;
                        break;
                    case 'q':
                        cnt_str1[16]++;
                        break;
                    case 'r':
                        cnt_str1[17]++;
                        break;
                    case 's':
                        cnt_str1[18]++;
                        break;
                    case 't':
                        cnt_str1[19]++;
                        break;
                    case 'u':
                        cnt_str1[20]++;
                        break;
                    case 'v':
                        cnt_str1[21]++;
                        break;
                    case 'w':
                        cnt_str1[22]++;
                        break;
                    case 'x':
                        cnt_str1[23]++;
                        break;
                    case 'y':
                        cnt_str1[24]++;
                        break;
                    case 'z':
                        cnt_str1[25]++;
                        break;
                    
                    default:
                        break;
                    }
                }

                for (int i = 0; i < l_str2; i++) {
                    switch (str2[i])
                    {
                    case 'a':
                        cnt_str2[0]++;
                        break;
                    case 'b':
                        cnt_str2[1]++;
                        break;
                    case 'c':
                        cnt_str2[2]++;
                        break;
                    case 'd':
                        cnt_str2[3]++;
                        break;
                    case 'e':
                        cnt_str2[4]++;
                        break;
                    case 'f':
                        cnt_str2[5]++;
                        break;
                    case 'g':
                        cnt_str2[6]++;
                        break;
                    case 'h':
                        cnt_str2[7]++;
                        break;
                    case 'i':
                        cnt_str2[8]++;
                        break;
                    case 'j':
                        cnt_str2[9]++;
                        break;
                    case 'k':
                        cnt_str2[10]++;
                        break;
                    case 'l':
                        cnt_str2[11]++;
                        break;
                    case 'm':
                        cnt_str2[12]++;
                        break;
                    case 'n':
                        cnt_str2[13]++;
                        break;
                    case 'o':
                        cnt_str2[14]++;
                        break;
                    case 'p':
                        cnt_str2[15]++;
                        break;
                    case 'q':
                        cnt_str2[16]++;
                        break;
                    case 'r':
                        cnt_str2[17]++;
                        break;
                    case 's':
                        cnt_str2[18]++;
                        break;
                    case 't':
                        cnt_str2[19]++;
                        break;
                    case 'u':
                        cnt_str2[20]++;
                        break;
                    case 'v':
                        cnt_str2[21]++;
                        break;
                    case 'w':
                        cnt_str2[22]++;
                        break;
                    case 'x':
                        cnt_str2[23]++;
                        break;
                    case 'y':
                        cnt_str2[24]++;
                        break;
                    case 'z':
                        cnt_str2[25]++;
                        break;
                    
                    default:
                        break;
                    }
                }
                

                int is_anagram = 0;

                // for (int i =0; i < 27; i++) {
                //     printf("%d | %d %d // \n",i,cnt_str1[i],cnt_str2[i]);

                // }

                for (int i = 0; i < 27;i++) {
                    if (cnt_str1[i] == cnt_str2[i]) {
                        is_anagram = 1;
                        
                    } else {
                        is_anagram = 0;
                        break;
                    }
                }


                // if (strcmp(str1tmp,str2tmp) == 0) {
                //     is_anagram = 1;
                // } else {
                //     is_anagram = 0;
                // }

                if (is_anagram) {
                    printf("Hhm %s can be arranged into %s\n", str1,str2);
                } else {
                    printf("This cannot lah bro\n");
                }

                
            }
        }
    }

}