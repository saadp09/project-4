#include <stdio.h>
int main()
{
    int marks;
    char ch;
    printf("enter the marks:-\n");
    scanf("%d", &marks);
    ch = marks >= 90
             ? 'A'
         : marks >= 80
             ? 'B'
         : marks >= 70
             ? 'C'
         : marks >= 60
             ? 'D'
         : marks >= 33
             ? 'E'
             : printf("\nsorry you failed");

    printf("%c", ch);
    switch (ch)
    {
    case 'A':
        printf("\nexcellent work");
        break;
    case 'B':
        printf("\nwell done");
        break;
    case 'C':
        printf("\ngood job");
        break;
    case 'D':
        printf("\ngood");
        break;
    case 'E':
        printf("\nyou failed");

        break;
    }

    if (ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D')
    {
        printf("\nyou are eligible for the next level!!");
    }
    else
    {
        printf("\nplease try again next time");
    }
    return 0;
}
