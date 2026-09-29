#include <stdio.h>

int main() {
    int main_choice, sub_choice;

    printf("=== AI Image Classification System ===\n");
    printf("Select Category:\n");
    printf("1. Animal\n2. Vehicle\n3. Food\n4. Human\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &main_choice);

    switch (main_choice) {
        case 1:
            printf("\n--- Animal Subcategories ---\n");
            printf("1. Cat\n2. Dog\n3. Bird\n");
            printf("Select subcategory: ");
            scanf("%d", &sub_choice);
            switch (sub_choice) {
                case 1: printf("Selected: Animal -> Cat\n"); break;
                case 2: printf("Selected: Animal -> Dog\n"); break;
                case 3: printf("Selected: Animal -> Bird\n"); break;
                default: printf("Invalid subcategory!\n");
            }
            break;
        case 2:
            printf("\n--- Vehicle Subcategories ---\n");
            printf("1. Car\n2. Bus\n3. Bike\n");
            printf("Select subcategory: ");
            scanf("%d", &sub_choice);
            switch (sub_choice) {
                case 1: printf("Selected: Vehicle -> Car\n"); break;
                case 2: printf("Selected: Vehicle -> Bus\n"); break;
                case 3: printf("Selected: Vehicle -> Bike\n"); break;
                default: printf("Invalid subcategory!\n");
            }
            break;
        case 3:
            printf("\n--- Food Subcategories ---\n");
            printf("1. Pizza\n2. Burger\n3. Biryani\n");
            printf("Select subcategory: ");
            scanf("%d", &sub_choice);
            switch (sub_choice) {
                case 1: printf("Selected: Food -> Pizza\n"); break;
                case 2: printf("Selected: Food -> Burger\n"); break;
                case 3: printf("Selected: Food -> Biryani\n"); break;
                default: printf("Invalid subcategory!\n");
            }
            break;
        case 4:
            printf("\n--- Human Subcategories ---\n");
            printf("1. Male\n2. Female\n3. Child\n");
            printf("Select subcategory: ");
            scanf("%d", &sub_choice);
            switch (sub_choice) {
                case 1: printf("Selected: Human -> Male\n"); break;
                case 2: printf("Selected: Human -> Female\n"); break;
                case 3: printf("Selected: Human -> Child\n"); break;
                default: printf("Invalid subcategory!\n");
            }
            break;
        default:
            printf("Invalid main category selection!\n");
    }

    return 0;
}