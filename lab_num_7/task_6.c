#include <stdio.h>
#include <string.h>

int main(void) {
    char userIn[50], passIn[50], userFile[50], passFile[50];

    printf("Username: ");
    scanf("%49s", userIn);
    printf("Password: ");
    scanf("%49s", passIn);

    FILE *fptr = fopen("credentials.txt", "r");
    if (fptr == NULL) {
        printf("Error: credentials.txt not found!\n");
        return 1;
    }
    fscanf(fptr, "%49s %49s", userFile, passFile);
    fclose(fptr);

    if (strcmp(userIn, userFile) == 0 && strcmp(passIn, passFile) == 0)
        printf("Access Granted!\n");
    else
        printf("Access Denied!\n");
    return 0;
}