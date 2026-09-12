#include <stdio.h>
#include <string.h>
int main()
{
    char role[20];
    int security_level;
    int acc_status;
    printf("Ai system access control");
    printf("\nonly for admins,students,researchers");
    printf("\nEnter the account status (1 for active, 0 for inactive): ");
    scanf("%d", &acc_status);
    if (acc_status != 0 && acc_status != 1)
    {
        printf("Invalid input for account status");
        return 0;
    }
    if (acc_status == 0)
    {
        printf("Account is inactive. Access denied.");
        return 0;
    }

    printf("enter your role :");
    scanf("%s", role);
    if (strcmp(role, "admin") == 0 || strcmp(role, "ADMIN") == 0)
    {
        printf("enter security level : ");
        scanf("%d", &security_level);
        if (security_level >= 3)
        {
            printf("Access granted");
        }
        else
        {
            printf("Access denied");
        }
    }
    if (strcmp(role, "researcher") == 0 || strcmp(role, "RESEARCHER") == 0)
    {
        printf("enter security level : ");
        scanf("%d", &security_level);
        if (security_level >= 2)
        {
            printf("Access granted");
        }
        else
        {
            printf("Access denied");
        }
    }
    if (strcmp(role, "student") == 0 || strcmp(role, "STUDENT") == 0)
    {
        printf("enter security level : ");
        scanf("%d", &security_level);
        if (security_level >= 1)
        {
            printf("Access granted");
        }
        else
        {
            printf("Access denied");
        }
    }
    if (strcmp(role, "admin") != 0 && strcmp(role, "ADMIN") != 0 && strcmp(role, "researcher") != 0 && strcmp(role, "RESEARCHER") != 0 && strcmp(role, "student") != 0 && strcmp(role, "STUDENT") != 0)
    {
        printf("Invalid role");
    }
    return 0;
}
