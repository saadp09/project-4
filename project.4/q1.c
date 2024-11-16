#include <stdio.h>
int main()
{
    int marks;
    char ch;
    printf("enter the marks:-");
    scanf("%d", &marks);
    ch = marks >= 90
             ? 'A'
         : marks >= 80
             ? 'B'
         : marks >= 70
             ? 'C'
         : marks >= 60
             ? 'D'
         : marks < 33
             ? 'E'
             : printf("sorry you failed");
    printf("\n%c", ch);
    switch (ch)
    {
    case 'A':
        printf("\nExcellent work!");

        break;
    case 'B':
        printf("\nwell done!");
        break;
    case 'C':
        printf("\ngood job!");
        break;
    case 'D':
        printf("\ngood!!");
        break;

    case 'E':
        printf("\nsorry you failed");
        break;
    }
    if (ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D')
    {
        printf("\n You are eligible for the next level!!");
    }
    else
    {
        printf("please try again next time");
    }
}