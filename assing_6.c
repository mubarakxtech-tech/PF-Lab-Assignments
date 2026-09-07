#include <stdio.h>

int main() {
    char name[20], grade;
    int age;
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Grade: ");
    scanf(" %c", &grade); 
    printf("\nWelcome to \"C Programming\"\n\n");
    printf("Name:\t%s\n", name);
    printf("Age:\t%d\n", age);
    printf("Grade:\t%c\n\n", grade);
    printf("File Path:\tC:\\Users\\Student\n");

    return 0;
}