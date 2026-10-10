#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    strcpy(s1.name,"maeez");
    s1.roll=24;
    s1.cgpa=10;
    
    printf("student name:%s\n",s1.name);
    printf("roll no.:%d\n",s1.roll);
    printf("cgpa %f\n",s1.cgpa);

    struct student s2;
    strcpy(s2.name,"mariya");
    s2.roll=25;
    s2.cgpa=10;

    printf("student name:%s\n",s2.name);
    printf("roll no.:%d\n",s2.roll);
    printf("cgpa %f\n",s2.cgpa);
    
    struct student s3;
    strcpy(s3.name,"tanveer");
    s3.roll=26;
    s3.cgpa=6;

    printf("student name:%s\n",s3.name);
    printf("roll no.:%d\n",s3.roll);
    printf("cgpa %f\n",s3.cgpa);

    return 0;
}