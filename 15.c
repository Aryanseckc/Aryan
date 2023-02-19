
//Program to linear search an element in array
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter size of an array:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("Enter value for arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter an element to find in an array:");
    scanf("%d",&b);
    for(int i=0;i<a;i++){
        if(b==arr[i]){
            printf("%d is present at an location arr[%d]",b,i);
            break;
        }
        else{
            printf("%d is not present in array",b);
            break;
        }
    }
    return 0;
}