#include <stdio.h>
#include <string.h>
int main(){
    char cVal[]={"“When the going gets tough, the tough stay put!"};
    char *First = "going";
    char *Second = "tou";
    char *Third = "ay put";
    if (strstr(cVal, First)!= NULL){
        printf("\nThe string \"%s\" was found", First);
    }
    if (strstr(cVal, Second)!= NULL){
        printf("\nThe string \"%s\" was found", Second);
    }
    if (strstr(cVal, Third)!= NULL){
        printf("\nThe string \"%s\" was found", Third);
    }
    return 0;
}