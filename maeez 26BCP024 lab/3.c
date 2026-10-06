#include<stdio.h>

void uppercase(char arr[]);

int main(){
    char name[50];
    scanf("%s",name);
    uppercase(name);

    return 0;
}
void uppercase(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("corresponding uppercase of %c is %c \n",arr[i],(arr[i]-32));

    }

}

