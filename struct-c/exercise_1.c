#include <stdio.h>

/** ------------------- Exercise - Struct (Students) -----------------------
 *
 * This program demonstrates how to use STRUCTS in C.
 *
 * A struct allows grouping different variables (possibly of different types)
 * under a single name. It is used to represent a real-world entity.
 *
 * In this example, a Student is described by:
 *  - an id (int)
 *  - a grade (float)
 *
 * The program:
 *  - reads N students
 *  - stores them in an array of struct
 *  - finds the student with the maximum grade
 *  - computes the average grade of all students
 */

/**
 * Definition of the struct Student.
 *
 * typedef is used so that we can write:
 *   Student s;
 * instead of:
 *   struct Student s;
 *
 * Each Student contains two fields:
 *  - id: student identifier
 *  - grade: student grade
 */
typedef struct {
    int id;
    float grade;
} Student;

int main() {

    int howManyStudents = 0;

    // Read how many students will be registered.
    // The number must be positive.
    do {
        printf("How many students do you want register?: ");
        scanf("%d", &howManyStudents);

        if (howManyStudents <= 0) {
            printf("Invalid number of students!\n");
        }
    } while (howManyStudents <= 0);

    /**
     * ARRAY OF STRUCTS
     *
     * This declares an array where each element is a Student.
     * It works exactly like an array of int or float, but each element
     * contains multiple fields.
     *
     * students[i]        -> one Student
     * students[i].id     -> id field of the i-th student
     * students[i].grade  -> grade field of the i-th student
     */

    // How to access and declare a single student:
    // Student s; --> declare a var with Type Student, so with the data of the struct
    // s.<name-property> --> this is the method to access to a property of the struct instance
    //
    // For an array of struct we use: Student students[<dimension>];

    Student students[howManyStudents];

    // ---------------- Fill the array of structs ----------------
    //
    // We use a loop to read the data for each student.
    // For every index i:
    //  - students[i] is a Student
    //  - students[i].id accesses the id field
    //  - students[i].grade accesses the grade field
    for (int i = 0; i < howManyStudents; i++) {
        printf("Insert student %d ID: ", i + 1);
        scanf("%d", &students[i].id);

        printf("Insert student %d grade: ", i + 1);
        scanf("%f", &students[i].grade);
    }

    // ---------------- Print all students ----------------
    //
    // This loop simply reads the struct fields and prints them.
    printf("\nSTUDENTS REGISTERED:\n\n");

    for (int i = 0; i < howManyStudents; i++) {
        printf("Student %d: ID = %d, Grade = %.2f\n",
               i + 1, students[i].id, students[i].grade);
        printf("--------------------------------------------\n");
    }

    // ---------------- Find the student with maximum grade ----------------
    //
    // Strategy:
    // 1. Assume the first student has the maximum grade
    // 2. Compare all other students with the current maximum
    // 3. Update maxGrade and maxIndex when a higher grade is found
    float maxGrade = students[0].grade;
    int maxIndex = 0;

    for (int i = 1; i < howManyStudents; i++) {
        if (students[i].grade > maxGrade) {
            maxGrade = students[i].grade;
            maxIndex = i;
        }
    }

    // ---------------- Compute the average grade ----------------
    //
    // Sum all grades and divide by the number of students.
    float totalSumOfGrade = 0;

    for (int i = 0; i < howManyStudents; i++) {
        totalSumOfGrade += students[i].grade;
    }

    // ---------------- Print results ----------------
    printf("\nThe student with the max grade is:\n");
    printf("Student %d: ID = %d, Grade = %.2f\n",
           maxIndex + 1,
           students[maxIndex].id,
           students[maxIndex].grade);

    printf("The average grade of all students is: %.2f\n",
           totalSumOfGrade / (float) howManyStudents);

    return 0;
}