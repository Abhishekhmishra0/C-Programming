#include<stdio.h>
int main(){
    int n;
    int nsp;
    printf("Enter n ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("%d",j);
        }
        for(int k=1;k<=2*n-1;k++){
            printf(" ");
        }
        for(int i=n+2;i<=2*n+1;i++){
            printf("%d",i);
        }
    }
    return 0;
}