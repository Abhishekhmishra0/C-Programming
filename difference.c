#include<stdio.h>
int main(){
    int arr[5];
  for(int i=0;i<5;i++){
        printf("Enter %d element ",i+1);
        scanf("%d",&arr[i]);
    }
    int a=0,b=0;
     for(int i=0;i<5;i++){
       if(i%2==0) a=a+arr[i];
       else b=b+arr[i];
    }
    if(a>b) printf("%d",a-b);
    else printf("%d",b-a);

    return 0;
}