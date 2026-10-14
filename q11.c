#include<stdio.h>
int main()
{
   
    float g,n,d;
    printf("enter gross sales: \n");
    scanf("%f",&g);

    if (g>20000)
        {
            d=0.15*g;
            n=g-d;
            printf("net sales is %f \n",n);              
        }
    
    else if (g>10000)
        {           
            d=0.1*g;
            n=g-d;
            printf("net sales is %f \n",n);             
        }
    else 
        {         
            d=0.05*g;
            n=g-d;
            printf("net sales is %f \n",n);
        }
         
    return 0;
}