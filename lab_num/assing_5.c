#include <stdio.h>

int main() {
    
    char name1[20], grade1;
    int age1;
    char name2[20], grade2;
    int age2;
    char name3[20], grade3;
    int age3;
    printf("Enter details for Student 1 (Name Age Grade): ");
    scanf("%s %d %c", name1, &age1, &grade1);
    printf("Enter details for Student 2 (Name Age Grade): ");
    scanf("%s %d %c", name2, &age2, &grade2);
    printf("Enter details for Student 3 (Name Age Grade): ");
    scanf("%s %d %c", name3, &age3, &grade3);
    printf("\nName\tAge\tGrade\n");
    printf("%s\t%d\t%c\n", name1, age1, grade1);
    printf("%s\t%d\t%c\n", name2, age2, grade2);
    printf("%s\t%d\t%c\n", name3, age3, grade3);
    return 0;
}