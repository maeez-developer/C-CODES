#include<stdio.h>
int main()
{
    int n,a,i,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n/2;i++)
    {
        if (n%i==0)
            sum=sum+i;
        else
            continue;
    }
    if (sum==a)
        printf("%d is perfect no",a);
    else
        printf("%d is not perfect no",a);
    return 0;
}

