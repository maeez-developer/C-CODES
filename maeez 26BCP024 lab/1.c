#include<stdio.h>

int len(char arr[]);

int main(){
    char name[50];
    scanf("%s",name);

    printf("length of string is : %d",len(name));

    return 0;
}
int len(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count+=1;
    }
    return count;
}
