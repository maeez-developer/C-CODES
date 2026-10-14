
#include<stdio.h>
void main()
{
    int p,r,n,i;
    printf("enter principal amount:  \n");
    scanf("%d",&p);

    printf("enter rate of interest:  \n");
    scanf("%d",&r);

    printf("enter no. of years:  \n");
    scanf("%d",&n);

    i=(p*r*n)/100;
    printf("simple interest is: %d",i);

}
