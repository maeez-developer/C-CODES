#include<stdio.h>
#include<math.h>

float circle(float r);
int rectangle(int l,int b);

int main(){
    
    int n,l,b;
    float r;

    printf("enter side of square");
    scanf("%d",&n);
    printf("enter radius of circle");
    scanf("%f",&r);
    printf("enter lentgh of rectangle");
    scanf("%d",&l);
    printf("enter breadth of rectangle");
    scanf("%d",&b);

    printf("area of square is %f \n",pow(n,2));
    printf("area of circle is %f \n",circle(r));
    printf("area of rectangle is %d ",rectangle(l,b));

    return 0;

}
float circle(float r){
    return 3.14*r*r;
}
int rectangle(int l,int b){
    return l*b;
}
