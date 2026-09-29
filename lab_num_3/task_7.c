#include <stdio.h>

int main() {
    float confidence, threshold;

    printf("=== AI Prediction Confidence Evaluator ===\n");
    printf("Enter model confidence (0-100%%): ");
    scanf("%f", &confidence);
    printf("Enter required confidence threshold (0-100%%): ");
    scanf("%f", &threshold);

    printf("\nConfidence Classification: ");
    if (confidence >= 90.0) {
        printf("Very High\n");
    } else if (confidence >= 75.0) {
        printf("High\n");
    } else if (confidence >= 50.0) {
        printf("Moderate\n");
    } else {
        printf("Low\n");
    }

    if (confidence >= threshold && confidence >= 50.0) {
        printf("Prediction Status: Accepted\n");
    } else {
        printf("Prediction Status: Rejected / Below Threshold\n");
    }

    return 0;
}