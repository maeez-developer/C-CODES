#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("enter a number:");
    scanf("%d",&n);
    a=n*n;
    c=n;
    for(;c>0;c=c/10)
    {
        b=a%10;
        if (b!=c%10)
        {
            printf("%d is not automorphic no",n);
            return 0;
        }
        a=a/10;
    }
    printf("%d is automorphic no",n);
    return 0;
}
