#include <stdio.h>

/** ------------------- Exercise 1 - Struct -----------------------
 * Write a C program that:
 *  - Define a struct called Student with:
 *      - id
 *      - grande
 *  - Read N students
 *  - Print the student with max grade
 *  - Calculate the Total average of the struct array
 */

typedef struct {
    int id;
    float grade;
} Student;

int main() {

    int howManyStudents = 0;

    do {
        printf("How many students do you want register?: ");
        scanf("%d", &howManyStudents);
        if (howManyStudents <= 0) {
            printf("Invalid number of students!");
        }
    } while (howManyStudents <= 0);

    // How to access and declare a single student:
    // Student s; --> declare a var with Type Student, so with the data of the struct
    // s.<name-property> --> this is the method to access to a property of the struct instance
    //
    // For an array of struct we use: Student students[<dimension>];

    // Array of structs Student
    Student students[howManyStudents];

    // Fill the array of structs
    for (int i = 0; i < howManyStudents; i++) {
        printf("Insert student %d ID: ", i + 1);
        scanf("%d", &students[i].id);

        printf("Insert student %d grande: ", i + 1);
        scanf("%f", &students[i].grade);
    }

    // Print the array of structs:
    printf("STUDENTS REGISTERED:\n\n");

    for (int i = 0; i < howManyStudents; i++) {
        printf("Student %d: ID = %d, Grade = %.2f\n", i + 1, students[i].id, students[i].grade);
        printf("--------------------------------------------\n");
    }

    float maxGrade = students[0].grade;
    int maxIndex = 0;

    // Find the student with max grande
    for (int i = 0; i < howManyStudents; i++) {
        if (students[i].grade > maxGrade) {
            maxGrade = students[i].grade;
            maxIndex = i;
        }
    }

    float totalSumOfGrande = 0;

    for (int i = 0; i < howManyStudents; i++) {
        totalSumOfGrande += students[i].grade;
    }

    printf("\nThe Student with the max grande is: Student %d, ID = %d, Grade = %.2f\n", maxIndex + 1,
           students[maxIndex].id, students[maxIndex].grade);

    printf("The total average of the Students are: %.2f\n", totalSumOfGrande / (float)howManyStudents);
    return 0;
}