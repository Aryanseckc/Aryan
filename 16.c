
// Program to read and print the 2D Array 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter no of rows of an array:");
    scanf("%d",&a);
    printf("Enter no of column of an array:");
    scanf("%d",&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter value for arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Value for arr[%d][%d] is %d\n",i,j,arr[i][j]);
        }
    }
    return 0;
}