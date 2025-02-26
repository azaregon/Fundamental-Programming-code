#include <stdio.h>
#include <string.h>



int getAuthority(char nama[]) {
    if (strcmp(nama,"furina") == 0) {
        return 3;
    } else if (strcmp(nama,"hutao") == 0) {
        return 2;
    } else if (strcmp(nama,"lyney") == 0) {
        return 1;
    }

    return 1;

}

int getAct(char act[]) {
    if (strcmp(act,"beraksi") == 0) {
        return 1;
    } else if (strcmp(act,"istirahat") == 0) {
        return 2;
    }
    return 2;
}


int main() {
    

    char last_oto_c[100] = "";
    char last_act_c[100] = "";

    int last_oto_comm = 0;
    char last_oto_comm_c[100] = "";


    int last_oto = 0;
    int last_act = 0;

    int n;
    scanf("%d",&n);


    for (int i = 0; i < n;i++) {
        char nama[100];
        char comm[100];

        scanf("%s %s",nama,comm);

        int oto = getAuthority(nama);
        int act = getAct(comm);

        // printf("%d %d\n",last_oto,oto);
        if (i == 0 && act == 2) {
            printf("Oceanid Minion marah karena belum diperintah apa-apa, tetapi sudah disuruh istirahat!\n");
            break;
        } 

         if ( oto >= last_oto && last_act != act)  {
            printf("Oceanid Minion %s sesuai keinginan %s.\n",comm,nama);
            last_oto = oto;
            last_oto_comm = oto;
            last_act = act;
            strcpy(last_oto_c,nama);
            strcpy(last_oto_comm_c,nama);
            strcpy(last_act_c,comm);
        } else if ( oto >= last_oto && last_act == act) {
            printf("Oceanid Minion sudah diperintah %s oleh %s.\n",comm,last_oto_comm_c);
            last_oto = oto;
            last_act = act;
            strcpy(last_oto_c,nama);
            strcpy(last_act_c,comm);
            
        } else if ( oto < last_oto ) {
            printf("Oceanid Minion tidak nurut karena wewenang %s lebih rendah dari %s.\n",nama,last_oto_c);
        } 
        
        

    }
    


    





}




// int a() {
//     if(i == 0) {
//             if(strcmp(input[i].perintah, "istirahat") == 0) {
//                 printf("Oceanid Minion marah karena belum diperintah apa-apa, tetapi sudah disuruh istirahat!\n");
//                 break;
//             } else {
//                 printf("Oceanid Minion beraksi sesuai keinginan %s.\n", input[i].nama);
//                 marktertinggi = fmax(input[i].otoritas, marktertinggi);
//                 markterakhir = input[i].otoritas;
//                 sedangBekerja = 1;
//             }
//         } else if(i > 0) {
//             marktertinggi = fmax(input[i].otoritas, marktertinggi);
//             if(input[i].otoritas < marktertinggi) {
//                 printf("Oceanid Minion tidak nurut karena wewenang %s lebih rendah dari %s.\n", input[i].nama, defaultch[marktertinggi]);
//             } else if(sedangBekerja && strcmp(input[i].perintah, "beraksi") == 0) {
//                 printf("Oceanid Minion sudah diperintah beraksi oleh %s.\n", defaultch[markterakhir]);
//             } else if(!sedangBekerja && strcmp(input[i].perintah, "istirahat") == 0) {
//                 printf("Oceanid Minion sudah diperintah istirahat oleh %s.\n", defaultch[markterakhir]);
//             } else if(!sedangBekerja && strcmp(input[i].perintah, "beraksi") == 0) {
//                 printf("Oceanid Minion beraksi sesuai keinginan %s.\n", input[i].nama);
//                 sedangBekerja = 1;
//                 markterakhir = input[i].otoritas;
//             } else if(sedangBekerja && strcmp(input[i].perintah, "istirahat") == 0) {
//                 printf("Oceanid Minion istirahat sesuai keinginan %s.\n", input[i].nama);
//                 sedangBekerja = 0;
//                 markterakhir = input[i].otoritas;
//             }
// }