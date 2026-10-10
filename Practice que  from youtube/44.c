#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1={24,10,"maeez"};
    printf("name: %s",s1.name);
    return 0;
}