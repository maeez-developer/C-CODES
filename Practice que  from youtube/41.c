#include<stdio.h>
#include<string.h>


//  structure is a user defined datatype 

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    strcpy(s1.name,"maeez");
    s1.roll=24;
    s1.cgpa=10;

    printf("student name: %s\n",s1.name);
    printf("roll no: %d \n",s1.roll); 
    printf("cpga: %f \n",s1.cgpa);

    return 0;
}
