#include <stdio.h>
#include <math.h>

int main() {
    float accuracy, confidence;
    int dataset_size, user_role, model_status, permissions;

    printf("=== Comprehensive AI Decision Engine ===\n");
    printf("Enter Model Accuracy (%%): ");
    scanf("%f", &accuracy);
    printf("Enter Model Confidence (%%): ");
    scanf("%f", &confidence);
    printf("Enter Dataset Size: ");
    scanf("%d", &dataset_size);
    printf("Enter User Role (1=Admin, 2=Developer, 3=Researcher): ");
    scanf("%d", &user_role);
    printf("Enter Model Status (1=Ready, 2=Testing, 3=Training): ");
    scanf("%d", &model_status);
    printf("Enter User Bitwise Permissions Value: ");
    scanf("%d", &permissions);


    int is_deploy_ready = (accuracy >= 80.0) && (confidence >= 75.0) && 
                          (dataset_size >= 1000) && (model_status == 1) && 
                          ((permissions & 8) != 0);
    float model_score = (accuracy + confidence) / 2.0;


    printf("\n--- Decision Engine Results ---\n");
    printf("Model Score: %.2f\n", model_score);
    printf("Memory Size of Engine Data structures: %lu bytes\n", sizeof(accuracy));
    
    printf("Deployment Status: %s\n", is_deploy_ready ? "READY FOR DEPLOYMENT" : "NOT READY FOR DEPLOYMENT");

    return 0;
}