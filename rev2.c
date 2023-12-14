#include<stdio.h>
int main(){
    int n=123;
    int rem;
    int rev =0;
    int i;
    while(i!=0){
        rem = n%10;
        rev = 10*rev + rem;
        n = n/10;
    }
    printf("%d",rev);
return 0;
}