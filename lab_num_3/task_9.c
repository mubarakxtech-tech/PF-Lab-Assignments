#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num, base, exponent;

    printf("=== AI Mathematical Operations Calculator ===\n");
    printf("1. Square Root\n2. Power\n3. Absolute Value\n4. Floor\n5. Ceiling\n");
    printf("Enter choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a non-negative number: ");
            scanf("%lf", &num);
            if (num >= 0) {
                printf("Square Root = %.4f\n", sqrt(num));
            } else {
                printf("Invalid Input: Square root of a negative number is undefined in real domain.\n");
            }
            break;
        case 2:
            printf("Enter base: ");
            scanf("%lf", &base);
            printf("Enter exponent: ");
            scanf("%lf", &exponent);
            printf("Result (Base^Exponent) = %.4f\n", pow(base, exponent));
            break;
        case 3:
            printf("Enter any number: ");
            scanf("%lf", &num);
            printf("Absolute Value = %.4f\n", fabs(num));
            break;
        case 4:
            printf("Enter any number: ");
            scanf("%lf", &num);
            printf("Floor Value = %.4f\n", floor(num));
            break;
        case 5:
            printf("Enter any number: ");
            scanf("%lf", &num);
            printf("Ceiling Value = %.4f\n", ceil(num));
            break;
        default:
            printf("Invalid menu choice!\n");
    }

    return 0;
}