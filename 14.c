
// Program to bubble sort a string using bubble sorting
#include<stdio.h>
int main(){
    int a,temp=0;
    printf("Enter size:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("Enter value for arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        for(int k=0;k<a-1;k++){
            if(arr[k]>arr[k+1]){
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    printf("\nValues after sorting\n");

    for(int i=0;i<a;i++){
        printf("Value for arr[%d] is %d\n",i,arr[i]);
    }
    return 0;


}
