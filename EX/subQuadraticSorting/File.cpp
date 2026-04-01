/*
═══════════════════════════════════════════════════════════════════════════════
                    SORTING ALGORITHMS - PROGRAMMING TASKS
═══════════════════════════════════════════════════════════════════════════════
*/

// ─────────────────────────────────────────────────────────────────────────────
// TASK 1: Quicksort with Partition Tracking
// ─────────────────────────────────────────────────────────────────────────────
/*
Write a version of Quicksort that tracks how many elements end up in each partition.

Requirement: 
  Every time the partition() function is called, print:
  - The value of the chosen pivot
  - The size of the resulting left subarray
  - The size of the resulting right subarray

Example Input:  [10, 7, 8, 9, 1, 5]
Expected Output:
  Pivot: 8, Left Size: 3, Right Size: 2
  Pivot: 7, Left Size: 2, Right Size: 0
  Pivot: 9, Left Size: 0, Right Size: 1
  Pivot: 1, Left Size: 0, Right Size: 1
  Pivot: 5, Left Size: 0, Right Size: 0
*/

// ─────────────────────────────────────────────────────────────────────────────
// TASK 2: Merge Sort with Inversion Counting
// ─────────────────────────────────────────────────────────────────────────────
/*
Implement the Merge Sort algorithm and modify it to count inversions.

Definition: An inversion is a pair of indices (i, j) where i < j and arr[i] > arr[j].

Requirement: 
  Return both the sorted array and the count of inversions.

Example Input:  [1, 20, 6, 4, 5]
Expected Output: ([1, 4, 5, 6, 20], 5)
                  Sorted array: [1, 4, 5, 6, 20]
                  Inversion count: 5

Hint: Modify the merge step to count inversions efficiently.
      When an element from the right half is smaller than an element from the 
      left half, all remaining elements in the left half are greater, 
      contributing to the inversion count.
*/

// ─────────────────────────────────────────────────────────────────────────────
// TASK 3: Shell Sort Implementation
// ─────────────────────────────────────────────────────────────────────────────
/*
Write a function that implements the Shell Sort algorithm.

Requirement: 
  The function should sort an array in place using the Shell Sort method.

Example Input:  [12, 34, 54, 2, 3]
Expected Output: [2, 3, 12, 34, 54]
*/