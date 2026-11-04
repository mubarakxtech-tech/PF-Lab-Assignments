#include <stdio.h>
#include <ctype.h>
 
float calculateDiscount(char type, float amount);
float calculateFinalBill(float discountedAmount);
 
int main(void)
{
    char type;
    float amount;
 
    printf("Enter membership type (P = Platinum, G = Gold, S = Standard): ");
    scanf(" %c", &type);
    type = toupper(type);
 
    if (type != 'P' && type != 'G' && type != 'S')
    {
        printf("Invalid membership type.\n");
        return 1;
    }
 
    printf("Enter total shopping amount (PKR): ");
    scanf("%f", &amount);
 
    if (amount < 0)
    {
        printf("Invalid amount.\n");
        return 1;
    }
 
    float discount   = calculateDiscount(type, amount);
    float discounted = amount - discount;
    float finalBill  = calculateFinalBill(discounted);
 
    printf("\nOriginal amount   : PKR %.2f\n", amount);
    printf("Discount          : PKR %.2f\n", discount);
    printf("Discounted amount : PKR %.2f\n", discounted);
    printf("Final payable     : PKR %.2f (incl. 15%% tax and shipping)\n", finalBill);
    return 0;
}
 
// Returns the discount amount in PKR
float calculateDiscount(char type, float amount)
{
    float rate = 0.0f;
 
    if (type == 'P')      rate = 0.20f;
    else if (type == 'G') rate = 0.10f;
    else if (type == 'S') rate = 0.05f;
 
    if (amount > 10000)   // extra 2% for big carts
        rate += 0.02f;
 
    return amount * rate;
}
 
// Applies 15% tax, adds PKR 300 shipping if discounted amount <= 5000
float calculateFinalBill(float discountedAmount)
{
    float total = discountedAmount + discountedAmount * 0.15f;
 
    if (discountedAmount <= 5000)
        total += 300;
 
    return total;
}