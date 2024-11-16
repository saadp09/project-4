#include<stdio.h>

void multiplication(int a,int b)
{
    printf("multiplication of a and b is:- %d",a*b);
}

void division(int a,int b)
{
    printf("division of a and b is:- %d\n",a/b);
}

void substraction(int a,int b)
{
    printf("substraction of a and b is:- %d\n",a-b);
}

void addition(int a,int b)
{
    printf("addition of a and b is:- %d\n",a+b);
}

void main()
{
    
    addition(11,22);
    substraction(10,5);
    division(15,5);
    multiplication(20,10);
}