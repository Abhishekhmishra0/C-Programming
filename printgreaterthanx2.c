#include<stdio.h>
int array(int arr []){
    arr[1]=10;
    return arr[1];
}
int main(){
    int arr[3]={1,5,8};
    array(arr);
    printf("%d",arr[1]);
    return 0;
}