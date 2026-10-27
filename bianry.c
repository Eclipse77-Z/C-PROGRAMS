#include <stdio.h>
int main(){
    int iUser, iDec, x,y,z;
    printf("Enter a binary number: ");
    scanf("%d", &iUser);
    iDec = 0;
    x = 1;
    while (iUser > 0) {
        y = iUser % 10;
        iDec = iDec + y * x;
        x = x * 2;
        iUser = iUser / 10;
    }
    printf("Decimal equivalent: %d\n", iDec);
    return 0;
}