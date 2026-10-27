#include <stdio.h>
int main(){
    int iUser, iDec, iOct,x,y;
    printf("Enter a decimal number: ");
    scanf("%d", &iUser);
    //Octal conversion
    iOct = 0;
    x = 1;  
    for (iDec = iUser; iDec > 0; iDec /= 8) {
        y = iDec % 8;
        iOct += y * x;
        x *= 10;
    }
    printf("Octal equivalent: %d\n", iOct);
    return 0;
}