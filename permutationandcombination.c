#include<stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
int n;
int r;
int ncr;
printf("Enter n ");
scanf("%d",&n);
printf("Enter r ");
scanf("%d",&r);

 ncr = factorial(n)/(factorial(r)*factorial(n-r));
 printf("%d",ncr);
    
    return 0;
}