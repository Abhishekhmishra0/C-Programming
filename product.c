#include<stdio.h>
int main(){
     int arr[4];
     for(int i=0; i<=3;i++){
        scanf("%d",&arr[i]);
     }
     int a=1;
     for(int i=0;i<=3;i++){
        a = a* arr[i];
     }
     printf("%d",a);
    return 0;
}