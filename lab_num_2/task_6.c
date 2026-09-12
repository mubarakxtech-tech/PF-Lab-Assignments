#include <stdio.h>

int main()
{
    int obstacle, person;
    float battery;
    printf("\nenter battery percentage:");
    scanf("%f", &battery);
    printf("enter wether obstacle is detected or not (1 for detected, 0 for not detected): ");
    scanf("%d", &obstacle);
    if (obstacle == 1)
    {
        printf("obstacle detected");
    }
    else if (obstacle == 0)
    {
        printf("\nno obstacle detected");
    }
    printf("\nenter wether person is detected or not (1 for detected, 0 for not detected): ");
    scanf("%d", &person);
    if (person == 1)
    {
        printf("\nperson detected");
    }
    else if (person == 0)
    {
        printf("\nno person detected");
    }
    if (obstacle == 1)
    {
        if (person == 1)
        {
            printf("\nEmergency Stop\n");
        }
        else
        {
            printf("\nChange Direction\n");
        }
    }
    else
    {
        if (battery <= 20.0)
        {
            printf("\n return to charging station");
        }
        else
        {
            printf("\n continue operating");
        }
    }
return 0;
}


