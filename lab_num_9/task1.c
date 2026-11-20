#include <stdio.h>
#include <stdlib.h>

void display(const int *stock, int n) {
    int total = 0;
    int min_index = 0;

    for (int i = 0; i < n; i++) {
        total += stock[i];
        if (stock[i] < stock[min_index]) {
            min_index = i;
        }
    }

    double average = (double)total / n;

    printf("\n--- Stock Summary ---\n");
    printf("Total stock across all categories: %d\n", total);
    printf("Average stock per category: %.2f\n", average);
    printf("Category index with lowest stock: %d (Stock: %d)\n", min_index, stock[min_index]);
}

int main(void) {
    int n = 0;
    printf("Enter the number of book categories: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of categories.\n");
        return 1;
    }

    int *stock = (int *)malloc((size_t)n * sizeof(int));
    if (stock == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter stock quantity for each category:\n");
    for (int i = 0; i < n; i++) {
        printf("Category %d: ", i);
        scanf("%d", &stock[i]);
    }

    display(stock, n);

    char choice;
    do {
        printf("\nDo you want to update a category's stock? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            int idx, new_stock;
            printf("Enter category index to update (0 to %d): ", n - 1);
            if (scanf("%d", &idx) != 1 || idx < 0 || idx >= n) {
                printf("Invalid category index.\n");
                while (getchar() != '\n');
                continue;
            }

            printf("Enter new stock value for category %d: ", idx);
            if (scanf("%d", &new_stock) != 1 || new_stock < 0) {
                printf("Invalid stock value.\n");
                while (getchar() != '\n');
                continue;
            }

            stock[idx] = new_stock;
            printf("Category %d updated to %d.\n", idx, stock[idx]);
            display(stock, n);
        }
    } while (choice == 'y' || choice == 'Y');

    free(stock);
    stock = NULL;
    return 0;
}