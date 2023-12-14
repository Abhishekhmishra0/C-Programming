#include<stdio.h>
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int nst;
    int nsp;
    for(int i=1;i<=2*n+1;i++){
        printf("*");

    }
    printf("\n");
    for(int i=1; i<=n; i++){
    
        for(int k=1; k<=n-i+1;k++){
            printf("*");
        }
        
        for(int j=1;j<=2*i-1;j++){
            printf(" ");
        }
        for(int k=1; k<=n-i+1;k++){
            printf("*");
        }
        
        printf("\n");
        
        
    }

    return 0;
}