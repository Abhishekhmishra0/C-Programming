#include<stdio.h>
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int ml=n/2+1;
    int nsp= ml-1;
    int nst =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp;j++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}