#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isStrong=true;

// MULAI NGODING DARI SINI
// YOUR CODE STARTS HERE

bool cN =false;
bool cU = false;
bool kk = false;



bool checkTrhree() {
    if (cN && cU && kk) {
        isStrong =  true;
    } else {isStrong =  false;}
}

bool CheckNumber(char pwd[]) {
    int itter = 0;
    bool anyNum = false;
    while (pwd[itter] != '\0') {
        // printf("%c\n",pwd[itter]);
        char now = pwd[itter];
        if ((int) now <= 57 && (int) now >= 49 ) {
            anyNum = true;
            break;
        }


        itter +=1;

    } ;

    cN = anyNum;
    checkTrhree();
    return anyNum;
}


bool CheckUppercase(char pwd[]) {
    int itter = 0;
    bool anyUp = false;
    while (pwd[itter] != '\0'){
        // printf("%c\n",(int)pwd[itter]);

        char now = pwd[itter];
        if ((int)now <= 90 && (int)now >=65 ) {
            anyUp = true;
            break;
        }


        itter +=1;


    } ;

    cU = anyUp;
    checkTrhree();

    return anyUp;
}


bool CheckKey(char pwd[],int key) {

    int itter = 0;
    int  totalNum = 0;
    while (pwd[itter] != '\0') {
        

        char now = pwd[itter];
        if ((int)now <= 57 && (int)now >= 49 ) {
            totalNum += (int)now - 48;
            // printf("%d\n",(int)now-48);
        }



        itter +=1;

    } 

    // printf("%d",totalNum);


    if (totalNum == key) {
        kk = true;
        checkTrhree();

        return true;
    } else {
        kk = false;
        checkTrhree();

        return false;
    }



}





// NGODING SAMPE SINI, mengedit kode di bawah adalah tindakan ilegal
// YOUR CODE ENDS HERE, editing codes below is illegal

int main(){
    char password[128];
    int key;
    scanf("%s %d",password, &key);
    if(!CheckNumber(password))printf("Password needs number\n");
    if(!CheckUppercase(password))printf("Password requires at least one uppercase letter\n");
    if(!CheckKey(password, key))printf("Digits in password not equal to key\n");
    if(isStrong)printf("Password is strong, just like you\n");
    else printf("Weak password, fix your mistakes\n");
}
