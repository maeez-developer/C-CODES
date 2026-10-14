#include<stdio.h>
int main()
{
    int i,n,a=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        a=a*i;
    }
    printf("factorial of %d is %d",n,a);
    return 0;
}
