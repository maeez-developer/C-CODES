#include<stdio.h>
void main()
{
    float t,a,b,c,avg;
    printf("enter marks of 1st subject \n");
    scanf("%f",&a);
    printf("enter marks of 2nd subject \n");
    scanf("%f",&b);
    printf("enter marks of 3rd subject \n");
    scanf("%f",&c);
    avg=(a+b+c)/3.0;
    printf("average marks: %f \n",avg);  
    t=a+b+c;
    printf("total marks: %f \n",t);  
    

}