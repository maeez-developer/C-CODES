#include <stdio.h>

void main()
{
    int h, b;
    float a;

    printf("enter height of triangle: \n");
    scanf("%d", &h);

    printf("enter base of triangle: \n");
    scanf("%d", &b);

    a = (1/2)*b*h;
    printf("area of triangle is: %f \n", a);

}