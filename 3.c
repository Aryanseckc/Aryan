
// Program to cacluate the area and perimeter  of circle , square and rectangle in c
#include<stdio.h>
    
int main(){
    int side;
    printf("Enter the side of square: ");
    scanf("%d",&side);
    printf("Area of square is : %d\n",side*side);
    printf("Perimeter of square is :%d\n",4*side);

    
    
    int length,breadth;
    printf("Enter the length of rectangle:");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle:");
    scanf("%d",&breadth);
    printf("Area of rectangle is :%d\n",length*breadth);
    printf("Perimeter of rectangle is :%d\n",2*(length+breadth));
    int radius;
    float perimeter,area,pie=3.14;
    printf("Enter the radius of circle:");
    scanf("%d",&radius);
    perimeter =2*pie*radius;
    area=radius*pie*radius;
    printf("Area of circle is : %f \n",area);
    printf("Perimeter of circle is :%f\n",perimeter);
    
    return 0;
}