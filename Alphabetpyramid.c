#include<stdio.h>
int main(){
int n;
printf("Enter n ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
     int a=65;
     for(int k=1; k<=n-i; k++ ){
        printf(" ");
     }
    for(int j=1; j<=2*i-1; j++){
        char ch =(char)a;
        printf("%c",ch);
        a=a+1;

    }
    printf("\n");
}
return 0;
}