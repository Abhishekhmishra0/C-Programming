#include<stdio.h>
int maze(int sr, int sc, int er, int ec){
    int rightways=0;
    int downways =0;
    if(sr==er && sc ==ec) return 1;
    if(sr ==er){
        rightways+= maze(sr, sc+1,er, ec);
    }
    if(sc==ec){
        downways +=maze(sr+1,sc,er,ec);
    }
    if(sc<ec && sr<er){
        rightways+= maze(sr, sc+1,er, ec);
        downways +=maze(sr+1,sc,er,ec);
    }
    int totalways = rightways+ downways;
    return totalways;

}
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",n);
    int m;
    printf("Enter m ");
    scanf("%d",m);
    int c= maze(1,1,n,m);
    printf("%d",c);
    return 0;
}