#include<stdio.h>
int main(){
    int n;
    int m;
    int a;

    printf("enter n ");
    scanf("%d",&n);
    // char ch = (char)a;
    for(int i=1;i<=n;i++){
        a=65;
    for(int j=1;j<=n;j++){
        char ch = (char)a;
        printf(" %c ",ch);
        a=a+1;
    }
    printf("\n");
    }
    return 0;
}