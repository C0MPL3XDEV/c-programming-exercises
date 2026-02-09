#include <stdio.h>

// ------------- Exercise 6 -------------
// Create a menu with switch and if instruction.

// --------------- SWITCH INSTRUCTION ---------
// Switch instruction is used to select different cases of an integer or char value

// Prototype Functions
int sum(int a, int b);
int subtract(int a, int b);
int product(int a, int b);
float division(int a, int b);

int main() {
    int choice;
    printf("1. Sum\n2. Division\n3. Subtraction\n4. Product\n0. Exit\nChoice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("Invalid choice");
    }

    // Switch to create a CLI Menu;

    switch (choice) {
        case 1:
            printf("Sum Option: ");
            int a, b, result;
            scanf("%d %d", &a, &b);
            result = sum(a, b);
            printf("Summation Result: %d", result);
            break;
        case 2:
            printf("Division Option: ");
            float divisionResult;
            scanf("%d %d", &a, &b);
            divisionResult = division(a, b);
            printf("Division Result: %f", divisionResult);
            break;
        case 3:
            printf("Subtraction Option: ");
            scanf("%d %d", &a, &b);
            result = subtract(a, b);
            printf("Subtraction Result: %d", result);
            break;
        case 4:
            printf("Product Option: ");
            scanf("%d %d", &a, &b);
            result = product(a, b);
            printf("Product Result: %d", result);
            break;
    }

    // Switch with fall-through
    // In this case the print is AB because in the case1 dont have a break so fall in the case2

    int x = 1;
    switch (x) {
        case 1:
            printf("A");
        case 2:
            printf("B");
            break;
       case 3:
            printf("C");
    }

    return 0;
}

// Functions Bodies
int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return a / b;
}