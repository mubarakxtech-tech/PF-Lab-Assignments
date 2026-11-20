#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FEEDBACK_LEN 100

char *max_feedback(char **feedback, int n) {
    if (feedback == NULL || n <= 0) {
        return NULL;
    }

    size_t max_len = 0;
    char *max_feed = NULL;

    char **current = feedback;
    char **end = feedback + n;

    while (current < end) {
        if (*current != NULL) {
            size_t len = strlen(*current);
            if (len > max_len) {
                max_len = len;
                max_feed = *current;
            }
        }
        current++;
    }

    return max_feed;
}

int main(void) {
    int n = 0;
    printf("Enter the number of feedback entries: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of entries.\n");
        return 1;
    }
    getchar(); // consume trailing newline after scanf

    char **feedback = (char **)malloc((size_t)n * sizeof(char *));
    if (feedback == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        feedback[i] = (char *)malloc(MAX_FEEDBACK_LEN * sizeof(char));
        if (feedback[i] == NULL) {
            printf("Memory allocation failed for entry %d.\n", i);
            for (int j = 0; j < i; j++) {
                free(feedback[j]);
            }
            free(feedback);
            return 1;
        }

        printf("Enter feedback %d: ", i);
        if (fgets(feedback[i], MAX_FEEDBACK_LEN, stdin) != NULL) {
            char *newline = strchr(feedback[i], '\n');
            if (newline != NULL) {
                *newline = '\0';
            }
        }
    }

    char *longest_feedback = max_feedback(feedback, n);
    if (longest_feedback != NULL) {
        printf("\nFeedback with the longest length: %s\n", longest_feedback);
    }

    for (int i = 0; i < n; i++) {
        free(feedback[i]);
    }
    free(feedback);
    feedback = NULL;

    return 0;
}