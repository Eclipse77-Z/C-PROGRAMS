#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("marksheet.txt", "r");
    
    if (fp == NULL){
        printf("Error opening file!");
        return 1;
    }
    char str1[100];
    
   while(1){
    if(fgets(str1, sizeof(str1), fp) != NULL){
         printf("%s", str1);
       
    }
   
   }
   
    fclose(fp);
    return 0;
}