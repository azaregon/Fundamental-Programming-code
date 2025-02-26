#include <stdio.h>


typedef struct {
    char namaMenu[1000];
    long stock;
    long id;
    long price;
    int is_removed;
} Menu;




int main() {
    long earnings = 0;

    Menu listmn[100000000];
    long menucnt = 0;

    while (1) {
        char comm[100];
        scanf("%s",comm);

        if (strcmp(comm,"ADD") == 0 ) {
            char nama[100000];
            long id;
            long price;
            long stock;

            scanf("%s",nama);
            scanf("%ld",&id);            
            scanf("%ld",&price);
            scanf("%ld",&stock);
            
            if (listmn[id].is_removed == 1 || menucnt < ) {
                listmn[menucnt].id = id;
                strcpy(listmn[menucnt].namaMenu,nama);
                listmn[menucnt].price = price;
                listmn[menucnt].stock = stock;
                menucnt++;
                printf("Menu added");
            } else {
                printf("“Menu is already exists");

            }


        } else if (strcmp(comm,"REMOVE") == 0 ) {
            long id;
            scanf("%ld",&id);

            if (listmn[id].id != -1) {
                listmn[id].id = -1;
                printf("Menu removed\n");

            } else {
                printf("Menu does not exist\n");

            }


        } 
        
        
        
        else if (strcmp(comm,"CLOSE") == 0 ) {
            break;
        }
    }

}