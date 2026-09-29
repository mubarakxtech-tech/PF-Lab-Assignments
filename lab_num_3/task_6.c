#include <stdio.h>

int main() {
    int prob_type, algo_choice;

    printf("=== ML Technique Selection System ===\n");
    printf("Select Problem Type:\n");
    printf("1. Classification\n2. Regression\n3. Clustering\n4. Computer Vision\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &prob_type);

    switch (prob_type) {
        case 1:
            printf("1. Logistic Regression\n2. Decision Tree\n3. KNN\nSelect algorithm: ");
            scanf("%d", &algo_choice);
            switch(algo_choice) {
                case 1: printf("Selected: Logistic Regression\n"); break;
                case 2: printf("Selected: Decision Tree\n"); break;
                case 3: printf("Selected: KNN\n"); break;
                default: printf("Invalid algorithm choice.\n");
            }
            break;
        case 2:
            printf("1. Linear Regression\n2. Polynomial Regression\n3. SVR\nSelect algorithm: ");
            scanf("%d", &algo_choice);
            switch(algo_choice) {
                case 1: printf("Selected: Linear Regression\n"); break;
                case 2: printf("Selected: Polynomial Regression\n"); break;
                case 3: printf("Selected: SVR\n"); break;
                default: printf("Invalid algorithm choice.\n");
            }
            break;
        case 3:
            printf("1. K-Means\n2. Hierarchical Clustering\n3. DBSCAN\nSelect algorithm: ");
            scanf("%d", &algo_choice);
            switch(algo_choice) {
                case 1: printf("Selected: K-Means\n"); break;
                case 2: printf("Selected: Hierarchical Clustering\n"); break;
                case 3: printf("Selected: DBSCAN\n"); break;
                default: printf("Invalid algorithm choice.\n");
            }
            break;
        case 4:
            printf("1. CNN\n2. YOLO\n3. R-CNN\nSelect algorithm: ");
            scanf("%d", &algo_choice);
            switch(algo_choice) {
                case 1: printf("Selected: CNN\n"); break;
                case 2: printf("Selected: YOLO\n"); break;
                case 3: printf("Selected: R-CNN\n"); break;
                default: printf("Invalid algorithm choice.\n");
            }
            break;
        default:
            printf("Invalid problem type selection.\n");
    }

    return 0;
}