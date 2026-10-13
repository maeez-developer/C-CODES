#include<stdio.h>

typedef struct address{
    int houseno;
    int block;
    char city[100];
    char state[50];

} add;

void printaddress(add adds);


int main(){
    add adds[5];
    printf("enter info for 1st person:");
    scanf("%d",&adds[0].houseno);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);

    printf("enter info for 2nd person:");
    scanf("%d",&adds[1].houseno);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

    printf("enter info for 3rd person:");
    scanf("%d",&adds[2].houseno);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);

    printf("enter info for 4th person:");
    scanf("%d",&adds[3].houseno);
    scanf("%d",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);

    printf("enter info for 5th person:");
    scanf("%d",&adds[4].houseno);
    scanf("%d",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);

    printaddress(adds[0]);
    printaddress(adds[1]);
    printaddress(adds[2]);
    printaddress(adds[3]);
    printaddress(adds[4]);

    return 0;
}
void printaddress(add adds){
    printf("address is: %d %d %s %s\n",adds.houseno,adds.block,adds.city,adds.state);
}

