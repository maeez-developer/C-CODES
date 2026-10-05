#include<stdio.h>
int main(){
    // 2 student storing marks of their three subjects (2*3)
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=80;
    marks[0][2]=95;

    marks[1][0]=90;
    marks[1][1]=90;
    marks[1][2]=90;

    printf("%d",marks[0][0]);

    return 0;

}