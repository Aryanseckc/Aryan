//Program to check whether a string is palindrome or not

#include<stdio.h>
int main(){
    int n;
    printf("Enter value:");
    scanf("%d",&n);
    char a[n];
    for(int i=0;i<n;i++){
        printf("Enter value for a[%d]:",i);
        scanf("%s",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("Value for a[%d] is : %c\n",i,a[i]);
    }
    int c;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1]){
            c=1;
        }
        n--;
    }
    if(c==1){
        printf("Not a Palindrome");
    }
    else{
        printf(" Palindrome");
    }
    return 0;
}