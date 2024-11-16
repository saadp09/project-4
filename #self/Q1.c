#include <stdio.h>

int main()
{

    int startNum = 41;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", startNum + j);
        }
        printf("\n");
    }

    return 0;
}
