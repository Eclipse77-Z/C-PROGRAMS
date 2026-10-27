  #include <stdio.h>
int main(){
int *iPtr;
char *cPtr;
float *fFloat;
int iNumber=10;
float fNumber=3.12;
char cCharacter='A';
iPtr = &iNumber;
cPtr = &cCharacter;
fFloat = &fNumber;
printf("The address of iNumber is %p\n", iPtr);
printf("The address of cCharacter is %p\n", cPtr);
printf("The address of fNumber is %p\n", fFloat);
printf("The address of iPtr is %p\n", iPtr);
printf("The address of cPtr is %p\n", cPtr);
printf("The address of fFloat is %p\n", fFloat);
printf("The value of iNumber is %d\n", *iPtr);
printf("The value of cCharacter is %c\n", *cPtr);
printf("The value of fNumber is %f\n", *fFloat);
printf("The value of iPtr is %d\n", *iPtr);
printf("The value of cPtr is %c\n", *cPtr);
printf("The value of fFloat is %f\n", *fFloat);
} 