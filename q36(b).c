#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=2;j++)
        {
            printf("%d ",i);
            printf("%d\n",6-i);
        }
    }
    return 0;
}
