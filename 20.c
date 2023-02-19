
//Program to make a simple cacluator using switch case
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter operand 1:");
    scanf("%d",&a);
    printf("Enter operand 2:");
    scanf("%d",&b);
    printf("1 for addition\n");
    printf("2 for Subtraction\n");
    printf("3 for Multiplication\n");
    printf("4 for Divsion\n");
    printf("5 for Reaminder\n");
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("Sum : %d",a+b);
            break;
        case 2:
            printf("Subtraction : %d",a-b);
            break;
        case 3:
            printf("Multiplication :%d",a*b);
            break;
        case 4:
            printf("Divison : %d",a-b);
            break;
        case 5:
            printf("Reaminder : %f",a%b);
            break;
        default :
            printf("Error ");
            break;
    }
    return 0;
}