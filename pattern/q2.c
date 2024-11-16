/*41
41 42
41 42 43
41 42 43 44 
41 42 43 44 45
*/
#include<stdio.h>
void main()
{
    int i,j,startnum = 41;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
        printf("%d ",startnum+j);
        }
    
    printf("\n");
    }
}