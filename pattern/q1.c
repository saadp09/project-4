#include <stdio.h>
void main()
{
    int i, j;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
