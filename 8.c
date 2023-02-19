
// Program to print the fibonacci series using for loop
#include<stdio.h>
int main(){
    int a;
    printf("Enter number of elements :");
    scanf("%d",&a);
    int n1=0,n2=1,n3;
    printf("%d\n",n1);
    printf("%d\n",n2);
    for(int i=2;i<a;i++){
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}