#include<stdio.h>

void division(int number)
{
    if (number %3==0 && number %5 ==0)
    {
        printf("given number is divisible by both 3 and 5");
    }
    else
    {
        printf("given number is not divisible by 3 and 5");
    }
    
}

void main()
{
    int number;
    printf("enter num:-");
    scanf("%d",&number);
    division(number);
}