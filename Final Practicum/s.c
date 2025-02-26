#include <stdio.h>
#include <math.h>



// int main() {


//     double categ[5] = {0.65,0.55,0.50,0.45,0.60};
//     double del[4] = {1,0.75,0.50,0};

//     int max = 300000;
//     int stddel = 50000;

//     int cat,total;
//     int delind = 0;

//     scanf("%d %d", &cat,&total);






//     int newtotal = total * categ[cat-1];

//     if (newtotal >= 250000) delind = 3;
//     else if (newtotal >= 150000 ) delind = 2;
//     else if (newtotal >= 50000 ) delind = 1; 

//     newtotal = newtotal + del[delind]*stddel;


//     int sisa = max-newtotal;


//     if (newtotal > max) {
//         printf("Mamaa minta uang, uangku kurang %d :((\nTotalnya tadi %d",newtotal-max,newtotal);
//     } else if (max > newtotal){

//         printf("WOHHHH uangku sisa %d\nMamaa Surip bisa kasi THR ke adek adek, tadi totalnya %d", max-newtotal,newtotal);
//     } else if (max == newtotal) {
//         printf("Yeyyy totalnya pas %d\nMamaa, Surip udah gede ga jadi minta uang :)",newtotal);
//     }


    


// }




int main() {
    


    int cat;
    double total;
    scanf("%d %lf", &cat,&total);

    int hasil = 0;
    double ongkir = 50000;



    double totalbaru;
    double ongkirbaru;

    // if (cat == 1) {
    //     hasil = ceil(0.65*(double)total);
    // } else if (cat == 2) {
    //     hasil = ceil(0.55*(double)total);   
    // } else if (cat == 3) {
    //     hasil = ceil(0.50*(double)total);    
    // } else if (cat == 4) {
    //     hasil = ceil(0.45*(double)total);    
    // } else if (cat == 5) {
    //     hasil = ceil(0.60*(double)total);   
    // }

    if (cat == 1) {
        totalbaru = total-(total*0.35);
    } else if (cat == 2) {
        totalbaru = total-(total*0.45);   
    } else if (cat == 3) {
        totalbaru = total-(total*0.5);    
    } else if (cat == 4) {
        totalbaru = total-(total*0.55);    
    } else if (cat == 5) {
        totalbaru = total-(total*0.40);   
    }

    totalbaru = ceil(totalbaru);





    if (totalbaru >= 250000) ongkirbaru = ongkir-(ongkir*1);
    // else if (hasil >= 200000) hasil +=
    else if (totalbaru >= 150000) ongkirbaru = ongkir-(ongkir*0.5);
    else if (totalbaru >= 50000) ongkirbaru = ongkir-(ongkir*0.25);
    else ongkirbaru = ongkir-(ongkir*0);

    hasil = totalbaru + ongkirbaru;

    if (hasil > 300000) {
        printf("Mamaa minta uang, uangku kurang %d :((\nTotalnya tadi %d",hasil-300000,hasil);
    } else if (hasil < 300000){
        printf("WOHHHH uangku sisa %d\nMamaa Surip bisa kasi THR ke adek adek, tadi totalnya %d", 300000-hasil,hasil);
    } else if (hasil == 300000) {
        printf("Yeyyy totalnya pas %d\nMamaa, Surip udah gede ga jadi minta uang :)",hasil);
    } 
    
}