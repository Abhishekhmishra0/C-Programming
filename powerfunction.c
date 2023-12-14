#include<stdio.h>
int powe(int a, int b){
    if(b%2==0){
    if(b==1) return a;
    int x= powe(a,b/2);
    return x*x;
    }
    if(b%2!=0){
    if(b==1) return a;
    int x= powe(a,b/2);
    return a* x*x;
    }

}
int main(){
    int a,b;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    int c = powe(a,b);
    printf("%d",c);
    return 0;
}