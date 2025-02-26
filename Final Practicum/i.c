// #include <stdio.h>


// // int cari(int n,int m,int map[n][m],int c,int r){
// //     printf("%d %d\n",c,r);
// //     if (map[c][r] == 1) {
// //         totaljalan+=1;

// //     } else if (map[c][r] %2 == 0 && map[c][r] != 0) {

// //     } else if (c >= n || r >= m) {

// //     } else {
// //         cari(n,m,map,c,r+1);
// //         cari(n,m,map,c,r-1);
// //         cari(n,m,map,c+1,r);
// //         cari(n,m,map,c-1,r);



// //     }

// // }

// int totaljalan = 0;

// int cari(int n,int m,int map[n][m],int vis[n][m],int c,int r,int lc,int lr){
//     // printf("%d %d %d\n",map[c][r],c,r);
//     vis[c][r] = 1;

//     if (map[c][r] == 1) {
//         vis[c][r]=0;
//         totaljalan+=1;
//         return 0;

//     }

//     if (c < 0 || c >= n ||  r >= m || r < 0) {
//         return 0;
//     }

//     if (map[c][r+1] % 2 != 0 && !vis[c][r+1]) {
//         cari(n,m,map,vis,c,r+1,c,r);

//     }  
//     if (map[c][r-1] % 2 != 0 && !vis[c][r-1]) {
//         cari(n,m,map,vis,c,r-1,c,r);

//     }  
//     if (map[c+1][r] % 2 != 0 && !vis[c+1][r]) {
//         cari(n,m,map,vis,c+1,r,c,r);

//     }  
//     if (map[c-1][r] % 2 != 0 && !vis[c-1][r]) {

//         cari(n,m,map,vis,c-1,r,c,r);
//     }

//     // if (map[c][r+1] % 2 != 0 && r+1 !=lr) {
//     //     cari(n,m,map,c,r+1,c,r);

//     // }  
//     // if (map[c][r-1] % 2 != 0 && r+1 !=lr) {
//     //     cari(n,m,map,c,r-1,c,r);

//     // }  
//     // if (map[c+1][r] % 2 != 0 && c+1 !=lc) {
//     //     cari(n,m,map,c+1,r,c,r);

//     // }  
//     // if (map[c-1][r] % 2 != 0 && c-1 !=lc) {

//     //     cari(n,m,map,c-1,r,c,r);
//     // }
// }

// int main() {

//     // int arr[2][3] = {
//     //     {0,3,5},
//     //     {7,9,1}
//     // };

//     int n,m;

//     scanf("%d %d",&n,&m);

//     int arr[n][m];
//     int vis[n][m];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d",&arr[i][j]);
//             vis[i][j] = 0; 
//         }
        
//     }


//     cari(2,3,arr,vis,0,0,0,0);

//     // totaljalan = totaljalan - totaljalan;

//     if (totaljalan > 0) {

//         printf("Terdapat %d jalan untuk kucing oren pulang",totaljalan);
//     } else {
//         printf("Kucing oren tidak bisa pulang ke rumah :(");
//     }

//
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------





#include <stdio.h>


// int cari(int n,int m,int map[n][m],int c,int r){
//     printf("%d %d\n",c,r);
//     if (map[c][r] == 1) {
//         totaljalan+=1;

//     } else if (map[c][r] %2 == 0 && map[c][r] != 0) {

//     } else if (c >= n || r >= m) {

//     } else {
//         cari(n,m,map,c,r+1);
//         cari(n,m,map,c,r-1);
//         cari(n,m,map,c+1,r);
//         cari(n,m,map,c-1,r);



//     }

// }

int totaljalan = 0;

// int cari2(int n,int m,int map[n][m],int vis[n][m],int c,int r,int lc,int lr){
//     // printf("%d %d %d\n",map[c][r],c,r);
//     vis[c][r] = 1;
//     printf("%d",map[c][r]);
//     if (map[c][r] == 1) {
//         vis[c][r]=0;
//         totaljalan+=1;
//         return 0;

//     }

//     if (c < 0 || c >= n ||  r >= m || r < 0) {
//         return 0;
//     }

//     if (map[c][r+1] % 2 != 0 && !vis[c][r+1]) {
//         cari(n,m,map,vis,c,r+1,c,r);

//     }  
//     if (map[c][r-1] % 2 != 0 && !vis[c][r-1]) {
//         cari(n,m,map,vis,c,r-1,c,r);

//     }  
//     if (map[c+1][r] % 2 != 0 && !vis[c+1][r]) {
//         cari(n,m,map,vis,c+1,r,c,r);

//     }  
//     if (map[c-1][r] % 2 != 0 && !vis[c-1][r]) {

//         cari(n,m,map,vis,c-1,r,c,r);
//     }

//     vis[c][r] = 0;


//     // if (map[c][r+1] % 2 != 0 && r+1 !=lr) {
//     //     cari(n,m,map,c,r+1,c,r);

//     // }  
//     // if (map[c][r-1] % 2 != 0 && r+1 !=lr) {
//     //     cari(n,m,map,c,r-1,c,r);

//     // }  
//     // if (map[c+1][r] % 2 != 0 && c+1 !=lc) {
//     //     cari(n,m,map,c+1,r,c,r);

//     // }  
//     // if (map[c-1][r] % 2 != 0 && c-1 !=lc) {

//     //     cari(n,m,map,c-1,r,c,r);
//     // }
// }


int cari(int n, int m, int map[n][m],int vis[n][m],int r,int c) {

    // if (r < 0 || r > n ||  c > m || c < 0) {
    //     return 0;
    // }

    if (r < 0 || r >= n) return 0;
    if (c < 0 || c >= m) return 0;



    if (vis[r][c] == 1) {
        return 0;
    }

    vis[r][c] = 1;

    if (map[r][c] % 2 == 0 && !(r == 0 && c == 0)) {
        vis[r][c] = 0;
        return 0;
    }

    if (map[r][c] == 1) {
        totaljalan+=1;
        vis[r][c] = 0;
        return 0;    
    }

    // printf("%d %d | %d\n",r,c,map[r][c]);

    cari(n,m,map,vis,r+1,c);
    cari(n,m,map,vis,r-1,c);
    cari(n,m,map,vis,r,c+1);
    cari(n,m,map,vis,r,c-1);


    vis[r][c] = 0;

}
int main() {

    // int arr[2][3] = {
    //     {0,3,5},
    //     {7,9,1}
    // };

    int n,m;

    scanf("%d %d",&n,&m);

    int arr[n][m];
    int vis[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d",&arr[i][j]);
            vis[i][j] = 0; 
        }
        
    }


    // cari(2,3,arr,vis,0,0,0,0);
    cari(n,m,arr,vis,0,0);


    // totaljalan = totaljalan - totaljalan;

    if (totaljalan > 0) {

        printf("Terdapat %d jalan untuk kucing oren pulang",totaljalan);
    } else {
        printf("Kucing oren tidak bisa pulang ke rumah :(");
    }

}