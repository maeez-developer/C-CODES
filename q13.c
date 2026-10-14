// loop que 21
#include<stdio.h>
void main()
{
   int i,n,a;
   printf("enter a number:");
   scanf("%d",&n);
   
   for(i=n;i>0;i--)
     {
      a=n%10;
      printf("%d",a);
      n=n/10;
     }  
}