#include <stdio.h>
void main()
{
    int choice;
    int num;
    printf("press 1 for english:-\n");
    printf("press 2 for hindi:-\n");
    printf("press 3 for gujarati:-\n");

    printf("enter your choice:-");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("press 1 for internet reacgarge \n");
        printf("press 2 for top-up reacharge\n");
        printf("press 3 for spacial reacharge\n");

        printf("enter your choice:-");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("you have successfully done internate reacharge\n");
            break;

        case 2:
            printf("you have successfully done top-up reacharge\n");

            break;

        case 3:
            printf("you have successfully done spacial reacharge\n");
        }
        break;

    case 2:

        printf("internate reacharge ke liye 1 dabaye\n");
        printf("top-up ke liye 2 dabaye\n");
        printf("spacial ke liye 3 dabaye\n");

        printf("enter your choice:-\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("aapne saflta purvak internet reacharge kar liya hai\n");

            break;

        case 2:
            printf("aapne saflta puravk top-up recharge kar liya hai\n ");
            break;

        case 3:
            printf("aapne saflta purvak spacial reacharge kar liya hai\n ");

        default:
            break;
        }

    case 3:

        printf("internet reacharge mate 1 dabavo\n ");
        printf("top-up mate 2 dabavo\n ");
        printf("spacial reacharge mate 3 dabavo\n ");

        printf("enter your choice:-\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("tame safalta purvak internet reacharge karyo chhe\n ");
            break;

        case 2:
            printf("tame safalta purvak top-up reacharge karyo chhe\n");
            break;

        case 3:
            printf("tame safalta purvak spacial reacharge karyo chee\n");
            break;
        default:
            break;
        }
    }
}
