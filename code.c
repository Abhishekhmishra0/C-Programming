#include<stdio.h>
int main(){
    FILE *testfile;
    testfile = fopen("testfile.txt","r");
    testfile = fopen("testfile.txt","a");
    char str[30];
    while(fgets(str,30,testfile)!=NULL){
        printf("%s",str);
        // fputs(str,testfile);
    }

    return 0;
}