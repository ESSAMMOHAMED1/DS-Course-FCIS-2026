# Radix Sort: Technical Overview

Radix Sort is a **non-comparative integer sorting algorithm** that processes data by grouping keys by individual digits which share the same significant position and value.

---

## Core Concept

- **Non-comparative:** Unlike QuickSort or MergeSort, it doesn't compare elements directly.
- **Digit-by-Digit:** Processes numbers starting from the **Least Significant Digit (LSD)** to the **Most Significant Digit (MSD)**.
- **Efficiency:** Highly effective for sorting large sets of integers or fixed-length strings.

---

## Step-by-Step Algorithm

1.  **Find the Maximum:** Identify the largest number to determine the number of digits ($d$).
2.  **Iterate through Places:** Starting from the units place ($10^0$), repeat for each digit position:
    - Use a **stable sort** (like Counting Sort) to sort the array based on the current digit.
    - Move to the next power of 10.
3.  **Output:** The final list is sorted once the most significant digit is processed.

---

## Example Trace

**Initial List:** `[170, 45, 75, 90, 802, 24, 2, 66]`

| Step | Place Value     | Intermediate Sorted List            |
| :--- | :-------------- | :---------------------------------- |
| 1    | Units (1s)      | `[170, 90, 802, 2, 24, 45, 75, 66]` |
| 2    | Tens (10s)      | `[802, 2, 24, 45, 66, 170, 75, 90]` |
| 3    | Hundreds (100s) | `[2, 24, 45, 66, 75, 90, 170, 802]` |

---

## Complexity

- **Time Complexity:** $O(d \cdot (n + k))$
- **Space Complexity:** $O(n + k)$
  _(Where $n$ is the number of elements, $d$ is the number of digits, and $k$ is the radix/base, typically 10.)_
