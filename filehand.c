#include <stdio.h>
int main(){
FILE *fp;
fp = fopen("marksheet.txt", "w");
if (fp == NULL){
    printf("Error opening file!");
    return 1;
}
char str[50][50]= {"John Doe", "Jane Smith", "Alice Johnson", "Bob Brown", "Charlie Davis"};
char str1[50][50]= {"20", "35", "23", "38", "40"};
for(int i=0; i<5; i++){
    fprintf(fp, "%s:%s\n", str[i], str1[i]);
}
fclose(fp);
return 0;
}
