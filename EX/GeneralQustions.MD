## Sorting Algorithms: Multiple Choice Questions

**1. Which of the following is true about the Bubble Sort algorithm?**

- A) It is the most efficient sorting algorithm.
- B) It works by repeatedly swapping adjacent elements that are in the wrong order.
- C) Its best-case time complexity is $O(n^2)$.
- D) It is often used for sorting large datasets because of its efficiency.

**2. In the context of Quicksort, what is the 'pivot'?**

- A) An element used to divide the array into smaller parts.
- B) The final sorted array.
- C) A sorting technique used in the partitioning process.
- D) The smallest element in the array.

**3. Which of the following statements about Mergesort is correct?**

- A) Mergesort is not a stable sort.
- B) Mergesort has a worst-case time complexity of $O(n \log n)$.
- C) Mergesort is an in-place sorting algorithm.
- D) Mergesort's performance is greatly affected by the choice of the pivot element.

**4. Selection Sort works by:**

- A) Repeatedly finding the minimum element and moving it to the end of the array.
- B) Swapping adjacent elements that are out of order.
- C) Partitioning the array into sorted and unsorted regions and repeatedly selecting the smallest element from the unsorted region.
- D) Dividing the array into smaller arrays and merging them back together in order.

**5. In a selectionsort of n elements, how many times is the swap function called in the complete execution of the algorithm?**

- A) 1
- B) n - 1
- C) n log n
- D) n²

**6. Selectionsort and quicksort both fall into the same category of sorting algorithms. What is this category?**

- A) O(n log n) sorts
- B) Divide-and-conquer sorts
- C) Interchange sorts
- D) Average time is quadratic.

**7. Suppose that a selectionsort of 100 items has completed 42 iterations of the main loop. How many items are now guaranteed to be in their final spot (never to be moved again)?**

- A) 21
- B) 41
- C) 42
- D) 43

**8. Suppose we are sorting an array of ten integers using a some quadratic sorting algorithm. After four iterations of the algorithm's main loop, the array elements are ordered as shown here: 1 2 3 4 5 0 6 7 8 9. Which statement is correct? (Note: Our selectionsort picks largest items first.)**

- A) The algorithm might be either selectionsort or insertionsort.
- B) The algorithm might be selectionsort, but could not be insertionsort.
- C) The algorithm might be insertionsort, but could not be selectionsort.
- D) The algorithm is neither selectionsort nor insertionsort.

**9. Suppose we are sorting an array of eight integers using a some quadratic sorting algorithm. After four iterations of the algorithm's main loop, the array elements are ordered as shown here: 2 4 5 7 8 1 3 6. Which statement is correct? (Note: Our selectionsort picks largest items first.)**

- A) The algorithm might be either selectionsort or insertionsort.
- B) The algorithm might be selectionsort, but it is not insertionsort.
- C) The algorithm is not selectionsort, but it might be insertionsort.
- D) The algorithm is neither selectionsort nor insertionsort.

**10. When is insertionsort a good choice for sorting an array?**

- A) Each component of the array requires a large amount of memory.
- B) Each component of the array requires a small amount of memory.
- C) The array has only a few items out of place.
- D) The processor speed is fast.

### Section 12.2: Recursive Sorting Algorithms

**11. What is the worst-case time for mergesort to sort an array of n elements?**

- A) O(log n)
- B) O(n)
- C) O(n log n)
- D) O(n²)

**12. What is the worst-case time for quicksort to sort an array of n elements?**

- A) O(log n)
- B) O(n)
- C) O(n log n)
- D) O(n²)

**13. Mergesort makes two recursive calls. Which statement is true after these recursive calls finish, but before the merge step?**

- A) The array elements form a heap.
- B) Elements in each half of the array are sorted amongst themselves.
- C) Elements in the first half of the array are less than or equal to elements in the second half of the array.
- D) None of the above.

**14. Suppose we are sorting an array of eight integers using quicksort, and we have just finished the first partitioning with the array looking like this: 2 5 1 7 9 12 11 10. Which statement is correct?**

- A) The pivot could be either the 7 or the 9.
- B) The pivot could be the 7, but it is not the 9.
- C) The pivot is not the 7, but it could be the 9.
- D) Neither the 7 nor the 9 is the pivot.

**15. What is the worst-case time for heapsort to sort an array of n elements?**

- A) O(log n)
- B) O(n)
- C) O(n log n)
- D) O(n²)

**18. Insertion sort has $O(n)$ time complexity in which scenario?**

- A) Random data
- B) Reverse sorted data
- C) Nearly sorted data
- D) Large datasets

**19. Which sorting algorithm is most suitable when the input array is nearly sorted?**

- A) Quicksort
- B) Mergesort
- C) Insertion sort
- D) Selection sort

**20. What is the space complexity of Quicksort in the best case?**

- A) O(1)
- B) O(log n)
- C) O(n)
- D) O(n log n)

**21. Bubble sort is particularly inefficient for large datasets because:**

- A) It requires additional memory for merging
- B) It makes unnecessary comparisons even when the array is nearly sorted
- C) It uses a pivot element that may be poorly chosen
- D) It divides the array into too many partitions

**22. In Mergesort, the merge operation takes which time complexity?**

- A) O(log n)
- B) O(n)
- C) O(n log n)
- D) O(n²)

**23. Which of the following sorting algorithms is stable?**

- A) Quicksort
- B) Selection sort
- C) Insertion sort
- D) Both B and C

**24. What is the best-case time complexity of Quicksort?**

- A) O(n)
- B) O(n log n)
- C) O(n²)
- D) O(log n)

### Section 12.3: Linked List Questions

**25. In a singly linked list, what information does each node typically contain?**

- A) Only the data value
- B) Data and a pointer to the next node
- C) Data and pointers to both next and previous nodes
- D) Only a pointer to the next node

**26. What is the time complexity of inserting an element at the beginning of a singly linked list?**

- A) O(1)
- B) O(n)
- C) O(n log n)
- D) O(n²)

**27. What is the time complexity of accessing the element at index k in a singly linked list?**

- A) O(1)
- B) O(k)
- C) O(log n)
- D) O(n)

**28. Which operation is inefficient in a singly linked list compared to an array?**

- A) Insertion at the beginning
- B) Deletion at the beginning
- C) Random access to elements
- D) Traversal

**29. What is the main advantage of a singly linked list over an array?**

- A) Faster access time
- B) Dynamic size and efficient insertion/deletion at the beginning
- C) Lower memory usage
- D) Better cache performance

**30. In a singly linked list, deleting a node requires access to:**

- A) Only the node to be deleted
- B) The node to be deleted and the next node
- C) The node to be deleted and the previous node
- D) All nodes in the list
