#include<stdio.h>
int main(){
    int arr[]={500,200,100,50,20,10,5,2,1};
    int count[9];
    int n;
    scanf("%d",&n);
    for(int i=0;i<9;i++){   
        count[i]=n/arr[i];
        n=n-arr[i]*count[i];    
    }
    for(int i=0;i<9;i++){
        printf("min notes of %d required is %d:\n",arr[i],count[i]);
    }
    return 0;
}


