#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,r1,r2,r,d;
    a=5;b=-3;c=7;
    d = b*b - 4 *a*c;
    if(d>0){
    r1 = (-b + sqrt(d))/2*a;
    r2 = (-b - sqrt(d))/2*a;
    printf("%d %d",r1,r2);
    }
    if(d==0){
        r = -b/(2*a);
        printf("%d",r);
    }
    
    return 0;
}