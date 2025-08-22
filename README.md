# Operations using Pointers
  

This repository demonstrates the use of **pointers** in C++ through several basic programs:

- Accessing variable values using pointers  
- Performing pointer arithmetic  
- Reversing an array using pointers  
- Printing a string using character pointers  

---

## Theory

Pointers are variables that store the memory address of another variable. In C++, they are powerful tools used to:

- Directly access memory  
- Efficiently manipulate arrays and strings  
- Enable dynamic memory allocation  
- Support complex data structures like linked lists, trees, etc.  

### Key Concepts:

- `int *ptr;` → Declares a pointer to an integer  
- `ptr = &var;` → Stores the address of variable `var` in `ptr`  
- `*ptr;` → Dereferences the pointer to access the value  
- Pointer arithmetic (e.g., `ptr + 1`, `ptr2 - ptr1`) allows traversal of arrays  

---

## Algorithms

### 1. Basic Pointer Access

**Objective:** Access and print values using pointers.

**Algorithm:**
1. Declare variables of different types: int, float, char, bool.
2. Create a pointer for each type.
3. Assign each pointer the address of its respective variable using `&`.
4. Print the following for each variable:
   - The original value
   - The pointer (memory address)
   - The dereferenced value using `*ptr`
   - The actual address using `&var`

**Output:**
Integer address before increment : 0x7fff257c43ac
Integer address after increment : 0x7fff257c43b0
Boolean address before increment : 0x7fff257c43ab
Boolean address after increment : 0x7fff257c43ac
Floating address before increment: 0x7fff257c43a4
Floating address after increment : 0x7fff257c43a8
Double address before increment : 0x7fff257c4398
Double address after increment : 0x7fff257c43a0

pgsql
Copy
Edit

---

### 2. Pointer Arithmetic on Arrays

**Objective:** Perform arithmetic operations between two pointers.

**Algorithm:**
1. Declare an integer array.
2. Point `ptr1` to one element and `ptr2` to another.
3. Calculate the difference: `diff = ptr2 - ptr1` (number of elements apart).
4. Add the values pointed to by `ptr1` and `ptr2` using: `sum = *ptr1 + *ptr2`.
5. Print addresses, difference, and sum.

**Output:**
Difference of p5 & p3: 40
Addition of all pointers: 250
Product of p2 & p4: 2100

yaml
Copy
Edit

---

### 3. Reverse Array Using Pointer

**Objective:** Print an array in reverse using a pointer.

**Algorithm:**
1. Declare and initialize an array.
2. Create a pointer pointing to the last element: `ptr = &arr[n-1]`.
3. Loop from the end to the beginning:
   - Print `*ptr`
   - Decrement the pointer in each iteration (`ptr--`)

**Output:**
100 90 80 70 60 50 40 30 20 10

pgsql
Copy
Edit

---

### 4. Print String Using Pointer

**Objective:** Print a string character by character using a pointer.

**Algorithm:**
1. Declare a C-style string (character array).
2. Point a character pointer to the first character.
3. While the current character is not null (`'\0'`):
   - Print the character pointed by `*ptr`
   - Increment the pointer (`ptr++`)

**Output:**
Enter a single word: kuwait
Original string: kuwait
String printed using pointer: kuwait

yaml
Copy
Edit

---

## Conclusion

- Pointers are essential in C++ for efficient memory and data handling.
- They allow accessing and modifying values directly using memory addresses.
- Pointer arithmetic helps in efficiently traversing arrays and working with strings.
- Mastering pointers is fundamental for dynamic memory allocation, data structures, and low-level system programming.

---

## Program Overview

| Program Section                | Description                                       |
|-------------------------------|---------------------------------------------------|
| Basic Pointer Access           | Access and print values using variable pointers   |
| Pointer Arithmetic             | Use pointer math to calculate difference and sum  |
| Reverse Array Using Pointer    | Reverse traversal of an array using pointer logic |
| Print String Using Pointer     | Print characters of a string using pointer logic  |
