#include <stdio.h>
int main()
{
    int data_used;
    float price_per_gb, basic_cost, total_cost;
    float discounted_amount, discounted_per;
    printf("enter the data used in GB:");
    scanf("%d", &data_used);
    printf("enter the price per GB:");
    scanf("%f", &price_per_gb);
    basic_cost = data_used * price_per_gb;
    if (data_used < 50)
    {
        discounted_per = 0.0;
    }
    else if (data_used >= 50 && data_used <= 99)
    {
        total_cost = basic_cost - (basic_cost * 0.05);
        discounted_per = 0.05;
    }

        else if (data_used >= 100 && data_used <= 199)
        {
            total_cost = basic_cost - (basic_cost * 0.10);
            discounted_per = 0.10;
        }
        else
    {
        discounted_per = 0.15; 
    }
        discounted_amount = basic_cost * discounted_per;
        total_cost = basic_cost - discounted_amount;

        printf("\n--- Data Usage Cost Summary ---\n");
        printf("1. Basic Cost: $%.2f\n", basic_cost);
        printf("2. Discount Amount: $%.2f\n", discounted_amount);
        printf("3. Final Cost: $%.2f\n", total_cost);
        return 0;
    }    
    