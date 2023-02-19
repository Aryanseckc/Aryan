
// Program to cacluator factorial of no using recursion
#include<stdio.h>
int fact(int);
int main(){
    int a;
    printf("Enter number :");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,fact(a));
    return 0;
}
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return(n*fact(n-1));
    }
}