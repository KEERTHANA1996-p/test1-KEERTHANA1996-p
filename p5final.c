#include<stdio.h>
#include<math.h>
#define PI 3.14
float input() // input function
{	
    float num;
    printf("Enter x: ");
    scanf("%f", &num);
    return num;
}
 
float borga_sum(int x)			//1 + x/3! + x^2/5! + x^3/7! .....
{
    float sum=1, prev = 1, next;
    for(int i=3 ;prev>0.000001;i=i+2) 
    {
      next = prev * (x/i);      //common term is x/i
      sum = sum+next;                  
      prev = next;                            
    }
    return sum;
}
 
void output(float x, float epx)
{
    printf("e powerx of %.2f is %.2f\n",x,epx);
}
 
int main()
{
    float x;
    x = input();
    float epx = borga_sum(x);
    output(x,epx);
    return 0;
}
