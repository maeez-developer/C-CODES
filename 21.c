#include<stdio.h>

int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; 

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=arr[j][i];
        }
    }
    printf("%d",arr[0][1]);

    return 0;
}
