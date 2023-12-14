#include<stdio.h>
int main(){
    int arr[5];
    int arr2[5];
    int a=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0,j=4;j>i;i++,j--){
        if(arr[i]==arr[j]) a+=1;
    }
    if(a==2) printf("Its a palindrome ");
    else printf("its not a palindrome ");

    return 0;
}