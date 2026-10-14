#include<stdio.h>
int main()
{
   int i,j,a=0;
   for(i=1;i<=500;i++)
   {
       a=0;
       for(j=2;j<i;j++)
       {
           if (i%j==0)
               a+=1;
       }
       if (a==0)
           printf("%d  ",i);

   }
   return 0;
}
