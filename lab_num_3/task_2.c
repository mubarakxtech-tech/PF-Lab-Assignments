#include <stdio.h>

int main() {
    int age, credit_score, existing_loan;
    float income;

    printf("=== AI Financial Loan Evaluation System ===\n");
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Monthly Income: ");
    scanf("%f", &income);
    printf("Enter Credit Score: ");
    scanf("%d", &credit_score);
    printf("Existing Loan Status (1 for Yes, 0 for No): ");
    scanf("%d", &existing_loan);

    if (age >= 21) {
        if (income >= 100000 && credit_score >= 750 && existing_loan == 0) {
            printf("Result: High Approval Chance\n");
        } else if (income >= 75000 && credit_score >= 650 && existing_loan == 1) {
            printf("Result: Manual Review Required\n");
        } else if (income >= 50000 && credit_score >= 600) {
            printf("Result: Possibly Eligible\n");
        } else {
            printf("Result: Rejected\n");
        }
    } else {
        printf("Result: Rejected (Age requirement not met)\n");
    }

    return 0;
}