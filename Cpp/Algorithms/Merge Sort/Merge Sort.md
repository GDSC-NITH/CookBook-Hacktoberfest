
# Merge Sort

 Merge Sort is one of the most popular **sorting algorithms** that is based on the principle of **Divide and Conquer Algoritm** .

 - Merge sort is similar to the **quick sort algorithm** as it uses the divide and conquer approach to sort the elements. 
 - It is one of the most **popular** and **efficient** sorting algorithm.
 - It divides the given list into two equal halves, calls itself for the two halves and then merges the two sorted halves. 
 - We have to define the **merge()** function to perform the merging.


 ***Here, a problem is divided into multiple sub-problems. Each sub-problem is solved individually. Finally, sub-problems are combined to form the final solution***.


![Capture](https://user-images.githubusercontent.com/115069289/194476735-3d1ac541-f527-4301-89af-827139ec36d7.jpg)


## **Divide and Conquer Strategy**

### Divide
If q is the half-way point between p and r, then we can split the subarray **A[p..r]** into two arrays **A[p..q]** and **A[q+1, r]**.

### Conquer
In the conquer step, we try to sort both the subarrays **A[p..q]** and **A[q+1, r]**. If we haven't yet reached the base case, we again divide both these subarrays and try to sort them.
### Combine
When the conquer step reaches the base step and we get two sorted subarrays **A[p..q]** and **A[q+1, r]** for array **A[p..r]**, we combine the results by creating a sorted array **A[p..r]** from two sorted subarrays **A[p..q]** and **A[q+1, r]**.
![Capture](https://cdn.programiz.com/cdn/farfuture/m8XujxD0B6qF81Hq-q30SP4nmJlMuaHdYNkKIyNt-hk/mtime:1586425921/sites/tutorial2program/files/merge-sort-in-action---merge-step-simple.png)
* * * * *

## **Merge Sort Algorithm**
--------------------
```
MERGE_SORT(arr, beg, end)  
  
if beg < end  
set mid = (beg + end)/2  
MERGE_SORT(arr, beg, mid)  
MERGE_SORT(arr, mid + 1, end)  
MERGE (arr, beg, mid, end)  
end of if  
  
END MERGE_SORT  
```
* * * * *
## **Working of Merge sort Algorithm**
--------------------

![Capture](https://favtutor.com/resources/images/uploads/merge_sort_python.png)


  Now, let's see the working of merge sort Algorithm.

  To understand the working of the merge sort algorithm, let's take an unsorted array. 

 Let the elements of array are  
![Capture](https://static.javatpoint.com/ds/images/merge-sort.png)

According to the merge sort, first divide the given array into two equal halves. 
***Merge sort keeps dividing the list into equal parts until it cannot be further divided***.

* As there are eight elements in the given array, so it is divided into two arrays of size 4.

![Capture](https://static.javatpoint.com/ds/images/merge-sort2.png)


* Now, again divide these two arrays into halves. As they are of size 4, so divide them into new arrays of size 2.

![Capture](https://static.javatpoint.com/ds/images/merge-sort3.png)

* Now, again divide these arrays to get the atomic value that cannot be further divided.

![Capture](https://static.javatpoint.com/ds/images/merge-sort4.png)

* Now, combine them in the same manner they were broken.

In combining, first compare the element of each array and then combine them into another array in sorted order.

 - So, first compare 12 and 31, both are in sorted positions. 
  - Then compare 25 and 8, and in the list of two values, put 8 first followed by 25. 
 - Then compare 32 and 17, sort them and put 17 first followed by 32. After that, compare 40 and 42, and place them sequentially.
 
![Capture](https://static.javatpoint.com/ds/images/merge-sort5.png)

In the next iteration of combining, now compare the arrays with two data values and merge them into an array of found values in sorted order.

![Capture](https://static.javatpoint.com/ds/images/merge-sort6.png)

**Now, there is a final merging of the arrays. After the final merging of above arrays, the array will look like -*

![Capture](https://static.javatpoint.com/ds/images/merge-sort7.png)

**Now, the array is completely sorted.*
* * * * *

## **Merge Sort Code in C++**
--------------------
 ```
// Merge sort in C++

#include <iostream>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver program
int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}

 ```
 ### Output ###
 ![Capture](https://user-images.githubusercontent.com/115069289/194468872-bc3c8962-d6d4-4152-a13b-ad8fffc9234a.JPG)

 * * * * *

 ## **Merge Sort Complexity**
--------------------












### Time Complexity


| Case | Time Complexity                |
| :-------- | :------------------------- |
| **Best Case** |`O(n*logn)` |
| **Average Case** |`O(n*logn)` |
| **Worst Case** |`O(n*logn)` |

###  Space Complexity

| Space Complexity | O(n)              |
| :-------- | :------------------------- |
| **Stable** |`Yes` |

``
The space complexity of merge sort is O(n). 
It is because, in merge sort, an extra variable is required for swapping.
``
* * * * *
## **Merge Sort Applications**
--------------------
- Inversion count problem

  ![Capture](https://media.geeksforgeeks.org/wp-content/uploads/count1.jpg)

- External sorting

![Capture](https://static.javatpoint.com/dbms/images/external-sort-merge-algorithm.png)

- E-commerce applications

![Capture](https://www.meme-arsenal.com/memes/72ec72af711382663ea6a337f7e4fb2d.jpg)
* * * * *
## **Resources**
--------------------






- [GFG](https://www.geeksforgeeks.org/merge-sort/?ref=lbp)

- [Javapoint](https://www.javatpoint.com/merge-sort)



