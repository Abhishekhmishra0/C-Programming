#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[5];
    for(int i=4;i>=0;i--){
        arr2[4-i]=arr[i];
    }
    for(int i=0;i<5;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}