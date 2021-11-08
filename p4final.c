#include<stdio.h>
#include<math.h>
#define PI 3.14
struct camel 
{ 
    float radius, height, length, weight; 
}; 
 
struct camel input()
{
    struct camel c;
    printf("enter the radius, height and length of camel:\n");
    scanf("%f%f%f", &c.radius,&c.height,&c.length);
    return c;
}
int find_mood(struct camel c)
{
    if(c.radius < c.height && c.radius < c.length) //sick its stomach_radius is less than height and less than length. 
        return 1;
    else if(c.height < c.length && c.height < c.radius)//happy its height is less than length and less than stomach_radius. 
        return 0;
    if (c.length < c.height && c.length < c.radius) //tense its length is less than height and stomach_radius.
        return -1;
}
void output(int m)
{
    if(m == 1 )
        printf("Camel is sick");
    else if(m == 0)
        printf("Camel is happy");
    if(m == -1)
        printf("Camel is tensed");
}
int main()
{
    struct camel c;
    int m;
    c = input();
    m=find_mood(c);
    output(m); 
}
