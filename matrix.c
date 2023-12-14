#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter no of rows ");
    scanf("%d",&rows);
    printf("Enter no of cols ");
    scanf("%d",&cols);
    int arr[rows][cols];
    printf("Enter matrix ");
    for(int i=0;i<rows;i++){
        for(int j=1;j<cols;j++){
            scanf("%d",&arr[i][j]);

        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}