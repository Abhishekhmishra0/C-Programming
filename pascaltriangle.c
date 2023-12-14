#include<stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a; i++){
        fact = fact*i;
    }
    return fact;
}
int combination(int n , int r){
    int ncr;
    ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
int n;
int r;
int ncr;
printf("Enter n ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    for(int j=0;j<=i; j++){
        printf(" %d ",combination(i,j));
    }
    printf("\n");
}
    
    return 0;
}