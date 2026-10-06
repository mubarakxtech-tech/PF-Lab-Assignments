# C Programming Lab Assignments (PF-Lab)

This repository contains my weekly lab tasks and programming assignments for Programming Fundamentals (PF). All programs are written in standard C.

## Lab 1 Assignments Overview

| Assignment | File Path | Description |
| :--- | :--- | :--- |
| Assignment 1 | `lab_num/assing_1.c` | Basic print statements and console output |
| Assignment 2 | `lab_num/assing_2.c` | User input handling and arithmetic operations |
| Assignment 3 | `lab_num/assing_3.c` | Data types and formatted variable output |
| Assignment 4 | `lab_num/assing_4.c` | Student data table formatted with `\t` escape sequences |
| Assignment 5 | `lab_num/assing_5.c` | Formatting text using `\n`, `\t`, `\\`, and `\"` escape sequences |
| Assignment 6 | `lab_num/assing_6.c` | Formatted user profile display with custom file paths |
| Assignment 7 | `lab_num/assing_7.c` | Reading and displaying a single character |
| Assignment 8 | `lab_num/assing_8.c` | Reading full names including spaces |
| Assignment 9 | `lab_num/assing_9.c` | Product invoice with price formatted to 2 decimal places |
| Assignment 10 | `lab_num/assing_10.c` | Formatted student report displaying height and CGPA |

## Lab 2 Assignments Overview

| Assignment | File Path | Description |
| :--- | :--- | :--- |
| Assignment 1 | `lab_num_2/task_1.c` | Greatest of three numbers with equality handling |
| Assignment 2 | `lab_num_2/task_2.c` | AI confidence score classifier (0-100 ranges) |
| Assignment 3 | `lab_num_2/task_3.c` | Dataset quality checker for missing and duplicate records |
| Assignment 4 | `lab_num_2/task_4.c` | AI model deployment checker based on accuracy, latency, and approval |
| Assignment 5 | `lab_num_2/task_5.c` | Access-control system for roles (Admin, Researcher, Student) and security levels |
| Assignment 6 | `lab_num_2/task_6.c` | Autonomous robot sensor logic for obstacles, people, and battery |
| Assignment 7 | `lab_num_2/task_7.c` | Monthly data usage and tiered discount calculator |

## Setup & Execution

To compile and run any assignment using GCC in PowerShell:

```bash
gcc <folder_name>/<filename.c> -o <output_name>
./<output_name>
# Lab 3 Assignments Overview

| Assignment | File Path | Description |
| :--- | :--- | :--- |
| Assignment 1 | `lab_num_3/task_1.c` | University student performance evaluator based on subject marks and attendance. |
| Assignment 2 | `lab_num_3/task_2.c` | Financial loan evaluation system using nested decision rules and thresholds. |
| Assignment 3 | `lab_num_3/task_3.c` | Image classification menu system utilizing nested switch-case structures. |
| Assignment 4 | `lab_num_3/task_4.c` | Rule-based AI chatbot providing structured conversation categories. |
| Assignment 5 | `lab_num_3/task_5.c` | Smart security system access control using logical operators and ternary checks. |
| Assignment 6 | `lab_num_3/task_6.c` | Machine learning technique and algorithm selector via nested switch statements. |
| Assignment 7 | `lab_num_3/task_7.c` | AI model confidence score classifier and acceptance validator. |
| Assignment 8 | `lab_num_3/task_8.c` | Bitwise permissions controller for model operations (View, Train, Test, Deploy). |
| Assignment 9 | `lab_num_3/task_9.c` | Advanced mathematical operations calculator using `math.h` and error handling. |
| Assignment 10 | `lab_num_3/task_num_10.c` | Comprehensive AI decision engine integrating metrics, roles, and bitwise flags. |

## Setup & Execution

To compile and run any assignment using GCC in PowerShell:

```powershell
# Navigate into the lab folder
cd lab_num_3

# Compile standard programs (Assignments 1 to 8)
gcc task_1.c -o task_1
.\task_1.exe

# Compile math-dependent programs (Assignments 9 and 10)
gcc task_9.c -o task_9 -lm
.\task_9.exe
# Programming Fundamentals (PF) - Lab 06
**National University of Computer and Emerging Sciences (FAST-NUCES)**

This repository contains the completed lab tasks for **Lab 06: Introduction to Iterative Structures (Loops) and 1D Arrays**[cite: 1].

---

## 📋 Lab Objectives & Topics Covered
* **Control Flow & Loops**: Automating repetitive tasks using `for`, `while`, and `do-while` loops[cite: 1].
* **Dynamic Input & Digit Manipulation**: Processing individual digits using modulus (`%`) and division (`/`) operators[cite: 1].
* **1D Arrays & Character Arrays**: Declaring, traversing, modifying, searching, inserting, and deleting elements in arrays[cite: 1].

---

## 📝 Lab Tasks Overview

| Task | Description | Core Concept |
| :--- | :--- | :--- |
| **Q1** | Verify if the sum of digits of a 4-digit PIN is greater than 10 (Strong vs. Weak PIN)[cite: 1]. | `while` loop, digit extraction |
| **Q2** | Reverse ticket numbers entered by the user[cite: 1]. | `while` loop, math accumulation |
| **Q3** | Count present and absent students out of 15 attendees[cite: 1]. | `for` loop, conditional counting |
| **Q4** | Check whether a library book code number is a palindrome[cite: 1]. | Number reversal comparison |
| **Q5** | Print the $n$-th Catalan number using a sequence formula[cite: 1]. | Iterative calculation |
| **Q6** | Count even and odd digits in electricity meter readings[cite: 1]. | Modulo check per digit |
| **Q7** | Print an LED banner shaped like a hollow diamond[cite: 1]. | Nested loops, boundary logic |
| **Q8** | Comprehensive 1D array management (Min/Max, Search, Insertion, Deletion)[cite: 1]. | Array manipulation algorithms |
| **Q9** | Character array word analysis (Length, Reverse, Palindrome, Vowel/Consonant count)[cite: 1]. | Strings / Char arrays |

---

## ⚙️ How to Compile and Run

Make sure you have GCC installed. Open your terminal in the respective lab folder and run:

```bash
# To compile a specific task (e.g., task_1.c)
gcc task_1.c -o task_1

# To execute on Windows (PowerShell / Command Prompt)
.\task_1.exe

# To execute on Linux / macOS
./task_1