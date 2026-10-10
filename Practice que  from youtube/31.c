#include<stdio.h>

int main(){
    char *canchange="hello world";
    puts(canchange);
    canchange="hello";
    puts(canchange);

    char cannotchange[]="hello world";
    puts(cannotchange);
   
    return 0;
}
