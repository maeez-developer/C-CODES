#include<stdio.h>

typedef struct Bankaccount{
    int accountno;
    char name[100];
} acc;

int main(){
    acc acc1={123,"maeez"};
    acc acc2={124,"mariya"};

    printf("acc no=%d\n",acc1.accountno);
    printf("name=%s\n",acc1.name);

    return 0;
}