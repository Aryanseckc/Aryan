
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
    float x1,x2,y1,y2,distance;
    printf("Enter the values for x1 and x2");
    scanf("%f%f",&x1,&x2);
    printf("Enter the values for y1 and y2");
    scanf("%f%f",&y1,&y2);
    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The distance between two points is =%0.2f",distance);
    getch();
}

