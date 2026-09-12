#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool obstacle, person;
    float battery;
    printf("\nenter battery percentage:");
    scanf("%f", &battery);
    printf("enter wether obstacle is detected or not (1 for detected, 0 for not detected): ");
    scanf("%d", &obstacle);
    if (obstacle == true)
    {
        printf("obstacle detected");
    }
    else if (obstacle == false)
    {
        printf("\nno obstacle detected");
    }
    printf("\nenter wether person is detected or not (1 for detected, 0 for not detected): ");
    scanf("%d", &person);
    if (person == true)
    {
        printf("\nperson detected");
    }
    else if (person == false)
    {
        printf("\nno person detected");
    }

    if (obstacle == true && person == true)
    {
        printf("\n emergency stop");
    }
    else
    {
        printf("\n change direction");

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
