#include<stdio.h>
void cube(int a)
{
    printf("the cube of:- %d",a*a*a);
}

void main()
{
    int a;
    printf("enter num:-");
    scanf("%d",&a);
    cube(a);
}

