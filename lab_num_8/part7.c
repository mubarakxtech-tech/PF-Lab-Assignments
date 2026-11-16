#include <stdio.h>
#include <string.h>

struct HospitalRecord {
    int  recordId;
    char ward[20];
    char admissionDate[15];
    struct PatientInfo {              
        char name[40];
        int  age;
        char bloodGroup[5];
        char condition[40];
    } patient;
};

int main(void) {
    struct HospitalRecord rec;
    struct HospitalRecord *ptr = &rec;

    ptr->recordId = 5001;
    strcpy(ptr->ward, "Emergency");
    strcpy(ptr->admissionDate, "16-11-2026");
    strcpy(ptr->patient.name, "Ali Raza");
    ptr->patient.age = 45;
    strcpy(ptr->patient.bloodGroup, "B+");
    strcpy(ptr->patient.condition, "Chest pain");

    printf("Record ID     : %d\n", ptr->recordId);
    printf("Ward          : %s\n", ptr->ward);
    printf("Admitted on   : %s\n", ptr->admissionDate);
    printf("Patient Name  : %s\n", ptr->patient.name);
    printf("Age           : %d\n", ptr->patient.age);
    printf("Blood Group   : %s\n", ptr->patient.bloodGroup);
    printf("Condition     : %s\n", ptr->patient.condition);
    printf("Age (via (*ptr).patient.age): %d\n", (*ptr).patient.age);
    return 0;
}