#include<stdio.h>
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int i =2;
    while(i<=n-1){
        if(n%i==0){
            printf("NOT a PRIME number");
            
        }
        i++;
        if(i==n){
            printf("%d\n",n); 
        }
    }
    return 0;
}