#include<stdio.h>
int main()
{
    int n,a,b,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    b=n;
    for(;n>0;n=n/10)
    {
        a=n%10;
        sum=sum+(a*a*a);
    }
    if (sum==b)
       printf("%d is armstrong number",b);
    else
       printf("%d is not armstrong number",b);
    return 0;
}
