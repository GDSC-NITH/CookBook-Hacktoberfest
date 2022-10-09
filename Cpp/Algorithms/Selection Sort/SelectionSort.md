# Selection Sort
## **Sorting Algorithm**

**Selection Sort** The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning. 

The algorithm maintains two subarrays in a given array.

* The subarray which already sorted. 
* The remaining subarray was unsorted.

In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 

<br>
<hr>




## **Algorithm**

**Selection Sort Algorithm**: The basic steps to perform Selection Sort are:

Follow the below steps to solve the problem:

* Initialize minimum value(min_idx) to location 0.
* Traverse the array to find the minimum element in the array.
* While traversing if any element smaller than min_idx is found then swap both the values.
* Then, increment min_idx to point to the next element.
Repeat until the array is sorted.

<br>
<hr>

Consider the following depicted array as an example.

You want to sort this array in
increasing order.Consider the following depicted array as an example. You want to sort this array in
increasing order.

## We have an Unsorted Array
# **{29, 72, 98, 13, 87, 66, 52, 51, 36}**

![Selection-Sort-algorithm](https://files.codingninjas.in/capture2-6720.JPG)

<br>
<hr>

<br>

## **Flowchart of the Selection Sort:** 

![Flow-chart-for-Selection-Sort](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20220203094305/Selection-Sort-Flowhchart.png)
<br>
<hr>
A program that demonstrates Selection Sort in C++ is given below.

## **Code Implementation**
```cpp 
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size){
    for (int step = 0; step < size - 1; step++){
        int minimum_idx = step;
        for (int i = step + 1; i < size; i++){
            if (array[i] < array[minimum_idx])
                minimum_idx = i;
        }
        swap(&array[minimum_idx], &array[step]);
    }
}

// driver code
int main(){
    int data[] = {11, 1, 21, 28, 19, 6, 7};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    for (int i = 0; i < size; i++){
        cout << data[i] << " ";
    }
}
```
**Output**
```
[1,6,7,11,19,21,28]
```

<br>

# Piling Up Selection Sort

## **Time Complexity :**	*O(n²)* in all the cases. 

## **Space Complexity :**	*O(1)* as we used constant extra space.

## **Stable/Unstable :** 	*Unstable*, as it finds the minimum element and then inserts it in its correct position by swapping with the element present at the first index.

## **Internal/External :**	**Internal** as the input data can be adjusted in the main memory at once.

## **Comparable/Non-Comparable :**	**Yes**, it is a comparable algorithm that compares elements before sorting.

## **Recursive/Non-Recursive :**	**Recursive** as it one by one increment sorted parts and recursively calls for remaining.

<br>
<hr>


## **Resources:**
<br>

* [**CODING NINJAS**](https://www.codingninjas.com/blog/2021/08/24/what-is-selection-sort/)
* [**GFG**](https://www.geeksforgeeks.org/selection-sort/?ref=lbp)
