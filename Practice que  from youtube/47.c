#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];

};

void printinfo(struct student s1);

int main(){
    struct student s1={50,5,"xyz"};
    printinfo(s1);

    return 0;
}

// call by value

void printinfo(struct student s1){
    printf("student information\n");
    printf("student name: %s\n",s1.name);
    printf("roll no: %d\n",s1.roll);
    printf("cgpa: %f\n",s1.cgpa);
}



