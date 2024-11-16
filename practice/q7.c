
#include <stdio.h>
void main()
{

    int choice;

    printf("press 1 for english:-\n");
    printf("press 2 for hindi:-\n");
    printf("press 3 for gujrati:-\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("press 1 for internet recharge:-\n");
        printf("press 2 for top-up recharge:-\n");
        printf("press 3 special recharge:-\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("you have succefully done internet recharge\n");
            break;
        case 2:
            printf("you have successfully done top-up recharge\n");
            break;
        case 3:
            printf("you have successfully done special recharge\n");
        }
        break;
    case 2:
        printf("internet recharge ke liye 1 dabaye\n");
        printf("top up recharge ke liye 2 dabaye\n");
        printf("special recharge ke liye 3 dabaye\n");

        printf("enter your choice:-");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("aapne safaltapurvak internet recharge kar liya hai");
            break;
        case 2:
            printf("aapne safaltapurvak top-up recharge kar liya hai");
            break;
        case 3:
            printf("aapne safaltapurvak special recharge kar liya hai");

        default:
            break;
        }
    case 3:
        printf("internet recharge mate 1 dabavo\n");
        printf("top-up recharge mate 2 dabavo\n");
        printf("special recharge mate 3 dabavo\n");

        printf("enter your choice:-");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("tame safaltapurvak internet recharge karyo che");
            break;
        case 2:
            printf("tame safaltapurvak top-up recharge karyo che");
            break;
        case 3:
            printf("tame safaltapurvak special recharge karyo che");
        
        default:
        break;
        }
    }
}
