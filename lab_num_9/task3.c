#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_USERNAME_LEN 50

int containsDigit(char *str) {
    if (str == NULL) {
        return 0;
    }

    for (const char *p = str; *p != '\0'; p++) {
        if (isdigit((unsigned char)*p)) {
            return 1;
        }
    }

    return 0;
}

int isAllAlphabetic(const char *str) {
    if (str == NULL || *str == '\0') {
        return 0;
    }

    for (const char *p = str; *p != '\0'; p++) {
        if (!isalpha((unsigned char)*p)) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int n = 0;
    printf("Enter the number of usernames (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of usernames.\n");
        return 1;
    }
    char **usernames = (char **)malloc((size_t)n * sizeof(char *));
    if (usernames == NULL) {
        printf("Memory allocation failed for username pointers.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        usernames[i] = (char *)malloc(MAX_USERNAME_LEN * sizeof(char));
        if (usernames[i] == NULL) {
            printf("Memory allocation failed for username %d.\n", i + 1);
            for (int j = 0; j < i; j++) {
                free(usernames[j]);
            }
            free(usernames);
            return 1;
        }

        printf("Enter username %d: ", i + 1);
        scanf("%49s", usernames[i]);
    }
    int validCount = 0;
    for (int i = 0; i < n; i++) {
        if (containsDigit(usernames[i])) {
            free(usernames[i]);
            usernames[i] = NULL;
        } else {
            usernames[validCount] = usernames[i];
            if (validCount != i) {
                usernames[i] = NULL;
            }
            validCount++;
        }
    }
    printf("\nValid alphabetic usernames:\n");
    int displayed = 0;
    for (int i = 0; i < validCount; i++) {
        if (isAllAlphabetic(usernames[i])) {
            printf("- %s\n", usernames[i]);
            displayed++;
        }
    }

    if (displayed == 0) {
        printf("None\n");
    }
    for (int i = 0; i < validCount; i++) {
        free(usernames[i]);
        usernames[i] = NULL;
    }
    free(usernames);
    usernames = NULL;

    return 0;
}