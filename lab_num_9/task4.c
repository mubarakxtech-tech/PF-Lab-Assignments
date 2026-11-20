#include <stdio.h>
#include <stdlib.h>

int total_ratings_sum(const int *ratings, int n) {
    if (ratings == NULL || n <= 0) {
        return 0;
    }

    int total = 0;
    const int *p = ratings;
    const int *end = ratings + n;

    while (p < end) {
        total += *p;
        p++;
    }
    return total;
}

double avg_ratings(const int *ratings, int n) {
    if (ratings == NULL || n <= 0) {
        return 0.0;
    }
    return (double)total_ratings_sum(ratings, n) / n;
}

int highest_rating_count_index(const int *rating_counts, int n) {
    if (rating_counts == NULL || n <= 0) {
        return -1;
    }

    int highest_idx = 0;
    for (int i = 1; i < n; i++) {
        if (rating_counts[i] > rating_counts[highest_idx]) {
            highest_idx = i;
        }
    }
    return highest_idx;
}

void display_summary(const int *total_ratings, const int *rating_counts, int n) {
    int total_all = total_ratings_sum(total_ratings, n);
    double avg_all = avg_ratings(total_ratings, n);
    int top_idx = highest_rating_count_index(rating_counts, n);

    printf("\n--- Movie Category Rating Summary ---\n");
    printf("Total ratings across all categories: %d\n", total_all);
    printf("Average ratings per category: %.2f\n", avg_all);
    if (top_idx != -1) {
        printf("Category with highest rating count: Category %d (Rating count: %d)\n",
               top_idx, rating_counts[top_idx]);
    }
}

int main(void) {
    int n = 0;
    printf("Enter the number of movie categories: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of categories.\n");
        return 1;
    }

    int *total_ratings = (int *)malloc((size_t)n * sizeof(int));
    if (total_ratings == NULL) {
        printf("Memory allocation failed for total_ratings.\n");
        return 1;
    }

    int *rating_counts = (int *)malloc((size_t)n * sizeof(int));
    if (rating_counts == NULL) {
        printf("Memory allocation failed for rating_counts.\n");
        free(total_ratings);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Category %d - Total Ratings: ", i);
        scanf("%d", &total_ratings[i]);

        printf("Category %d - Rating Count (number of users): ", i);
        scanf("%d", &rating_counts[i]);
    }

    display_summary(total_ratings, rating_counts, n);
    char choice;
    do {
        printf("\nDo you want to update a category's rating count? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            int idx = -1;
            int new_count = 0;

            printf("Enter category index to update (0 to %d): ", n - 1);
            if (scanf("%d", &idx) != 1 || idx < 0 || idx >= n) {
                printf("Invalid category index.\n");
                while (getchar() != '\n');
                continue;
            }

            printf("Enter new rating count for Category %d: ", idx);
            if (scanf("%d", &new_count) != 1 || new_count < 0) {
                printf("Invalid rating count.\n");
                while (getchar() != '\n');
                continue;
            }

            rating_counts[idx] = new_count;
            printf("Category %d rating count updated to %d.\n", idx, rating_counts[idx]);
            display_summary(total_ratings, rating_counts, n);
        }
    } while (choice == 'y' || choice == 'Y');
    free(total_ratings);
    free(rating_counts);
    total_ratings = NULL;
    rating_counts = NULL;

    return 0;
}