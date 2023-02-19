
#include<stdio.h>
#include<string.h>
int main() {
    char name[20];
    printf("Enter you name:");
    scanf("%s",&name);
    printf("Name is : %s\n",name);
    printf("Length of String is : %d\n",strlen(name));
    char sur[10];
    printf("Enter your surname:");
    scanf("%s",&sur);
    printf("Your name is :%s\n",strcat(name,sur));
    printf("Surname in lower case is : %s\n",strlwr(sur));
    return  0;
}