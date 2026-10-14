#include<stdio.h>
void main()
{
    float n,g,h;
    printf("enter gross sales: \n");
    scanf("%f",&g);
    h=0.1*g;
    n=g-h;
    printf("net sales: %f \n",n);
}