#include<stdio.h>
#include<string.h>
void palin(char str[50]){
    int i=0,j=strlen(str)-1;
    for(i,j;i<j;i++,j--){
        if(str[i]!=str[j]){ printf("Not a palindrome ");
        break;
        }
        else{ printf("Its a palindrome ");
        break;
    }
}
}
int main(){
palin("abhishek");
    return 0;
}