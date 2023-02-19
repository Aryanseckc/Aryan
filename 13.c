
// Largest no in array and its index
#include<stdio.h>
int main(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("Enter value for arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        printf("Value for arr[%d]is :  %d\n",i,arr[i]);
    }
    int g=0,f=0;
    for(int i=0;i<a;i++){
        if(arr[i]>g);
        g=arr[i];
        if(g==arr[i]){
            f=i;
        }
    }
    printf("Largest number is %d\n",g);
    printf("Index is arr[%d]",f);
    return 0;
}