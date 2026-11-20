#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getcategory(char c) {
    if ('A' <= c && c <= 'Z') {
        return 0; 
    } else if ('a' <= c && c <= 'z') {
        return 1; 
    } else if ('0' <= c && c <= '9') {
        return 2;
    } else {
        return 3; 
    }
}

int positional_similarity(const char *pattern, const char *user_password) {
    int matches = 0;
    for (int i = 0; pattern[i] != '\0' && user_password[i] != '\0'; i++) {
        if (getcategory(pattern[i]) == getcategory(user_password[i])) {
            matches++;
        }
    }
    return matches;
}

void calculate_percentages(const char *pattern, char *passwords[], double *scores, int n) {
    int pattern_len = strlen(pattern);
    if (pattern_len == 0) return;

    for (int i = 0; i < n; i++) {
        int matches = positional_similarity(pattern, passwords[i]);
        scores[i] = ((double)matches / pattern_len) * 100.0;
    }
}

int highest_similarity(const double *scores, int n) {
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (scores[i] > scores[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

int main() {
    int n;
    printf("Enter the number of participants: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of participants.\n");
        return 1;
    }

    char *pattern = (char *)malloc(50 * sizeof(char));
    if (pattern == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the password pattern: ");
    scanf("%49s", pattern);

    double *scores = (double *)malloc(n * sizeof(double));
    if (scores == NULL) {
        printf("Memory allocation failed.\n");
        free(pattern);
        return 1;
    }

    char **passwords = (char **)malloc(n * sizeof(char *));
    if (passwords == NULL) {
        printf("Memory allocation failed.\n");
        free(scores);
        free(pattern);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        passwords[i] = (char *)malloc(50 * sizeof(char));
        if (passwords[i] == NULL) {
            printf("Memory allocation failed.\n");
            for (int j = 0; j < i; j++) {
                free(passwords[j]);
            }
            free(passwords);
            free(scores);
            free(pattern);
            return 1;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("Enter the password for participant %d: ", i + 1);
        scanf("%49s", passwords[i]);
    }

    calculate_percentages(pattern, passwords, scores, n);

    printf("\n--- Similarity Results ---\n");
    for (int i = 0; i < n; i++) {
        printf("Participant %d (%s): %.2f%%\n", i + 1, passwords[i], scores[i]);
    }

    int best_idx = highest_similarity(scores, n);
    printf("\nHighest Similarity:\n");
    printf("Participant %d (%s) with %.2f%%\n", best_idx + 1, passwords[best_idx], scores[best_idx]);
    for (int i = 0; i < n; i++) {
        free(passwords[i]);
    }
    free(passwords);
    free(scores);
    free(pattern);

    return 0;
}