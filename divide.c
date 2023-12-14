#include<stdio.h>
int main(){
    int a,b; //a>b
    printf("Enter dividend  ");
    scanf("%d",&a);
    printf("enter divisor ");
    scanf("%d",&b);
    
     int q=a/b;
     int r= a-(b*q);
     printf("Your remainder is %d",r);
    return 0;
}