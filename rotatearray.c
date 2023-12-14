#include<stdio.h>
void rotate(int arr[],int a, int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
        
    }
    return;
}
int main(){
    int k;
    printf("Enter k ");
    scanf("%d",&k);
   if(k>7) k = k%7;
    int arr[7];
    for(int i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }
    rotate(arr,0,6);
    rotate(arr,0,k-1);
    rotate(arr,k,6);
rotate(arr,0,6);
    for(int i=0; i<=6;i++){
        printf("%d",arr[i]);
    }

    return 0;
}
