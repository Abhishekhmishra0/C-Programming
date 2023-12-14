#include<stdio.h>
int main(){
    int arr[3];
    for(int i=0; i<3;i++){
        printf("enter %d element ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++){
        if(arr[i]>5) printf("%d",arr[i]);
    }
    return 0;
}