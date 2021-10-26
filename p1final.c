1. Write a program to find length of a line given two points.
 
#include <stdio.h>
#include<math.h>


int main()
{
    float x1,y1,x2,y2,length;
    printf("Enter first co-ordinate values\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter second co-ordinate values\n");
    scanf("%f%f",&x2,&y2);
    length = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("length of two points (%f, %f) and (%f, %f)  is = %.2f\n",x1,y1,x2,y2,length);
    return 0;
}
