#include<stdio.h>

void Table(int n);

int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);

    Table(n);   // argument/actual parameter

    return 0;   
}
void Table(int n){   // parameter/formal parameter
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }

}
