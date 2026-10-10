#include<stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];

} stu ;



int main(){
    stu s1={24,10,"maeez"};
    printf("student name: %s",s1.name);
    
    return 0;
}