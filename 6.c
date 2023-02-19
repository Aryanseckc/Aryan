
//Program to check whether a charcter is a vowel or consonant
#include<stdio.h>
int main(){
    char vowel[10];
    vowel[0]='A';
    vowel[1]='E';
    vowel[2]='I';
    vowel[3]='O';
    vowel[4]='U';
    vowel[5]='a';
    vowel[6]='e';
    vowel[7]='i';
    vowel[8]='o';
    vowel[9]='u';
    char c;
    printf("Enter the charcter :");
    scanf("%c",&c);
    if(c==vowel[0]||c==vowel[1]||c==vowel[2]||c==vowel[3]||c==vowel[4]||c==vowel[5]||c==vowel[6]||c==vowel[7]||c==vowel[8]||c==vowel[9]){
        printf("%c is an vowel",c);

    }
    else{
        printf("%c is an consant",c);
    }
    return 0;
}