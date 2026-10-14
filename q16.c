// loop que no 24 

#include<stdio.h>
void main()
{
    int a,n,i;
    printf("enter a number:");
    scanf("%d",&n);

    for(i=n;i>0;i--)
      {
        a=n%10;
        printf("%d",a);
        n=n/10;   
      }
}