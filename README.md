# Data Structures & Algorithms Assignment (C Implementations)

This repository contains the C programming implementations for my Data Structures assignment, covering queues, recursion, sparse matrices, and double-ended queues (deques).

## Repository Contents

| File | Question | Description |
| :--- | :--- | :--- |
| `q1_circular_queue.c` | **Q1** | Array-based implementation of a Circular Queue supporting `enqueue`, `dequeue`, and `display` operations. |
| `q4_recursion.c` | **Q4** | Recursive solutions for finding the sum of $N$ natural numbers, factorial of a number, $N\text{th}$ Fibonacci term, and printing the Fibonacci series. |
| `q5_linear_queue.c` | **Q5** | Standard Linear Queue implementation demonstrating basic `enqueue` and `dequeue` operations. |
| `q6_sparse_matrix.c` | **Q6** | Representation of a sparse matrix using a 2D array in standard 3-tuple (`Row`, `Column`, `Value`) format. |
| `q7_deque.c` | **Q7** | Circular array implementation of a Double-Ended Queue (Deque) supporting front/rear insertion and deletion. |

---

## How to Compile and Run

You can compile and run any of the programs using **GCC** in your terminal or command prompt:

```bash
# Example for Question 1
gcc q1_circular_queue.c -o q1_circular_queue
./q1_circular_queue
```

*(On Windows, run `q1_circular_queue.exe` instead of `./q1_circular_queue`).*

---

## Prerequisites
* **GCC Compiler** (or any standard C compiler like Clang or MSVC)
