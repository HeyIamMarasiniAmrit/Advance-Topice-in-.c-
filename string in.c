#include <stdio.h>
 void printstring (char [] );

 int main(){

    char firstName[] = "amrit";
    char lastNmae[] = "marasini";

    return 0;
 }
 void printstring(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){

        printf("%c", arr[i]);

    }
    printf("\n");
 }