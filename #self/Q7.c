#include<stdio.h>
void main()
{
int i,j;

for ( i = 0; i <=5; i++)
{
    if (i== 1 || i==3)
    {
        for ( j = 0; j <=5; j++)
        {
            printf("* ");
        }
        
    }
    else if (i == 2)
    {
        printf("*         *");
    }
    else if (i == 4 || i == 5)
    {
        printf("* ");
    }
    printf("\n");
}



}