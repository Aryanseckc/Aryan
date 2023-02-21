
#include<stdio.h>
struct student{
    int a;
    int b;
    int c;
    int d;
};
int main(){
    int e;
    printf("Enter no of students :");
    scanf("%d",&e);
    struct student e1[e];
    for(int i=0;i<e;i++){
        printf("Enter rollno :");
        scanf("%d",&e1[i].a);
        printf("Marks of subject 1:");
        scanf("%d",&e1[i].b);
        printf("Marks of subject 2:");
        scanf("%d",&e1[i].c);
        printf("Marks of subject 3:");
        scanf("%d",&e1[i].d);
        printf("\nTotal marks:%d\n",((e1[i].c)+(e1[i].b)+(e1[i].d)));
    }
    return 0;
}