#include<stdio.h>
#include<string.h>
void input_name(char a)
{
    char str[10];
    printf("enter the name of a Camel: ");
    scanf("%s",a);
    
}
int find_NiceName(char a[100])
{
    int vowels=0,consonants=0;
    printf("\nname is %s", a);
    for(int i=0;a[i] != '\0';i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' ||a[i] == 'U')
            vowels++;
        else
            consonants++;
    } 
    printf("\nno of vowels=%d\t",vowels);
    printf("no of consonants=%d\n",consonants);
    
    if(vowels>=2 && consonants>=2)
        return 1;
    else
        return 0;
    
}
void output_name(char a[100], int count)
{
    if(count==1)
        printf("Given Camel Name %s is NICE",a);
    else if(count == 0)
        printf("Given Camel Name %s is NOT NICE, Try something different!!",a);
}
int main()
{
    char a[100],str[10];
    int count;
    input_name(a);
    count = find_NiceName(a);
    output_name(a,count);
    return 0;
}
