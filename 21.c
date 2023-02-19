
//Program to find fib series using recursion
#include <stdio.h>
int fibonacci(int);
int main(){
    int num; 
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); 
    for (int i = 0; i < num; i++){
        printf("%d, ", fibonacci(i)); 
    }
    return 0;
}
int fibonacci(int num){
   if (num == 0){
        return 0; // retuning 0, if condition meets
    }
   else if (num == 1){
        return 1; // returning 1, if condition meets
    }
    else{
        return fibonacci(num - 1) + fibonacci(num - 2); 
    }
}