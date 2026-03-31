# Recursion: Technical Overview

Recursion is a programming technique where a **function calls itself** directly or indirectly to solve a problem by breaking it down into smaller, similar sub-problems.

---

## Core Concept

- **Self-Reference:** A function that contains a call to itself.
- **Divide and Conquer:** Solves a complex problem by reducing it to a simpler version of the same problem.
- **The Stack:** Each recursive call is added to the **Call Stack**, which stores the function's variables and state until the base case is reached.

---

## The Two Essential Components

For a recursive function to be successful and avoid an infinite loop (Stack Overflow), it must have:

1.  **Base Case:** The condition under which the recursion stops. It provides a direct answer for the simplest instance of the problem.
2.  **Recursive Step:** The part of the function where it calls itself with a modified argument, moving closer to the base case.

---

## Step-by-Step Logic (Factorial Example)

To calculate $n!$ (n factorial):

1.  **Base Case:** If $n = 0$ or $n = 1$, return $1$.
2.  **Recursive Step:** Return $n \times \text{factorial}(n - 1)$.

### Visualizing the Stack for `factorial(3)`:

- `factorial(3)` calls `3 * factorial(2)`
- `factorial(2)` calls `2 * factorial(1)`
- `factorial(1)` reaches **Base Case**, returns `1`
- _Unwinding:_ `2 * 1 = 2` $\rightarrow$ `3 * 2 = 6`

---

## Example Trace: Fibonacci Sequence

**Goal:** Find the $n^{th}$ Fibonacci number where $F(n) = F(n-1) + F(n-2)$.

| Input ($n$) | Logic         | Result      |
| :---------- | :------------ | :---------- |
| **0**       | Base Case     | `0`         |
| **1**       | Base Case     | `1`         |
| **2**       | $F(1) + F(0)$ | `1 + 0 = 1` |
| **3**       | $F(2) + F(1)$ | `1 + 1 = 2` |
| **4**       | $F(3) + F(2)$ | `2 + 1 = 3` |

---

## Complexity & Risks

- **Time Complexity:** Often $O(2^n)$ for naive tree-based recursion (like Fibonacci) or $O(n)$ for linear recursion.
- **Space Complexity:** $O(n)$ due to the depth of the call stack.
- **Risk:** **Stack Overflow Error** occurs if the recursion is too deep or the base case is never reached.

---
