#include<stdio.h>

#include<math.h>

#define PI 3.14

float input_radius()

{

float radius;

printf("enter the radius of camel:");

scanf("%f", &radius);

return radius;

}

float input_height()

{

float height;

printf("enter the height of camel:");

scanf("%f", &height);

return height;

}

float input_length()

{

float length;

printf("enter the length of camel: ");

scanf("%f", &length);

return length;

}

float find_weight(float radius, float height, float length)

{

float weight = (PI * (radius*radius*radius) * sqrt(height * length));

return weight;

}

void output(float radius, float height, float length, float weight)

{

printf("weight of the camel given height(%f), length(%f) and stomach radius(%f) is = %f",height,length,radius,weight);

}

int main()

{

float radius,height,length,weight;

radius = input_radius();

height = input_height();

length = input_length();

weight = find_weight(radius, height, length);

output(radius, height, length, weight);
}
