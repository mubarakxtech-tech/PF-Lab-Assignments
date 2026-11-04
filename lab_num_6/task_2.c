#include <stdio.h>
 
void withdraw(float *balance, float amount);
void deposit(float *balance, float amount);
 
int main(void)
{
    float balance = 50000.0f;   // initial balance
    int choice;
    float amount;
 
    printf("Current balance: PKR %.2f\n", balance);
    printf("Select transaction:\n1. Debit (Withdraw)\n2. Credit (Deposit)\nChoice: ");
    scanf("%d", &choice);
 
    if (choice != 1 && choice != 2)
    {
        printf("Invalid transaction type.\n");
        return 1;
    }
 
    printf("Enter amount: ");
    scanf("%f", &amount);
 
    if (amount <= 0)
    {
        printf("Amount must be positive.\n");
        return 1;
    }
 
    if (choice == 1)
        withdraw(&balance, amount);
    else
        deposit(&balance, amount);
 
    printf("Final account balance: PKR %.2f\n", balance);
    return 0;
}
 
void withdraw(float *balance, float amount)
{
    if (amount <= *balance)
    {
        *balance -= amount;
        printf("Withdrawal successful. Amount withdrawn: PKR %.2f\n", amount);
    }
    else
    {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}
 
void deposit(float *balance, float amount)
{
    *balance += amount;
    printf("Deposit successful. Updated balance: PKR %.2f\n", *balance);
}
 