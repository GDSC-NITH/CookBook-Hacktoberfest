# **Heap Sort**
--------------------------
```
Heap sort is a comparison-based sorting technique based on Binary Heap data structure. 
It is similar to the selection sort where we first find the minimum element and place 
the minimum element at the beginning. Repeat the same process for the remaining elements.
```
- Heap sort is an in-place algorithm. 
- Its typical implementation is not stable, but can be made stable (See this)
- Typically 2-3 times slower than well-implemented QuickSort.  The reason for slowness is a lack of locality of reference.

![](https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/07/TV-Heap-sort-in-DS-normal-images02.jpg)

* * * *

### **What is heap sort?**
---------------------
Heapsort is a popular and efficient sorting algorithm. The concept of heap sort is to eliminate the elements one by one from the heap part of the list, and then insert them into the sorted part of the list.

Heapsort is the in-place sorting algorithm.

Now, let's see the algorithm of heap sort.

## **Algorithm**
-------------------
```
HeapSort(arr)  
BuildMaxHeap(arr)  
for i = length(arr) to 2  
    swap arr[1] with arr[i]  
        heap_size[arr] = heap_size[arr] ? 1  
        MaxHeapify(arr,1)  
End  
```
### ***BuildMaxHeap(arr)***

```
BuildMaxHeap(arr)  
    heap_size(arr) = length(arr)  
    for i = length(arr)/2 to 1  
MaxHeapify(arr,i)  
End  
```
### ***MaxHeapify(arr,i)***

```
MaxHeapify(arr,i)  
L = left(i)  
R = right(i)  
if L ? heap_size[arr] and arr[L] > arr[i]  
largest = L  
else  
largest = i  
if R ? heap_size[arr] and arr[R] > arr[largest]  
largest = R  
if largest != i  
swap arr[i] with arr[largest]  
MaxHeapify(arr,largest)  
End   
```
* * * *
### **Working of Heap sort Algorithm**
--------------------
Since the tree satisfies Max-Heap property, then the largest item is stored at the root node.
- **Swap**: Remove the root element and put at the end of the array (nth position) Put the last item of the tree (heap) at the vacant place.
- **Remove**: Reduce the size of the heap by 1.
- **Heapify**: Heapify the root element again so that we have the highest element at root.
The process is repeated until all the items of the list are sorted.

![](https://cdn.programiz.com/cdn/farfuture/VicaT2DyDXxbtM88OYklajepD4hkdSumEHTg2nBwe7s/mtime:1586942728/sites/tutorial2program/files/heap_sort.png)

------------

## **The code below shows the operation.**
   ```
   // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);

      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
   ```

   ------------

   ## **Heap Sort Code in C++**

   ```
   // Heap Sort in C++
  
  #include <iostream>
  using namespace std;
  
  void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
    }
  }
  
  // main function to do heap sort
  void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
  }
  
  // Print an array
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }
  
  // Driver code
  int main() {
    int arr[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);
  
    cout << "Sorted array is \n";
    printArray(arr, n);
  }

   ```

   ## **Heap Sort Complexity**
   --------------------

   | Case | Time Complexity                |
| :-------- | :------------------------- |
| **Best Case** |`O(n*logn)` |
| **Average Case** |`O(n*logn)` |
| **Worst Case** |`O(n*logn)` |

###  Space Complexity

| Space Complexity | O(1)              |
| :-------- | :------------------------- |
| **Stable** |`No` |

-----------------

## **Heap Sort Applications**
------------

Systems concerned with security and embedded systems such as Linux Kernel use Heap Sort because of the O(n log n) upper bound on Heapsort's running time and constant O(1) upper bound on its auxiliary storage.

------------------





## Resource

- [GFG](https://www.geeksforgeeks.org/heap-sort/?ref=lbp)
- [Javatpoint](https://www.javatpoint.com/heap-sort)

