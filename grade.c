#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = n/10;
    switch (a){
        case 9: printf("A");
                break;
         case 8: printf("B");
                break;
        case 7: printf("C");
                break;
        default : printf("subodh");
    }
    return 0;
}