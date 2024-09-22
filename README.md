# InsertionSort Algorithm in C++

## Description
InsertionSort is a simple, comparison-based sorting algorithm that builds the sorted array one element at a time. It works similarly to how you might sort playing cards in your hand, by picking the next card and placing it in the correct position among the sorted ones. It is efficient for small datasets and is adaptive, meaning it performs better when the array is already partially sorted.

InsertionSort is often used in combination with more advanced algorithms, such as in hybrid sorting algorithms.

## Algorithm Overview
1. **Start with the first element** as the sorted portion.
2. **Pick the next element** and compare it with elements in the sorted portion.
3. **Shift elements** in the sorted portion to make space for the new element.
4. **Insert the element** in its correct position.
5. Repeat the process for all elements.

### Characteristics:
- **Stable sorting**: Maintains the relative order of equal elements.
- Efficient for **small or nearly sorted arrays**.

## Code Explanation
- **insert function**: Inserts an element into the sorted portion of the array.
- **insertionSort function**: The main function that iterates over the array, inserting each element into the sorted part.
- **Driver code**: Handles input/output and initiates the sorting process.

## Time and Space Complexity
- **Time Complexity**:
  - **Best case**: `O(n)` – Happens when the array is already sorted.
  - **Average case**: `O(n^2)`
  - **Worst case**: `O(n^2)`
  
- **Space Complexity**: `O(1)` – Sorting is done in place.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/InsertionSort.git
