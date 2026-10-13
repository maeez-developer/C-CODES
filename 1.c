#include<stdio.h>
int main(){
    int arr1[2][2]={{1,2},{3,4}};
    int *ptr1=arr1;
    int arr2[2][2]={{3,4},{5,6}};
    int *ptr2=arr2;
    int arr3[2][2];
    int *ptr3=arr3;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){


            *ptr3=*ptr1+*ptr2;
             ptr1++;
             ptr2++;
             ptr3++;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\n",arr3[i][j]);
        }
    }
    return 0;
}





