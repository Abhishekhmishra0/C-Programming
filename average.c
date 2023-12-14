#include<stdio.h>
int main(){
    float a,b,c;
    printf("First number is : ");
    scanf("%f",&a);
    printf("Second number is: ");
    scanf("%f",&b);
    printf("Third number is: ");
    scanf("%f",&c);
    float average = (a+b+c)/3;
    printf("%f",average);

    return 0;

}