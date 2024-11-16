#include <stdio.h>

int addition(int a, int b)
{
    printf("the sum is :- %d", a + b);
}
int substraction(int a, int b)
{
    printf("the substraction is:- %d", a - b);
}
int division(int a, int b)
{
    printf("the division is :- %d", a / b);
}
int multiplication(int a, int b)
{
    printf("the multiplication is :- %d", a * b);
}

void main()
{
    int num, a, b;

    printf("enter 1 for addition:-\n");
    printf("enter 2 for substraction:-\n");
    printf("enter 3 for division:-\n");
    printf("enter 4 for multiplication:-\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Enter num a:- ");
        scanf("%d", &a);

        printf("Enter num b:- ");
        scanf("%d", &b);

        addition(a, b);
        break;

    case 2:
        printf("Enter num a:- ");
        scanf("%d", &a);

        printf("Enter num b:- ");
        scanf("%d", &b);

        substraction(a, b);

        break;
    case 3:
        printf("Enter num a:- ");
        scanf("%d", &a);

        printf("Enter num b:- ");
        scanf("%d", &b);
        division(a, b);
        break;
    case 4:
        printf("Enter num a:- ");
        scanf("%d", &a);

        printf("Enter num b:- ");
        scanf("%d", &b);
        multiplication(a, b);
        break;
    }
}