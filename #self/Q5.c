#include <stdio.h>

int main()
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    {

        for ( j = i; j < 5; j++)
        {
            printf("  ");
        }

        for ( j = 5 - i + 1; j <= 5; j++)
        {
            printf("%d ", j);
        }

        for ( j = 5 - 1; j >= 5 - i + 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
