#include<stdio.h>

int main(){

    float price[3];

    printf("enter price of 1st items:");
    scanf("%f",&price[0]);
    printf("enter price of 2nd items:");
    scanf("%f",&price[1]);
    printf("enter price of 3rd items:");
    scanf("%f",&price[2]);
    
    printf("price of 1st item after gst is %f\n",price[0]+(0.18*price[0]));
    printf("price of 2nd item after gst is %f\n",price[1]+(0.18*price[1]));
    printf("price of 3rd item after gst is %f\n",price[2]+(0.18*price[2]));

    return 0;

}