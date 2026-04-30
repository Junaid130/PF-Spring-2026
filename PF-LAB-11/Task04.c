/*Q4 Hospital Patient Registry
📋 Scenario
A small clinic needs a simple patient record system. Each patient has a name, age, blood type (e.g.,
"A+"), patient ID, and a diagnosis note. The system must store up to 5 patients and allow the
receptionist to display all records and search for a patient by their ID.
✅ Your Tasks
1. Define a struct Patient with appropriate fields: name (char[50]), age (int), bloodType
(char[5]), patientID (int), diagnosis (char[100]).
2. In main(), declare an array of 5 Patient structures and fill them with data entered by the user using scanf/gets.
3. Write a function void displayAll(struct Patient p[], int n) that prints a neatly formatted table of
all records.
4. Write a function void searchByID(struct Patient p[], int n, int id) that prints the record
matching the given ID, or "Patient not found" if no match exists.
💡 Hint: Use strcpy() for string fields and scanf("%d", ...) for integer fields. Remember to flush the input buffer
between gets() calls using getchar().*/
#include <stdio.h>
#include <string.h>
struct Patient {
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};

void displayAll(struct Patient p[], int n) {
    printf("Name\tAge\tBlood Type\tPatient ID\tDiagnosis\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%s\t\t%d\t\t%s\n", p[i].name, p[i].age, p[i].bloodType, p[i].patientID, p[i].diagnosis);
    }
}
void searchByID(struct Patient p[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (p[i].patientID == id) {             
            printf("Name: %s\nAge: %d\nBlood Type: %s\nPatient ID: %d\nDiagnosis: %s\n", p[i].name, p[i].age, p[i].bloodType, p[i].patientID, p[i].diagnosis);
            return;
        }
    }
    printf("Patient not found\n");
}
int main() {        
    struct Patient patients[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for patient %d:\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(patients[i].name, 50, stdin);
        printf("Age: ");
        scanf("%d", &patients[i].age);
        printf("Blood Type: ");
        scanf("%s", patients[i].bloodType);
        printf("Patient ID: ");
        scanf("%d", &patients[i].patientID);
        getchar();
        printf("Diagnosis: ");
        fgets(patients[i].diagnosis, 100, stdin);
    }
    displayAll(patients, 5);
    int searchID;
    printf("Enter patient ID to search: ");
    scanf("%d", &searchID);
    searchByID(patients, 5, searchID);
    return 0;
}