// loop que no 22

#include<stdio.h>
void main()
{
    int i,a,n,count=0;
    printf("enter a number:");
    scanf("%d",&n);

    for(i=n;i>0;i--)
      { 
        a=n%10;
        n=n/10;
        count=count+1;
      }  
    printf("no of digits %d",count);
}