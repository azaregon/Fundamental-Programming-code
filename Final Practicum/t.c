#include <stdio.h>
#include <math.h>

#include <string.h>



// int main() {
//     char result[5];
//     char word[100];

//     scanf("%s",word);
//     // printf("%s\n",word);

//     // strcpy(injumb,word);



//     for (int i = 0; i < 5; i++) {
//         for (int i = 0; i < 5; i++) {
//             char bis[8];
//             int dig = 0;
//             scanf("%s",bis);

//             for (int i = 7; i >= 0; i--) {
//                 // printf("%c",bis[7-i]);
//                 dig += pow(2,i) * ((int) bis[7-i] - 48);
//             }


//             // printf("%d\n",strlen(word));
//             char hh = (char) dig;
//             // printf("%c",hh);
//             for (char * j = word; j < word+(strlen(word));j++) {
//                 // printf("%c\n",*j);

//                 if (hh == *j) {
//                     *j = '.';
//                     break;
//                 }
//             }
//             // strcat(injumb,hh);

//         }
//     }


//     printf("%s\n",word);

//     if (strcmp(word,".....") == 0) {
//         printf("%s found",word);
//     } else {
//         printf("Failed to find the specified word: %s",word);

//     }

//     // printf("%d",strcmp(word,"-----"));
// }


// char same2[8] = "PPPPPPPP";

// char word[100];
// int main() {

//     int same = 1;




//     scanf("%s",word);

//     int len = strlen(word);



//     for (int i = 0; i < 5;i++) {
//         for (int i = 0; i < 5;i++) {
//             char bis[8];
//             int dig = 0;

//             scanf("%s",bis);

//             for (int i = 0; i<8; i++ ) {
//                 dig += pow(2,7-i) * (*(bis+i)-48);
//             }


//             char chr = (char) dig;
//             // printf("%d %c\n",dig,chr);


//             // for (char * i = word; i < word+strlen(word);i++) {
//             //     if (*i == chr) {
//             //         // *i = ".";
//             //         same+=1;
//             //         break;
//             //     }
//             // }

//             for (int i = 0; i < len;i++) {
//                 // printf("%d\n",i);
//                 // printf("%c ",chr);
//                 if ((int)*(word+i) == dig && *(same2+i) == 'P') {
                    
//                     *(same2+i) = '.';
//                     for (int i = 0; i < len; i++ ) {
//                         // printf("%c",*(same2+i));
//                     }
//                     // printf("\n");
//                     break;
//                 }

//             }

//         }
//     }

//     // printf("%d\n",same);
//     // for (int i = 0; i < len; i++ ) {
//     //     printf("%d",*(same2+i));
//     // }
    
//     for (int i = 0; i < len; i++ ) {
//         // printf("%d %c\n",i,*(same2+i));
//         if (*(same2+i) != '.') {
//             same = 0;
//             break;
//         }
//     }
//     // printf("%s",same2);
    

//     if (same) {
//         printf("%s found",word);
//     } else {
//         printf("Failed to find the specified word: %s",word);
//     }
// }


// int cariH(int grid[7][7],char word[],int lenw) {
//      for (int i = 0; i < 5;i++) {
//         int same = 0;
//         for (int j = 0; j < 5;j++) {
//             printf("%c %c / ",*(*(grid+j)+i),*(word+j));
//             if ((char)*(*(grid+j)+i) == *(word+j)) {
//                 same += 1;
//             };

//             if (same == lenw) {
//                 return 1;
//             }


//             // for (char * i = word; i < word+strlen(word);i++) {
//             //     if (*i == chr) {
//             //         // *i = ".";
//             //         same+=1;
//             //         break;
//             //     }
//             // }


//         }
//         printf("\n");
//     }
//     // printf("\n\n\n");

//     return 0;

// }

// int cariV(int grid[7][7],char word[],int lenw) {
//      for (int i = 0; i < 5;i++) {
//         int same = 0;
//         int worditer = 0;
//         for (int j = 0; j < 5;j++) {
//             printf("%c %c / ",*(*(grid+i)+j),*(word+j));
//             if ((char)*(*(grid+i)+j) == *(word+worditer)) {
//                 same += 1;
//             } else {
//                 same = 0;
//                 worditer =0;
//             }

//             if (same == lenw) {
//                 return 1;
//             }

//             worditer++;
//             // for (char * i = word; i < word+strlen(word);i++) {
//             //     if (*i == chr) {
//             //         // *i = ".";
//             //         same+=1;
//             //         break;
//             //     }
//             // }


//         }
//         printf("\n");
//     }
    

//     return 0;

// }


int cariH(int grid[7][7],char word[],int lenw) {
    for (int i = 0; i < 5;i++) {
        int same = 0;
        int worditer = 0;

        for (int j = 0; j <= 5-lenw;j++) {
            int match = 1;
            for (int k = 0; k < lenw; k++) {
                // printf("%d %d %c %c / ",j,k,*(*(grid+j)+i+k),*(word+k));
                if ((char)*(*(grid+i)+j+k) != *(word+k)) {
                    match = 0;
                    break;
                }                
            }
            if (match) {
                return match;
            }
        }
        // printf("\n");
    }
    

    return 0;

}

int cariV(int grid[7][7],char word[],int lenw) {
     for (int i = 0; i < 5;i++) {
        int same = 0;
        int worditer = 0;

        for (int j = 0; j <= 5-lenw;j++) {
            int match = 1;
            for (int k = 0; k < lenw; k++) {
                // printf("%d %d %c %c / ",j,k,*(*(grid+j)+i+k),*(word+k));
                if ((char)*(*(grid+j+k)+i) != *(word+k)) {
                    match = 0;
                    break;
                }                
            }
            if (match) {
                return match;
            }
        }
        // printf("\n");
    }
    

    return 0;

}

char same2[8] = "PPPPPPPP";

char word[100];

int grid[7][7] = {{0}};

int main() {

    // int same = 1;
    int ada = 0;





    scanf("%s",word);

    int len = strlen(word);



    for (int i = 0; i < 5;i++) {
        for (int j = 0; j < 5;j++) {
            char bis[8];
            int dig = 0;

            scanf("%s",bis);

            for (int i = 0; i<8; i++ ) {
                dig += pow(2,7-i) * (*(bis+i)-48);
            }


            char chr = (char) dig;
        


            // if (chr == *(word+j))
            // printf("%d %c\n",dig,chr);
            // printf("%d %d ",i,j);
            *(*(grid+i)+j) = dig;


            // for (char * i = word; i < word+strlen(word);i++) {
            //     if (*i == chr) {
            //         // *i = ".";
            //         same+=1;
            //         break;
            //     }
            // }


        }
    }

    int hasilH = cariH(grid,word,len);
    // printf("\n\n\n");
    int hasilV = cariV(grid,word,len);


    // for (int i = 0; i < 5;i++) {
    //     for (int j = 0; j < 5;j++) {
    //         printf("%d " ,*(*(grid+i)+j));
    //     }
    //     printf("\n");
    // }

   


    if (hasilH || hasilV) {
        printf("%s found",word);
    } else {
        printf("Failed to find the specified word: %s",word);
    }
}

