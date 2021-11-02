#include<stdio.h>

#include<math.h>

#define PI 3.14

struct camel

{

float radius, height, length, weight;

};

typedef struct camel Camel;

Camel input()

{

Camel c;

printf("enter the radius, height and length of camel:");

scanf("%f%f%f", &c.radius,&c.height,&c.length);

return c;

}

float find_weight(Camel c)

{

c.weight = (PI * (c.radius*c.radius*c.radius) * sqrt(c.height * c.length));

return c.weight;

}

void output(Camel c, float w)

{

printf("weight of the camel given height(%f), length(%f) and stomach radius(%f) is = %f",c.height,c.length,c.radius,w);

}

int main()

{

Camel c;

float w;

c = input();

w = find_weight(c);

output(c,w);

}

OR

#include<stdio.h>

#include<math.h>

#define PI 3.14

struct camel

{

float radius, height, length, weight;

};

typedef struct camel Camel;

Camel input()

{

Camel c;

printf("enter the radius, height and length of camel:");

scanf("%f%f%f", &c.radius,&c.height,&c.length);

return c;

}

void find_weight(Camel *c)

{

c->weight = (PI * (c->radius*c->radius*c->radius) * sqrt(c->height * c->length));

//return c.weight;

}

void output(Camel c)

{

printf("weight of the camel given height(%f), length(%f) and stomach radius(%f) is = %f",c.height,c.length,c.radius,c.weight);

}

int main()

{

Camel c;

float w;

c = input();

find_weight(&c);

output(c);
}
