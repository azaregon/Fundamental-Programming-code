#include <stdio.h>
#include <math.h>



int main() {
    long long ax,ay,az;
    long long bx,by,bz;
    long long cx,cy,cz;
    long long ra,rb,rd;

    scanf("%lld %lld %lld", &ax,&ay,&az);
    scanf("%lld %lld %lld", &bx,&by,&bz);
    scanf("%lld %lld %lld", &cx,&cy,&cz);
    scanf("%lld %lld %lld", &ra,&rb,&rd);

    // scanf("%lf %lf %lf", &ax,&ay,&az);
    // scanf("%lf %lf %lf", &bx,&by,&bz);
    // scanf("%lf %lf %lf", &cx,&cy,&cz);
    // scanf("%lf %lf %lf", &ra,&rb,&rd);





    long long rocketNow = ra;
    // printf("%lf\n",ra);

    long long disac = sqrt((cx-ax)*(cx-ax) + (cy-ay)*(cy-ay) + (cz-az)*(cz-az));

    long long disab =  sqrt((bx-ax)*(bx-ax)+ (by-ay)*(by-ay) + (bx-az)*(bz-az));

    long long disbc = sqrt( (cx-bx)*(cx-bx) + (cy-by)*(cy-by) + (cz-bz)*(cz-bz) );
    // printf("%f | ",rocketNow*rd);

    // printf("%f \n",disac);


    if (disac <= rd*ra) {
        printf("NAH ID WIN, NO NEED TO STOP");
        return 0;
    } 
    if (disab + disbc < (ra*rd)+(rb*rd)) {
            printf("HHM BETTER TAKE ROCKET, STILL CAN WIN");
            return 0;
        } else {
            printf("GIVE UP ALREADY, MINING BETTER");
            return 0;
        }




    // printf("%f \n\n",disab);


    if (disab < rd*rocketNow) {
        // printf("\n\n\n");
        // rocketNow += rb;
        // double usedab = ceil(disab/rd);
        // rocketNow = rocketNow - usedab;
        // long long disbc = sqrt((bx-cx)*(bx-cx) + (by-cy)*(by-cy) + (bz-cz)*(bz-cz));


        // printf("%f %f ",usedab,rocketNow);
        // printf("%f | \n",rocketNow*rd);
        // printf("%f \n\n",disbc);



        if (disab + disbc < (ra*rd)+(rb*rd)) {
            printf("HHM BETTER TAKE ROCKET, STILL CAN WIN");
            return 0;
        } else {
            printf("GIVE UP ALREADY, MINING BETTER");
            return 0;
        }


    }  
    else printf("GIVE UP ALREADY, MINING BETTER");


}


// int main() {
//     long long ax,ay,az, bx,by,bz, cx,cy,cz, ra,rb,rd;

//     scanf("%lld %lld %lld", &ax,&ay,&az);
//     scanf("%lld %lld %lld", &bx,&by,&bz);
//     scanf("%lld %lld %lld", &cx,&cy,&cz);
//     scanf("%lld %lld %lld", &ra,&rb,&rd);



//     float rocketNow = ra;
//     // from a to c
//     long long disac = sqrt((cx-ax)*(cx-ax) + (cy-ay)*(cy-ay) + (cz-az)*(cz-az));
//     long long disab = sqrt((bx-ax)*(bx-ax) + (by-ay)*(by-ay) + (bz-az)*(bz-az));
//     long long disbc = sqrt((cx-bx)*(cx-bx) + (cy-by)*(cy-by) + (cz-bz)*(cz-bz));




//     if (disac <= ra*rd) {
//         printf("NAH ID WIN, NO NEED TO STOP");
//     } else if (disab <= ra*rd) {
//         rocketNow = ra + (rb - ceil((disab/rd)));
//         if (disbc <= rd*rocketNow) {
//             printf("HHM BETTER TAKE ROCKET, STILL CAN WIN");
//             return 0;
//         } else {
//             printf("GIVE UP ALREADY, MINING BETTER");
//             return 0;
//         }


//     }  else printf("GIVE UP ALREADY, MINING BETTER");


// }