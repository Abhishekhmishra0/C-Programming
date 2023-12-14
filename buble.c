#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}
void decending(int arr[],int n ){
    for(int i=n-1;i>=0;i--){
        printf("%d  ",arr[i]);
    }
}

int main(){
    int arr[7];
    for(int i =0;i<7; i++){
        printf("Enter %dth index element ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    bubblesort(arr,7);
    printarray(arr,7);
    printf("\n");
    decending(arr,7);
    
    
    return 0;
}