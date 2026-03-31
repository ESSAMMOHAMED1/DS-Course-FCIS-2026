# Counting Sort: Technical Overview

Counting Sort is an **integer sorting algorithm** that operates by counting the number of objects that possess distinct key values. It then uses arithmetic to calculate the positions of each object in the output sequence.

---

## Core Concept
* **Linear Time:** Exceptionally fast when the range of input values ($k$) is not significantly larger than the number of elements ($n$).
* **Non-Comparative:** Maps values to an index in an auxiliary array rather than comparing elements.
* **Stability:** Preserves the relative order of equal elements (important when used as a subroutine for Radix Sort).

---

## Step-by-Step Algorithm
1.  **Find Range:** Identify the maximum value in the input array.
2.  **Initialize Count Array:** Create an array of size `max + 1` filled with zeros.
3.  **Count Occurrences:** Loop through the input array and increment the index in the count array corresponding to each value.
4.  **Cumulative Sum:** Update the count array so each index stores the sum of previous counts. This indicates the actual position of the element in the output.
5.  **Build Output:** Iterate backward through the input array to place elements into the output array using the positions defined in the count array.

---

## Example Trace
**Initial List:** `[4, 2, 2, 8, 3, 3, 1]`  
**Max Value:** `8`

| Process | State/Array |
| :--- | :--- |
| **Count Array (Index 0-8)** | `[0, 1, 2, 2, 1, 0, 0, 0, 1]` |
| **Cumulative Count** | `[0, 1, 3, 5, 6, 6, 6, 6, 7]` |
| **Sorted Output** | `[1, 2, 2, 3, 3, 4, 8]` |

---

## Complexity
* **Time Complexity:** $O(n + k)$
* **Space Complexity:** $O(n + k)$
*(Where $n$ is the number of elements and $k$ is the range of input.)*
