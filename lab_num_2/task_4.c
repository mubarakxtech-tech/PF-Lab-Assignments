#include<stdio.h>
#include <stdbool.h>
int main()
{
    float model_accuracy;//percentage
    int predict_latency;//standard unit for time is milli seconds
    bool model_approval_status;
    printf("Enter the model approval status (1 for approved, 0 for not approved): ");
    scanf("%d",&model_approval_status);
    if(model_approval_status != 0 && model_approval_status != 1)
    {
        printf("Invalid input for model approval status");
         printf("\nEnter the correct model approval status (1 for approved, 0 for not approved): ");
    scanf("%d",&model_approval_status);
    if(model_approval_status != 0 && model_approval_status != 1){
        printf("multiple invalid input not allowed");
        return 0;
    }
    }
    if (model_approval_status == true)
    {
        printf("Enter the model accuracy: ");
        scanf("%f",&model_accuracy);
        printf("Enter the prediction latency: ");
        scanf("%d",&predict_latency);
        printf("\nModel Accuracy: %.2f%%\n", model_accuracy);
        printf("Prediction Latency: %d ms\n", predict_latency);
        if (model_accuracy>=90 && predict_latency<=100)
        {
            printf("Model is approved for deployment");
        }
        else
        {
            printf("Model is not approved for deployment");
        }
        if (model_accuracy<90)
        printf("\ncan't be deployed due to low accuracy");
        if (predict_latency>100)
            printf("\ncan't be deployed due to high latency");
        
    }
    else
    {
        printf("Model is not approved for deployment");
    }
    return 0;
}