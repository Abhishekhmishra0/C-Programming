#include<stdio.h>
void printarray(arr[])
int main(){
    int arr[7];
    for(int i=0;i<7;i++){
         printf("enter ith index %d : ",i);
         scanf("%d",&arr[i]);
    }
    printarray(arr,7);
    bubblesort(arr,7);
    printarray(arr,7);

    
    return 0;
}