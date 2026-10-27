#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void encrypt(char [], int);
void decrypt(char [], int);
void showMenu(void){
    printf("\n 1 Encrypt");
    printf("\n 2 Decrypt");
    printf("\n 3 Generate New key");
    printf("\n 4 Exit");
    printf("\n 5 Show Menu");
}
int main(){
    char str[100]={0};
    int iChoice=0;
    srand(time(NULL));
  
    int iRand = (rand()%4)+1;
   
    showMenu();
    while(iChoice!=4){
    printf("\n Enter your choice: ");
    scanf(" %d", &iChoice);
    
        switch(iChoice){
            case 1:
            printf("\n Enter the string to encrypt: ");
            scanf("%s", str);
            encrypt(str, iRand);
            break;
            case 2:
            printf("\n Enter the string to decrypt: ");
            scanf("%s", str);
            decrypt(str, iRand);
            break;
            case 3:
            iRand = (rand()%4)+1;
            printf("\n New key generated");
            break;
            case 5:
            showMenu();
            break;

        }
    }
    return 0;
}
void encrypt(char sNote[], int random){
    int x=0;
    while(sNote[x]){
        sNote[x]+= random;
        x++;
    }
    x=0;
        while(sNote[x]!=0){
            x++;
        
    }
            printf("\n The Decrypted string is:%s", sNote);
}
void decrypt(char sNote[], int random){
    int x=0;
    while(sNote[x]){
        sNote[x]-= random;
        x++;
    }
    x = 0;
    
        while(sNote[x]!=0){
            
            x++;
        }
        printf("\n The Decrypted string is:%s", sNote);
    }
