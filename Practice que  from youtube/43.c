#include<stdio.h>
#include<string.h>


struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student ece[100];
    ece[0].roll=24;
    ece[0].cgpa=10;
    strcpy(ece[0].name,"maeez");

    printf("student name: %s\n",ece[0].name);
    printf("cgpa: %f\n",ece[0].cgpa);
    printf("roll no: %d\n",ece[0].roll);
    return 0;
}
