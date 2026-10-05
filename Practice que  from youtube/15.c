#include<stdio.h>
void fun(int a,int b,int* sum,int* product,int* average);


int main(){
    int x=5,y=3;
    int sum,product,average;
    fun(x,y,&sum,&product,&average);
    printf("sum = %d product = %d average = %d",sum,product,average);
    
    return 0;

}
void fun(int a,int b,int* sum,int* product,int* average){
    *sum=a+b;
    *product=a*b;
    *average=(a+b)/2;
}
