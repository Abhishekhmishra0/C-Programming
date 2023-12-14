#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter ");
    scanf("%d",&n);
    int temp = n;
    int rem;
    int sum=0;
    int j=0;
    int count =0;
    while(n!=0){
     count++;
       n= n/10;
       j++;
    }
   n= temp;
    int i=0;
    while(n!=0){
        rem = n%10;
        sum = sum + pow(rem,count);
        n = n/10;
        i++;
    }
    if(sum == temp) printf("Armstrong");
    else printf("no armstrong");
    return 0;
}