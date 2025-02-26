#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    int n,m;
    char str[1000];
    char newstr[1000];


    scanf("%d",&n);
    scanf("%s",str);

    // for (int i = 0; i < strlen(str)*n;i+=4) {
    //     printf("%d\n",i);
    // }

    // m = ceil((float)strlen(str)/(float)n)  ;

    // for (int i = 0; i < strlen(str); i++) {
    //     // if (str[(i/n) + ((i%n)*n)] == '_') {
    //     //     str[(i/n) + ((i%n)*n)] = ' ';
    //     // }
    //     printf("%d ",(i/m) + ((i%m)*m)+n);
        
    //     newstr[i] = str[(i/m) + ((i%m)*m) ];

    // }

    // for (int i = 0; i < strlen(str); i++) {
    // // if (str[(i/n) + ((i%n)*n)] == '_') {
    // //     str[(i/n) + ((i%n)*n)] = ' ';
    // // }
    // int mup = i/m;



    // }

    int upindex = 0;

    // for (int i = 0; i<strlen(str); i++) {
    //     for (int j = 0; j < n  ; j++ ) {
    //         // printf("%d ",i + j*m);
    //         if (str[i+j*m] == '_') newstr[upindex] = ' ';
    //         else newstr[upindex] = str[i + j*m];
    //         upindex++;
    //     }



    // }

    // for (int i = 0; i < n;i++) {
    //     for (int j = 0; j < ceil(strlen(str)/n) +1;j++) {
    //         // printf("%d ",i + j*n);
    //         // printf("%c  ",str[i + (n * ( j % n ) )]);
    //         // if (str[i + j*n] == '_') newstr[upindex] = ' ';
    //         // else newstr[upindex] = str[i + j*n];
    //         // if (str[upindex] == '_') newstr[i + j*n] = ' ';
    //         newstr[upindex] = str[i + (n * ( j % n ) )];
    //         upindex++;

    //     }
    //     printf("\n");
    // }


    // for (int i =0; i< strlen(str);i++) {
    //     // printf("%d %d %d\n",i,(i/n),(i%4)*(i/n));
    //     printf("%d %d %d ",i,(i/n),(i/n)+n*(i%n));
    //     // newstr[i] =str[(i/n)+n*(i%n)];

    //     printf("%c\n",str[(i/n)+n*(i%n)]);
    //     // newstr[(i/n)+n*(i%n)] =str[upindex];


    // }

    // int ind = 0;
    // while (1) {
    //     for (int i =0; i< 4;i++) {
    //         // printf("%d %d %d ",i,(i/n),ind+n*(i%n));
            
            
    //         // printf("\n");
    //         if (str[upindex] == '_') newstr[ind+n*(i%n)] = ' ';
    //         else newstr[ind+n*(i%n)] = str[upindex];
    //         upindex++;
    //     }
    //     ind++;

    //     if (upindex >= strlen(str)) {
    //         break;
    //     }
    // }

    
//  for (int i =0; i < n;i++) {
//     for (int j =0; j<strlen(str);j++) {
//         printf("%d",i+j*n);
//         printf("%c\n",str[i+j*n]);

//         if (i+j*n >= strlen(str)) {
//             break;
//         }
//     }
//  } 
    for (int i = 0; i < n;i++) {
        for (int j =0; j<100;j++) {
            if (i+j*n >= strlen(str)) {
                break;
            }
            // printf(" %d ",i+j*n);
            if ( str[upindex] == '_' ) newstr[i+j*n]=' ';
            else newstr[i+j*n] = str[upindex] ;
            // printf(" %c\n",str[upindex]);
            upindex++;

        }
        // printf("\n\n");
    }

    // for (int i =0; i< n; i++) {
    //     for (int i = 0; i < strlen(str); i++) {
    //         for (int j =0; j<n;j++) {
    //             if (i+j*n > strlen(str)) {
    //                 break;
    //             }
    //             printf(" %d ",i+j*n);
    //             printf(" %c\n",str[i+j*n]);

    //     }
    //     }
    // }
    

    // for (int i = 0; i < n;i++) {
    //     for (int j = 0; j < ceil(strlen(str)/n);j++) {
    //         // printf("%d ",i + j*n);
    //         printf("%c  ",str[i + j*n]);
    //         // if (str[i + j*n] == '_') newstr[upindex] = ' ';
    //         // else newstr[upindex] = str[i + j*n];
    //         if (str[upindex] == '_') newstr[i + j*n] = ' ';
    //         else newstr[i + j*n] = str[upindex];
    //         upindex++;

    //     }
    //     printf("\n");
    // }

    printf("%s",newstr);



}