#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
    char password[100];
    scanf("%s",password);
    salting(password);

    return 0;
}

void salting(char password[]){
    char salting[]="123";
    char newpass[200];

    strcpy(newpass,password); // newpass="test"
    strcat(newpass,salting); // newpass="test"+"123"
    puts(newpass);

}

