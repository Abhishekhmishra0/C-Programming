#include<stdio.h>
int main(){
    int s=0;
    while(s++ <10){
        if((s<7)&&(s<8)) continue;
        printf("%d\n",s);

    }

    return 0;
}