#include <stdio.h>

int main() {
    float prog, math, ai, attendance, average;

    printf("=== University AI Student Evaluation System ===\n");
    printf("Enter Programming marks (0-100): ");
    scanf("%f", &prog);
    printf("Enter Mathematics marks (0-100): ");
    scanf("%f", &math);
    printf("Enter AI marks (0-100): ");
    scanf("%f", &ai);
    printf("Enter Attendance percentage (0-100): ");
    scanf("%f", &attendance);

    
    if (prog >= 50.0 && math >= 50.0 && ai >= 50.0 && attendance >= 75.0) {
        average = (prog + math + ai) / 3.0;
        printf("\nStatus: Eligible\n");
        printf("Average Marks: %.2f\n", average);
        
        printf("Performance Classification: ");
        if (average >= 80.0) {
            printf("Excellent\n");
        } else if (average >= 70.0) {
            printf("Very Good\n");
        } else if (average >= 60.0) {
            printf("Good\n");
        } else if (average >= 50.0) {
            printf("Satisfactory\n");
        } else {
            printf("Poor\n");
        }
    } else {
        printf("\nStudent is Not Eligible\n");
    }

    return 0;
}