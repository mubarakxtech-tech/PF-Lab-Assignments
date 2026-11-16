#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char name[50];
    int accNo;
    float amount;
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Enter account number: ");
    scanf("%d", &accNo);
    printf("Enter amount: ");
    scanf("%f", &amount);
    FILE *file = fopen("accouns.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }   
    fprintf(file,"%s %d %.2f\n", name, accNo, amount);
    fclose(file);
    prinf("Account information saved successfully.\n");
    return 0;
}