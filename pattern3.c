#include<stdio.h>
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int nsp=0;
    for(int j=1; j<=n ; j++){
    for(int i=n+1; i<=0 ; i++){
        printf(" ");
        nsp-=2;
    }
    for(int k=1; k<=2*j-1; k++){
        printf("*");
    }
    printf("\n");

    }


    return 0;
}