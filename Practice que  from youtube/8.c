#include<stdio.h>

float CtF(float c);

int main(){
    float c;
    printf("enter temperature in celsius:");
    scanf("%f",&c);

    printf("fahrenheit is : %f",CtF(c));

    return 0;
}

float CtF(float c){
    return (c*1.8)+32;
}
