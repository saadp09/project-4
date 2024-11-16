#include <stdio.h>
void main()
{

    /*
        kms to miles
        inches to foot
        cms to inches
        pound to kgs
        inches to meters

    */
    int choice;
    float kms, miles, inches, foot, cms, pound, meter, kgs;

    printf("enter 1 if you want to convert kms into miles:-\n");
    printf("enter 2 if you want to convert inches into foot:-\n");
    printf("enter 3 if you want to convertcms into inches:-\n");
    printf("enter 4 if you want to convert pound into kgs:-\n");
    printf("enter 5 if you want to convert inches into meter:-\n");

    scanf("%d", &choice);

    switch (choice)

    {
    case 1:
        printf("enter kms:-");
        scanf("%f", &kms);

        miles = kms * 0.621371;
        printf("the conversion of kms into miles is:-%f", miles);
        break;

    case 2:
        printf("enter inches:-");
        scanf("%f", &inches);

        foot = inches * .08333;
        printf("the conversion of inches into foot is:-%f", foot);
        break;

    case 3:

        printf("enter cms:-");
        scanf("%f", &cms);

        inches = cms * .393701;
        printf("the conversion of cms into inches is:-%f", inches);
        break;

    case 4:

        printf("enter pound:- ");
        scanf("%f", &pound);

        kgs = pound * 0.453562;
        printf("the conversion of pound into kgs is:-%f", kgs);
        break;

    case 5:
        printf("enter inches:-");
        scanf("%f", &inches);
        foot = inches * .0254;
        printf("the conversion of inches into foot is:-%f", foot);
        break;
    }
}