#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:-");
    scanf("%d",&age);
    printf("you entered your age %d as \n",age);
    if (age>=18)    
    {
        printf("you can vote!!");
    }
    else if (age>=10)   
    {
        printf("you can vote for kids");
    }
    
     else
    {
        printf("you cannot vote!!");
    }
    
    return 0;
}
