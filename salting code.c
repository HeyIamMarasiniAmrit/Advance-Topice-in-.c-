#include <stdio.h>

void printstring(char  arr[]);
int countlength(char arr[]);

void salting(char password[]);

int main(){
    char password[100];
    scanf("%s", password);
    salting(password);


}
void salting(char password[]){
    char salt[] = "123";
    char newpass [200];

    strcpy(newpass, password);//newspass = "test";
    strcat(newpass, salt);
    puts(newpass);
}