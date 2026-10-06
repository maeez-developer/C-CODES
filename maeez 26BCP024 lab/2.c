#include<stdio.h>

void lwrcase(char arr[]);

int main(){
    char name[50];
    scanf("%s",name);
    lwrcase(name);

    return 0;
}
void lwrcase(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("corresponding lwrcase of %c is %c \n",arr[i],(arr[i]+32));

    }

}

