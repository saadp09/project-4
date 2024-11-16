#include<stdio.h>

void main ()
{
    int num;

    printf("enter the number you want multiplication:-\n");
    scanf("%d",&num);

    printf("multiplication table of %d is follows :-\n");


   /*printf("\n%d*1=%d",num,num*1);
    printf("\n%d*2=%d",num,num*2);
    printf("\n%d*3=%d",num,num*3);
    printf("\n%d*4=%d",num,num*4);
    printf("\n%d*5=%d",num,num*5);
    printf("\n%d*6=%d",num,num*6);
    printf("\n%d*7=%d",num,num*7);
    printf("\n%d*8=%d",num,num*8);
    printf("\n%d*9=%d",num,num*9);
    printf("\n%d*10=%d",num,num*10);
    */

      // with the help of for loop


      for (int i = 1; i <= 10; i++)
      {
        printf("\n%d X %d = %d",num,i,num*i);
      }
      
}