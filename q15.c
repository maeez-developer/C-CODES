// loop que no 23

#include<stdio.h>
void main()
{
    int a,i,n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);

    for (i=n;i>0;i--)
       {
        a=n%10;
        n=n/10;
        sum+=a;
       }
    printf("sum of digits is %d",sum);
}
