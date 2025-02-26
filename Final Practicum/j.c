#include <stdio.h>
#include <stdlib.h>


typedef struct {
     long elem;
     int r;
     int c;
} Nd;

int indexoffind = 10000;

void BS(Nd arr[],int size) {
    for (int i = 0; i <size; i++) {
        for (int j = 0; j <size-i-1; j++) {
            if (arr[j].elem < arr[j+1].elem) {
                long svE = arr[j].elem;
                int svR = arr[j].r;
                int svC = arr[j].c;

                arr[j].elem = arr[j+1].elem;
                arr[j].r = arr[j+1].r;
                arr[j].c = arr[j+1].c;

                arr[j+1].elem = svE;
                arr[j+1].r = svR;
                arr[j+1].c = svC;

            }
        }    
    }
}


void BSc(Nd arr[],int bi,int ei,long find) {

    if (bi > ei) {
        return;
    }
    int midpo = bi + abs(ei-bi) / 2;
    // printf("end: %d  / begin: %d /mid %d / val %ld\n",ei,bi,midpo,arr[midpo].elem);
    // return;

    // if (abs(ei-bi) <= 1 && arr[midpo].elem == find) {
    //     indexoffind = midpo;
    //     return;
    // } else if (abs(ei-bi) <= 1 && arr[midpo].elem == find) {
    //     return;
    // }


    if (find == arr[midpo].elem) {
        indexoffind = midpo;
        return;
    } else if ( find < arr[midpo].elem) {
        BSc(arr,midpo+1,ei,find);
    } else if ( find > arr[midpo].elem) {
        BSc(arr,bi,midpo-1,find);
    }
}


int compare(const void* a,const void* b) {
    Nd *A = (Nd *)a;
    Nd *B = (Nd *)b;
    if (A->elem < B->elem) return 1;
    if (A->elem > B->elem) return -1;
    if (A->elem == B->elem) return 0; 
}


int main() {

    int x;
    int y;

    scanf("%d %d",&x,&y);


    int size = x*y;

    Nd arr[(x*y) + 1];


    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            long elem;

            scanf("%ld",&elem);

            arr[i*y+j].elem = elem; 
            arr[i*y+j].r = i+1;
            arr[i*y+j].c = j+1;
            // printf("%ld (%d , %d)", arr[i*x+j].elem,arr[i*x+j].r,arr[i*x+j].c);
        }
        // printf("\n");
    }


    long dicari;
    long mpi;

    scanf("%ld",&dicari);

    Nd theone;

    // while (1) {
    //     if (arr[mpi].elem == dicari) {
    //         break;
    //     }
    // }
    // BS(arr,size);
    qsort(arr,size,sizeof(Nd),compare);
    // for (int i = 0; i < size; i++) {
    //     printf("%d ",arr[i].elem);
    // }
    // printf("\n");
    BSc(arr,0,size-1,dicari);

    // printf("%d %d %d", arr[indexoffind].r,arr[indexoffind].c,indexoffind);
    if (indexoffind != 10000) {
        
        printf("Element %ld found at position: (%d, %d).",arr[indexoffind].elem,arr[indexoffind].r,arr[indexoffind].c);
    } else {
        printf("Element %ld not found.",dicari);

    }


}