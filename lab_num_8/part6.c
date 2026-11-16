#include <stdio.h>

struct Address {
    char City[30];
    int  ZipCode;
    char State[30];
};

struct Student {
    int   RollNo;
    char  Name[50];
    float CGPA;
    struct Address studentAddress;   /* nested member */
};

int main(void) {
    struct Student student1 = {26017, "Mubarak", 3.50f, {"Karachi", 75030, "Sindh"}};

    printf("Roll No : %d\n", student1.RollNo);
    printf("Name    : %s\n", student1.Name);
    printf("CGPA    : %.2f\n", student1.CGPA);
    printf("City    : %s\n", student1.studentAddress.City);
    printf("Zip Code: %d\n", student1.studentAddress.ZipCode);
    printf("State   : %s\n", student1.studentAddress.State);
    return 0;
}