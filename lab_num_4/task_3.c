#include<stdio.h>
int main() {
    int status, present_count = 0;
    int total_students = 15;//assuming there are 15 students in the class 
    
    for (int i = 1; i <= total_students; i++) {
        printf("Enter attendance for student %d (1 for present, 0 for absent): ", i);
        scanf("%d", &status);
        if (status == 1) {
            present_count++;
        }
    }
    
    int absent_count = total_students - present_count;
    printf("Total Present Students: %d\n", present_count);
    printf("Total Absent Students: %d\n", absent_count);
    return 0;
}
    
