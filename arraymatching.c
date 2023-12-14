#include<stdio.h>
int main(){

int arr[10]={1,2,3,4,5,6,7,8,9,10};
int arr1[12]={1,2,3,4,5,6,7,8,12,10,11,15};
int a=0;
for(int i=0;i<=11;i++){
    if(arr[i]==arr1[i]) a=a+1;


}
printf("%d",a);
return 0;
}