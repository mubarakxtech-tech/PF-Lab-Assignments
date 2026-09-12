#include<stdio.h>
int main()
{
    int data_used,price_per_gb,basic_cost,total_cost;
    printf("enter the data used in GB:");
    scanf("%d",&data_used); 
    printf("enter the price per GB:");
    scanf("%d",&price_per_gb);
    basic_cost = data_used * price_per_gb;
    printf("basic cost is %d",basic_cost);
    if (data_used<50)
   printf("basic cost is %d\n",basic_cost);
    else if (data_used>=50 && data_used<=100)
    {
        total_cost = basic_cost - (basic_cost * 0.5);
        printf("\ntotal cost is %d",total_cost);
    }
    else if (data_used>100)
    {
        total_cost = basic_cost - (basic_cost * 0.10);
        printf("total cost is %d",total_cost);
    }
    return 0;
}