#include <stdio.h>

int main() {
    char student_names[3][50];
    int marks[3][3];
    float averages[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter full name of student %d: ", i + 1);
        scanf(" %[^\n]", student_names[i]);

        int sum = 0;
        printf("Enter 3 subject marks for %s:\n", student_names[i]);
        for (int j = 0; j < 3; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            sum += marks[i][j];
        }
        averages[i] = sum / 3.0f;
    }

    printf("\n================ STUDENT REPORT ================\n");
    for (int i = 0; i < 3; i++) {
        printf("Student: %-25s | Average: %.2f\n", student_names[i], averages[i]);
    }
    printf("================================================\n");

    return 0;
}