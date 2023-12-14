#include<stdio.h>
int main(){
    // int n;
    // printf("Enter n ");
    // scanf("%d\n",&n);
    int n=5;
    // int m=5;
    printf("%p\n",&n);
   
   int* x=&n;
   printf("%p\n", x);
   printf("%d\n",*x);
   *x = 7;
   printf("%d",n);
    return 0;
}