#include <stdio.h>
#include <string.h>

// Description:
// This program defines a structure `Student` which represents a student's name and GPA.
// It then initializes four `Student` structs with different names and GPAs. These student
// records are stored in an array called `students`. The program then iterates over this
// array, printing out each student's name and GPA using `printf()`. Finally, the program
// returns 0 to indicate successful execution.

struct Student {
    char name[20];
    float gpa;
};

int main() {
    struct Student student1 = {"Linda", 3.7};
    struct Student student2 = {"Karl", 2.8};
    struct Student student3 = {"Sonia", 4.0};
    struct Student student4 = {"Frank", 1.4};

    struct Student students[] = {student1, student2, student3, student4};

    int size = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < size; i++) {
        printf("%s %.1f \n", students[i].name, students[i].gpa);
    }

    return 0;
}
