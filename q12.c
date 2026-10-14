#include<stdio.h>
int main()
{
float t,avg,a,b,c;

printf("enter marks of 1st subject \n");
scanf("%f",&a);
printf("enter marks of 2nd subject \n");
scanf("%f",&b);
printf("enter marks of 3rd subject \n");
scanf("%f",&c);

t=a+b+c;
avg=(a+b+c)/3;
printf("total is %f \n",t);
printf("average is %f \n",avg);

if (a<35 || b<35 || c<35)
    printf("you are fail");
else if (avg>=70)
    printf("your grade is distinction");
else if (avg>=60)
    printf("your grade is first");
else if (avg>=50)
    printf("your grade is second");
else
    printf("your grade is third class");
    
return 0;
}