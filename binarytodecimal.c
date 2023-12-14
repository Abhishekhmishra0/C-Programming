#include<stdio.h>
#include<math.h>
int main(){
    int n= 1010;
    int sum =0;
    int i=0;
    while(n!=0){
       int r = n%10;
        sum = sum + r* pow(2,i);
        n= n/10;
        i++;
    }
    printf("%d",sum);

    return 0;
}