#include<stdio.h>

int len(char arr[]);

int main(){
    char str[100];
    fgets(str,100,stdin);
    printf("length of string is %d",len(str));


    return 0;
}
int len(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}
