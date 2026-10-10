#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};


int main(){
    struct student s1={1,10,"maeez"};

    struct student *ptr=&s1;
    printf("roll no: %d\n",ptr->roll);
    printf("student name: %s\n",ptr->name);
    printf("cgpa: %f\n",ptr->cgpa);


    return 0;
}
