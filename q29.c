#include<stdio.h>
int main()
{
    int n,i,a=0,b;
    printf("enter a number:");
    scanf("%d",&n);
    b=n;
    for(i=2;i<n;i++)
    {
        if (n%i==0)
            a+=1;
        else
            continue;
    }
    if (a==0)
        printf("%d is a prime number",b);
    else
        printf("%d is not a prime number",b);
    return 0;
}
