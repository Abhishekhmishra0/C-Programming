#include<stdio.h>
int main(){
    int n,digit , oddsum=0, evensum=0, position =1;
    printf("Enter number ");
    scanf("%d",&n);
    while(n>0){
        digit = n%10;
        if(position%2==0){
            evensum = evensum + digit;
        }
        else {
            oddsum = oddsum + digit;

        }
        n = n/10;
        position++;
    } 
    if(evensum == oddsum) printf("Yes the sum of odd digits and even digits are equal");
    else printf("Yes the sum of odd digits and even digits are not equal");
    return 0;
}