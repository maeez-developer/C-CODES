#include<stdio.h>
void togglecase(char arr[]);
int main(){
    char string[50];
    scanf("%s",string);
    togglecase(string);

    return 0;
}
void togglecase(char arr[]){

    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]<=91){
                printf("%c",(arr[i]+32));

        }
        else if(arr[i]>=97){
                printf("%c",(arr[i]-32));

        }
    }
}
