#include<stdio.h>

float percent(float a ,float b,float c);

int main(){

    float a,b,c;
    printf("enter marks in 1st subject:");
    scanf("%f",&a);
    printf("enter marks in 2nd subject:");
    scanf("%f",&b);
    printf("enter marks in 3rd subject:");
    scanf("%f",&c);
    
    printf("percent is %f",percent(a,b,c));

    return 0;
}

float percent(float a ,float b,float c){
    return ((a+b+c)/300)*100;
}
