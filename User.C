#include <stdio.h>
void ShowMenu(void){
printf("\n 1 Enter New Integer Value");
    printf("\n 2 Print Pointer Address");
    printf("\n 3 Print Integer Address");
    printf("\n 4 Print Integer Value");
    printf("\n 5 Exit");
    printf("\n 6 Show Menu");
}
int main(){
    int *iPtr;
    int iUser, iChoice;
    iPtr = &iUser;
    ShowMenu();
    while(iChoice !=5){
        printf("\nEnter your selection: ");
        scanf("%d", &iChoice);
        switch (iChoice){
            case 1:
            printf("Enter an integer value: ");
            scanf("%d", iPtr);
            break;
            case 2:
            printf("The address of the pointer is: %p\n", &iPtr);
            break;
            case 3:
            printf("The address of the integer is: %p\n", iPtr);
            break;
            case 4:
            printf("The value of the integer is: %d\n", *iPtr);
            break;
            case 6:
            ShowMenu();
        }
    }
    return 0;
}