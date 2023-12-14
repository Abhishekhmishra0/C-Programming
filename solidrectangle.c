#include<stdio.h>
int main(){
    int n;
    int m;
    printf("enter no of columns ");
    scanf("%d",&n);
    printf("enter no of rows ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
    for(int i=1;i<=n;i++){
        printf(" * ");
    }
    printf("\n");
    }
    return 0;
}