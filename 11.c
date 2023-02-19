
// Sum of digits
#include<stdio.h>
int main(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    int g=a,d=0,sum=0;
    while(a>0){
        d=a%10;
        sum=sum+d;
        a=a/10;


    }
    printf("Sum of digits of %d is : %d",g,sum);
    return 0;
}