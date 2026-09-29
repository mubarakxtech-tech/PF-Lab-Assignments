#include <stdio.h>

#define VIEW 1
#define TRAIN 2
#define TEST 4
#define DEPLOY 8

int main() {
    int permission;

    printf("=== AI Bitwise Permissions System ===\n");
    printf("Enter user permission value (e.g., sum of assigned rights): ");
    scanf("%d", &permission);

    printf("\nAllowed Operations:\n");
    if (permission & VIEW) printf("- View Model\n");
    if (permission & TRAIN) printf("- Train Model\n");
    if (permission & TEST) printf("- Test Model\n");
    if (permission & DEPLOY) printf("- Deploy Model\n");

    if ((permission & TRAIN) && (permission & DEPLOY)) {
        printf("\nStatus: User has BOTH Training and Deployment permissions.\n");
    } else {
        printf("\nStatus: User lacks combined Training and Deployment permissions.\n");
    }

    return 0;
}