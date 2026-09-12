#include<stdio.h>
int main()
{
    int total_records,no_of_missing_records,no_of_duplicate_records;
    float per_of_miss_records,per_of_duplicate_records;
    printf("Enter the total number of records: ");
    scanf("%d",&total_records);
    if (total_records<=0)
    {
        printf("invalid input");
    }
    printf("Enter the number of missing records: ");
    scanf("%d",&no_of_missing_records);
    printf("Enter the number of duplicate records: ");
    scanf("%d",&no_of_duplicate_records);
    per_of_miss_records = no_of_missing_records / total_records * 100;
    per_of_duplicate_records = no_of_duplicate_records / total_records * 100;
    if (per_of_miss_records<=30){
        printf("poor quality dataset");
    }
    else if (per_of_miss_records<=30 || per_of_duplicate_records>20){
        printf("dataset requires cleaning");
    }
    else 
    printf("data set requires cleaning");
    
    return 0;
}