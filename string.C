#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char *Name;
    printf("type your first name: ");
    scanf("%s", Name);
    printf("\nYour name is: %s", Name);
    printf("\n Your name has %d letters", strlen(Name));
    printf("\n your name is :" );
    for(int x =0; x <=strlen(Name); x++){
        Name[x]=toupper(Name[x]);
    }
    printf("%s", Name);
    return 0;
}