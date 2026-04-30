/*Q5 University Course Catalog — Nested Structures
📋 Scenario
A university registrar wants to digitize its course catalog. Every course belongs to a department, and
each department has its own code and name. Use nested structures to model this relationship: an
inner Department structure is embedded inside a Course structure.
✅ Your Tasks
1. Define a struct Department with fields: deptCode (char[10]) and deptName (char[50]).
2. Define a struct Course that contains: courseCode (char[10]), courseName (char[60]),
creditHours (int), and a nested struct Department field called dept.
3. In main(), create an array of 3 Course variables, populate them with user input, and print all
details using the dot-dot notation (e.g., c.dept.deptName).
4. Write a function that accepts a department code string and prints all courses belonging to
that department.
💡 Hint: Access nested members with two dots: course.dept.deptCode. Make sure the Department struct is
declared before Course in your code.*/
#include <stdio.h>
#include <string.h>

struct Department {
    char code1[10];
    char name1[50];
};
struct Course {
    char code2[10];
    char name2[60];
    int hours;
    struct Department dept;
};

void showByDept(struct Course x[], int n, char code3[]) {
for(int i = 0; i < n; i++) {
if(strcmp(x[i].dept.code1, code3) == 0) {
printf("Course: %s (%s)\n", x[i].name2, x[i].code2);
}
}
}
int main() {
    struct Course x[3];
    for(int i = 0; i < 3; i++) {
    printf("Course Code & Name: ");
    scanf("%s %s", x[i].code2, x[i].name2);
    printf("Dept Code & Name: ");
    scanf("%s %s", x[i].dept.code1, x[i].dept.name1);
    }
    char code3[10];
    printf("\nEnter Dept Code to filter: ");
    scanf("%s", code3);
    showByDept(x, 3, code3);
    return 0;
}