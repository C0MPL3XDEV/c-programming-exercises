# C Programming Exercises

This repository contains a collection of **C programming exercises** developed while studying for the **Procedural Programming 1** course at the **University of Molise (UniMol)**.

The goal of this repository is to practice and consolidate the core concepts of **procedural programming in C**, following an academic-first approach while maintaining clean and readable code.

---
## 📚 Topics Covered

The exercises cover the main topics of the course, including:

- C program structure and build basics
  - `#include`, headers, prototypes, `main`, compilation workflow
- Variables, data types, and operators
  - `int`, `char`, `float`, `double`, casting, `sizeof`
  - arithmetic, relational, logical, bitwise (when applicable)
- Input/Output
  - `printf`/`scanf` format specifiers, precision/width formatting
  - safer input patterns where applicable
- Control structures
  - `if/else`, `switch`, loops (`for`, `while`, `do...while`)
- Functions
  - parameters, return values, scope, modular design
  - recursion (base case + recursive step)
- Arrays (one-dimensional)
  - traversal, aggregation, min/max, shifting/rotations
  - basic algorithmic patterns on arrays
- Strings and character arrays
  - null-terminated strings (`'\0'`)
  - input handling, `string.h` utilities (`strlen`, `strcmp`, `strcpy`, `strcat`)
  - common string problems (palindromes, reversal, validation)
- Matrices (two-dimensional arrays)
  - row/column traversal, diagonals, row-major memory layout
  - typical matrix tasks (row/column sums, max per row, etc.)
- Searching algorithms
  - linear search (unsorted / early-stop on sorted arrays)
  - binary search (sorted arrays)
- Sorting algorithms
  - Selection Sort
  - Bubble Sort (including optimized early-stop version)
- Pointers
  - addresses and dereferencing (`&`, `*`)
  - pointers and arrays relationship
  - pointer arithmetic
  - passing by reference via pointers (functions that modify data)
- Function pointers (when applicable)
  - basic callbacks (e.g., apply a function to each element)
  - simple dispatch tables
- User-defined types
  - `struct` (data modeling, arrays of structs, passing structs to functions)
  - `enum` (named constants, readable state/option handling)

---

## 🗂️ Repository Structure

```
.
├── basics/                 # Introductory exercises (syntax, I/O, control flow)
├── arrays/                 # One-dimensional array exercises
├── strings/                # String manipulation and character arrays
├── matrices/               # Two-dimensional arrays (matrices)
├── searching-algorithms/   # Linear and binary search algorithms
├── sorting-algorithms/     # Selection sort, bubble sort
├── pointers/               # Pointers fundamentals and pointer arithmetic
├── function-pointers/      # Function pointers and basic callbacks
├── structs/                # Structs and arrays of structs
├── enums/                  # Enumerations and symbolic constants
├── recursion/              # Recursive algorithms
└── README.md
```

> The structure may evolve as new exercises are added.

---

## ⚙️ How to Compile and Run

All programs are written in standard **C (C11)**.

To compile a file:

```bash
gcc program.c -o program
