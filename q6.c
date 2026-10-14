#include<stdio.h>
void main()
{
    float g,n,a,d;
    printf("enter gross salary: \n");
    scanf("%f",&g);
    a=0.1*g;
    printf("allowance: %f \n",a);
    d=0.03*g;
    printf("deduction: %f \n",d);
    n=g+a-d;
    printf("net salary is: %f \n",n);

}