---
---

# Bucket Sort: Technical Overview

Bucket Sort is a **distribution-based sorting algorithm** that divides an array into a number of "buckets." Each bucket is then sorted individually, either using a different sorting algorithm or by recursively applying bucket sort.

---

## Core Concept

- **Scatter-Gather:** Distributes elements into buckets (Scatter) and then merges them back together (Gather).
- **Uniform Distribution:** Works best when input is uniformly distributed over a range (e.g., floating-point numbers between 0 and 1).
- **Memory Management:** Often used when data is too large to fit into memory at once (External Sorting).

---

## Step-by-Step Algorithm

1.  **Create Buckets:** Initialize an array of empty buckets (usually linked lists or dynamic arrays).
2.  **Scatter:** Determine which bucket an element belongs to using a formula (e.g., $index = value \times \text{number of buckets}$) and insert it.
3.  **Sort Buckets:** Sort each non-empty bucket individually (Insertion Sort is commonly used here).
4.  **Gather:** Concatenate all sorted buckets back into a single array.

---

## Example Trace

**Initial List:** `[0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12]`  
**Buckets:** 10 (Range 0.0 to 1.0)

| Bucket Index    | Elements       | Sorted Bucket  |
| :-------------- | :------------- | :------------- |
| **1 (0.1-0.2)** | `[0.17, 0.12]` | `[0.12, 0.17]` |
| **2 (0.2-0.3)** | `[0.26, 0.21]` | `[0.21, 0.26]` |
| **3 (0.3-0.4)** | `[0.39]`       | `[0.39]`       |
| **7 (0.7-0.8)** | `[0.78, 0.72]` | `[0.72, 0.78]` |
| **9 (0.9-1.0)** | `[0.94]`       | `[0.94]`       |

**Final Result:** `[0.12, 0.17, 0.21, 0.26, 0.39, 0.72, 0.78, 0.94]`

---

## Complexity

- **Average Time:** $O(n + k)$ (Assuming uniform distribution)
- **Worst Case:** $O(n^2)$ (When all elements fall into a single bucket)
- **Space Complexity:** $O(n + k)$
