#include<stdio.h>
int main(){
    int p1[3]={2,7,1};
    int p2[3]={1,5,3};
    int p3[3]={3,2,8};
    int s1[3]={6,7,2};
    int s2[3]={4,2,2};
   int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
    for(int i=0;i<3;i++){
        sum1 =sum1 + p1[i]*s1[i];
        sum2 =sum2 + p1[i]*s2[i];
        sum3 =sum3 + p2[i]*s1[i];
        sum4 =sum4 + p2[i]*s2[i];
        sum5 =sum5 + p3[i]*s1[i];
        sum6 =sum6 + p3[i]*s2[i];
         
    }
    if(sum1<sum2) printf("For person 1 shop 1 is better\n");
    else printf("For person 1 Shop 2 is better\n");
    if(sum3<sum4) printf("For person 2 shop 1 is better\n");
    else printf("For person 2 Shop 2 is better\n");
    if(sum5<sum6) printf("For person 3 shop 1 is better\n");
    else printf("For person 3 Shop 2 is better\n");
    return 0;
}