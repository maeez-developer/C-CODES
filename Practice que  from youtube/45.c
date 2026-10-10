#include<stdio.h>
 
struct student{
    int roll;
    float cgpa;
    char name[100];

};

int main(){
    struct student s1={24,10,"maeez"};

    struct student *ptr=&s1;
    printf("roll: %d",(*ptr).roll);
    
    return 0;
}


