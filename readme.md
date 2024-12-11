# CIS3250 Legacy Calculator

## Project Overview

This **Legacy Calculator Project** implements a versatile calculator with three main modes: **Regular**, **Scientific**, and **Accountant** calculators. The program includes user-friendly **help** and **notice** sections for guidance. A key highlight is the robust error handling, such as managing division by zero gracefully. Additionally, extensive test cases were implemented using the **Unity Test Framework**, covering expected and unexpected inputs via **Boundary Analysis**, **Data Flow Testing**, and **Structured Basis Testing**. This project demonstrates efficient error handling, and comprehensive testing for a legacy codebase.

### Last Update

**Date**: November 22, 2024

### Team Contributions

- Jacob Good, Huraimah Fatima, Cavan Chung, Daman Kumar, Yash Tandon, Duaa Imran

---

## Calculator Modes and Functionalities

### 1. Regular Calculator

The Regular Calculator provides essential arithmetic operations:

- **Addition (`+`)**
- **Subtraction (`-`)**
- **Multiplication (`*`)**
- **Division (`/`)**

### 2. Scientific Calculator

The Scientific Calculator includes advanced mathematical functions:

- **Power**: Calculates the power of a number.
- **Factorial**: Computes the factorial of a number.
- **Fibonacci**: Generates Fibonacci sequence numbers.
- **Trigonometric Functions**: Includes sine, cosine, tangent, cosecant, secant, and cotangent.
- **Matrix Operations**: Supports matrix manipulations.
- **Conversions**: Converts between units or numerical bases.
- **Square Root and Cube Root**: Calculates square and cube roots using the math library.

### 3. Accountant Calculator

The Accountant Calculator processes sets of values to produce statistical metrics:

- **Max**: Finds the maximum value.
- **Min**: Finds the minimum value.
- **Mean (x-bar)**: Calculates the average of the values.
- **Range**: Determines the range (difference between max and min).
- **Median**: Computes the median value.
- **Mode**: Finds the most frequent value.

### 4. Help and Notice

Displays helpful information on calculator use, guidance on available functions, and any important notices for users. Recommended User_helping.txt

---

## Additional Features and Testing

### 1. **Harness Code**

The project includes a **harness code** built using the **Unity Test Framework**. This code automates the testing process by running the calculator with a series of predefined inputs and checking the outputs against expected results. It covers a wide range of scenarios, including:

- Valid inputs for different modes (Regular, Scientific, Accountant).
- Invalid inputs to test error handling and robustness.
- Edge cases, such as division by zero or the largest matrix size allowed.

The harness code ensures all functionalities of the calculator work correctly and consistently under various conditions. The tests can be executed seamlessly as part of the project workflow.

### 2. **Test Cases**

Test cases were implemented using **Boundary Analysis**, **Data Flow Testing**, and **Structured Basis Testing** to validate the functionality and ensure the reliability of the calculator.

---

## Files Summary

- **`cis329-legacy-calculator.c`**: Displays menus and implements basic calculator functions.
- **`conversions.h`**: Contains unit and base conversion functions.
- **`factorial.h`**: Provides functions for factorial calculations.
- **`matrices.h`**: Implements matrix creation and manipulation.
- **`powerfunction.h`**: Contains power calculation functions.
- **`TestCode.c`**: Implements automated testing of the calculator functions using Unity.
- **`TestCodeRunner.c`**: main entry point for executing all unit tests, managing test lifecycle and summarizing test results.
- **`Unity.c`**: Implements test management and asserts in the Unity testing framework.
- **`Unity.h`**: Unity testing framework's interface for assertions and test management.
- **`codeUnderTest.h`**: Includes the functions that need to be tested
- **`Unit Testing Summary Report`**: Includes all the implemented test cases

---

## Compilation and Execution

### Clone the Repository

#### Clone Using HTTPS

    git clone https://github.com/damnnDaman/Legacy_Calculator_Project.git

#### Navigate to Assignment5 folder

    cd Legacy_Calculator_Project

#### Compile

    make

#### Compile for Test code

    make test

#### Run the calculator

    ./calculator

#### Run the test cases

    ./test
