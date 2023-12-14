#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(int i=0;i<=4;i++){
        a = a + arr[i];
    }
    printf("%d",a);
return 0;
}