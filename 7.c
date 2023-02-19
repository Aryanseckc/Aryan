
// Program to cacluate the factorial of an number
#include<stdio.h>
int main(){
    int a;
    printf("Enter number to find factorial : ");
    scanf("%d",&a);
    int fact=1;
    
    for(int i=1;i<=a;i++){
        fact =fact*i;
    }
    printf("Factorial is : %d",fact);
    return 0;
}