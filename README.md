# Divide and Conquer Algorithm Analysis

## Project Overview

This repository contains implementations and performance analysis of Divide and Conquer algorithms. The project focuses on analyzing algorithm efficiency, execution time, recursion overhead, and optimization techniques using real-world scenarios.

The project includes:

1. Quick Sort Worst-Case Behavior Analysis
2. Recursion Overhead Analysis using Binary Search and Merge Sort


---

# Question 1: Quick Sort Worst-Case Behavior Analysis

## Problem Description

Quick Sort is a Divide and Conquer sorting algorithm. This case study analyzes its performance on sorted datasets and compares it with random input cases.

The experiment identifies how poor pivot selection causes performance degradation and leads to the worst-case complexity of O(n²).

---

## Algorithm Used

Quick Sort

## Concept

Quick Sort selects a pivot element and divides the dataset into smaller parts.

For sorted datasets, selecting the last element as pivot creates unbalanced partitions, increasing recursion depth and reducing performance.

---

## Input

- Size of dataset
- Sorted dataset
- Random dataset

## Output

- Execution time for sorted input
- Execution time for random input

---

## Complexity Analysis

### Best Case

O(n log n)

### Average Case

O(n log n)

### Worst Case

O(n²)

---

## Performance Analysis

For sorted datasets:

- Pivot selection becomes inefficient.
- One partition contains almost all elements.
- Recursive calls increase.

This results in O(n²) time complexity.

For random datasets:

- Partitions are more balanced.
- Execution time improves.

---

## Optimization Technique

Random pivot selection can reduce the possibility of selecting the worst pivot.

Other techniques:

- Median-of-three pivot selection
- Hybrid sorting algorithms

---

# Question 2: Recursion Overhead Analysis in Divide and Conquer Algorithms

## Problem Description

This case study analyzes recursion overhead in Binary Search and Merge Sort. The objective is to compare recursive and iterative approaches based on execution time and memory usage.

---

## Algorithms Used

1. Recursive Binary Search
2. Iterative Binary Search
3. Merge Sort

---

## Concept

Divide and Conquer algorithms divide a problem into smaller subproblems and solve them recursively.

Binary Search reduces the search space by half.

Merge Sort divides the array, sorts smaller parts, and merges the results.

---

# Binary Search Analysis

## Recursive Binary Search

Time Complexity:

O(log n)

Space Complexity:

O(log n)

Reason:

Recursive function calls create stack memory.

---

## Iterative Binary Search

Time Complexity:

O(log n)

Space Complexity:

O(1)

Reason:

Uses loops and avoids recursive stack usage.

---

# Merge Sort Analysis

Merge Sort divides the dataset into smaller sections and combines sorted parts.

Time Complexity:

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n log n)

Space Complexity:

O(n)

---

# Comparison

| Algorithm | Approach | Time Complexity | Space Usage |
|---|---|---|---|
| Binary Search | Recursive | O(log n) | O(log n) |
| Binary Search | Iterative | O(log n) | O(1) |
| Merge Sort | Recursive | O(n log n) | O(n) |

---

# Result Analysis

The experiment shows that recursion improves code readability and follows the Divide and Conquer approach naturally.

However, recursive algorithms require additional stack memory and may have execution overhead due to repeated function calls.

Iterative approaches reduce memory usage and improve efficiency.

---

# Conclusion

Quick Sort provides high performance for random datasets but may degrade to O(n²) for sorted datasets due to poor pivot selection.

Random pivot selection improves Quick Sort performance.

Recursive Divide and Conquer algorithms are easier to understand, while iterative approaches provide better memory efficiency.

The choice of algorithm depends on system requirements such as execution speed, memory usage, and scalability.
