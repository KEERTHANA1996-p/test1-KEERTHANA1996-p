#include<stdio.h>   
void input(int *n, int a[*n])
{
    printf("Maximum odd numbers: ");                                                      
    scanf("%d", &*n);                                                          
    printf("Enter any %d Numbers: ", *n);                               
    for(int i = 0;i < *n;i++)                                                     
    scanf("%d",&a[i]);
}
 
 
float odd_avg(int *n, int a[*n])
{
    int sum = 0,i,count=0;
    float avg;
    for(i = 0;i < *n;i++) 
    {   
        if(a[i]%2 != 0 )
        {
            printf("num=%d\t", a[i]);
            sum = sum + a[i];
            printf("sum=%d\t", sum);
            count++;
            printf("count=%d\n", count);
        }
    }
    avg = sum / count;
    printf("\navg is: %f", avg);
    return avg;
    
}
void output(float avg, int *n, int a[*n])     /* print all the elements of the array and then the composite average */
{
    printf("\naverage of given odd numbers:\t");
    for(int i = 0;i < *n;i++) 
    {   
        if((a[i]%2) != 0 )
            printf("%d\t", a[i]);
    }
    printf("is = %f\n",avg);
}
 
void main()                                                                     
{                                                                               
    int *n,a[100];  
    float avg;
    input(&n, a);
    avg = odd_avg(&n, a);
    output(avg, &n, a);
}
