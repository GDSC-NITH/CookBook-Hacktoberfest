# Quicksort 
===================
## **Sorting Algorithm**


**Quicksort** is [a sorting algorithm](https://www.programiz.com/dsa/sorting-algorithm) based on the divide and conquer approach where

1.  An array is divided into subarrays by selecting a pivot element (element selected from the array).

    While dividing the array, the pivot element should be positioned in such a way that elements less than pivot are kept on the left side and elements greater than pivot are on the right side of the pivot.
2.  The left and right subarrays are also divided using the same approach. This process continues until each subarray contains a single element.
3.  At this point, elements are already sorted. Finally, elements are combined to form a sorted array.

* * * * *

## **Working of Quicksort Algorithm**
------------------------------
<br>

1\. Select the Pivot Element

It depends on user to select an element as a pivot but by convention we will use last element as pivot element.

![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/7qpYqe1UtqYbKzIBY_W8ljqkUz9iS6jZGobim6LDhtM/mtime:1582112622/sites/tutorial2program/files/quick-sort-0.1_0.png "Selection of rightmost element")

Select a pivot element

2\. Rearrange the Array

Now the elements of the array are rearranged so that elements that are smaller than the pivot are put on the left and the elements greater than the pivot are put on the right.

![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/1Xn_e4xeHQjOsXExVhTgVbggPgpMk9WV4Z8gxmZgdyg/mtime:1582112622/sites/tutorial2program/files/quick-sort-0.2_0.png "pivoting")

Put all the smaller elements on the left and greater on the right of pivot element

Here's how we rearrange the array:

1.  A pointer is fixed at the pivot element. The pivot element is compared with the elements beginning from the first index.

    ![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/zaN86RZ0WfV0PhWpWDhis-f9lWlfgKJt_liYoGjZAIk/mtime:1617189498/sites/tutorial2program/files/quick-sort-partition-first-step.png "Quick Sort Steps")

    Comparison of pivot element with element beginning from the first index

2.  If the element is greater than the pivot element, a second pointer is set for that element.

    ![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/RzFeResnC88JRu9IFh2YqUKZMXltQ51EeiioINCMcEA/mtime:1617189487/sites/tutorial2program/files/quick-sort-partition-second-step.png "Quick Sort Steps")

    If the element is greater than the pivot element, a second pointer is set for that element.

3.  Now, pivot is compared with other elements. If an element smaller than the pivot element is reached, the smaller element is swapped with the greater element found earlier.

    ![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/QA-TsXFkcz3cNyJikcbIWxepFVDu8ntl220KzlG8zdw/mtime:1617189492/sites/tutorial2program/files/quick-sort-partition-third-step.png "Quick Sort Steps")

    Pivot is compared with other elements.

4.  Again, the process is repeated to set the next greater element as the second pointer. And, swap it with another smaller element.

    ![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/tMmdAbX5gev9K20XI1kzQ3n932vSjnN1MszZouHV7Yc/mtime:1617189469/sites/tutorial2program/files/quick-sort-partition-fourth-step.png "Quick Sort Steps")

    The process is repeated to set the next greater element as the second pointer.

5.  The process goes on until the second last element is reached.

    ![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/MNYV977xf4N3cgCpAtkB1KDyPqyG9OvlKSkHSdd0kys/mtime:1617189475/sites/tutorial2program/files/quick-sort-partition-fifth-step.png "Quick Sort Steps")

    The process goes on until the second last element is reached.

6.  Finally, the pivot element is swapped with the second pointer.

    ![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/lAMcHRRzL8TJEh7bjY3rAufTTy3y5-o4Nt0z5L1AB8A/mtime:1617189481/sites/tutorial2program/files/quick-sort-partition-sixth-step.png "Quick Sort Steps")

    Finally, the pivot element is swapped with the second pointer.

3\. Divide Subarrays

Pivot elements are again chosen for the left and the right sub-parts separately. And, step 2 is repeated.

![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/dK3pGyiHqFZOYklwABPBZ4zq_VZU1dMWBIbWhHJ-Rgw/mtime:1617189464/sites/tutorial2program/files/quick-sort_1.png "Quick Sort Steps")

Select pivot element of in each half and put at correct place using recursion

The subarrays are divided until each subarray is formed of a single element. At this point, the array is already sorted.

* * * * *

## **Quick Sort Algorithm**
--------------------

```

quickSort(array, leftmostIndex, rightmostIndex)
  if (leftmostIndex < rightmostIndex)
    pivotIndex <- partition(array,leftmostIndex, rightmostIndex)
    quickSort(array, leftmostIndex, pivotIndex - 1)
    quickSort(array, pivotIndex, rightmostIndex)

partition(array, leftmostIndex, rightmostIndex)
  set rightmostIndex as pivotIndex
  storeIndex <- leftmostIndex - 1
  for i <- leftmostIndex + 1 to rightmostIndex
  if element[i] < pivotElement
    swap element[i] and element[storeIndex]
    storeIndex++
  swap pivotElement and element[storeIndex+1]
return storeIndex + 1
```

### Visual Illustration of Quicksort Algorithm

You can understand the working of quicksort algorithm with the help of the illustrations below.

![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/FxRG-2wIayocfWeQvHxMmUQTKhibQiI2FLqjkIr3Vi4/mtime:1608894915/sites/tutorial2program/files/quick-sort-working.png "Quick Sort first half")

Sorting the elements on the left of pivot using recursion

![Quick Sort Steps](https://cdn.programiz.com/cdn/farfuture/0k2dzQ8-WHeClPRTiv9CEdX1KkqBMpS_0St0lzT9RO8/mtime:1582112622/sites/tutorial2program/files/quick-sort-1.png "Quick Sort second half")

Sorting the elements on the right of pivot using recursion

* * * * *

* * * * *

Quicksort Code in  C/C++
-----------------------------------------

[C++](https://www.programiz.com/dsa/quick-sort#cpp-code)

```cpp
// Quick sort in C++

#include <iostream>
using namespace std;

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to print the array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// function to rearrange array (find the partition point)
int partition(int array[], int low, int high) {

  // select the rightmost element as pivot
  int pivot = array[high];

  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {

      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;

      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap pivot with the greater element at i
  swap(&array[i + 1], &array[high]);

  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {

    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on righ of pivot
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// Driver code
int main() {
  int data[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(data) / sizeof(data[0]);

  cout << "Unsorted Array: \n";
  printArray(data, n);

  // perform quicksort on data
  quickSort(data, 0, n - 1);

  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}
```


* * * * *

Quicksort Complexity
--------------------

| Time Complexity |   |
| Best | O(n*log n) |
| Worst | O(n2) |
| Average | O(n*log n) |
| Space Complexity | O(log n) |
| Stability | No |

* * * * *

### 1\. Time Complexities

-   Worst Case Complexity [Big-O]: `O(n2)`\
    It occurs when the pivot element picked is either the greatest or the smallest element.

    This condition leads to the case in which the pivot element lies in an extreme end of the sorted array. One sub-array is always empty and another sub-array contains `n - 1` elements. Thus, quicksort is called only on this sub-array.

    However, the quicksort algorithm has better performance for scattered pivots.

-   Best Case Complexity [Big-omega]: `O(n*log n)`\
    It occurs when the pivot element is always the middle element or near to the middle element.
-   Average Case Complexity [Big-theta]: `O(n*log n)`\
    It occurs when the above conditions do not occur.

### 2\. Space Complexity

The space complexity for quicksort is `O(log n)`.

* * * * *

Quicksort Applications
----------------------

Quicksort algorithm is used when

-   the programming language is good for recursion
-   time complexity matters
-   space complexity matters

## **Resources:**
<br>

* [**JAVAPOINT**](https://www.javatpoint.com/quick-sort)
* [**GFG**](https://www.geeksforgeeks.org/quick-sort/)
