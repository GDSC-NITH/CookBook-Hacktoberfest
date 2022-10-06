# Bubble Sort
## **Sorting Algorithm**

**Bubble Sort** is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 

<br>

***
<br>

## **Algorithm**

In the algorithm given below, suppose **arr** is an array of **n** elements. The assumed **swap** function in the algorithm will swap the values of given array elements.

<br>

```python
begin BubbleSort(arr)  
   for all array elements  
      if arr[i] > arr[i+1]  
         swap(arr[i], arr[i+1])  
      end if  
   end for     
   return arr     
end BubbleSort  
```
<br>

***
<br>

## **Working of Bubble Sort**
<br>

Now, let's see the working of Bubble sort Algorithm.

To understand the working of bubble sort algorithm, let's take an unsorted array. We are taking a short and accurate array, as we know the complexity of bubble sort is O(n2).

Let the elements of array are -

**First Pass**

Sorting will start from the initial two elements. Let compare them to check which is greater.

Here, 32 is greater than 13 (32 > 13), so it is already sorted. Now, compare 32 with 26.

Here, 26 is smaller than 36. So, swapping is required. After swapping new array will look like -

Now, compare 32 and 35.

Here, 35 is greater than 32. So, there is no swapping required as they are already sorted.

Now, the comparison will be in between 35 and 10.

Here, 10 is smaller than 35 that are not sorted. So, swapping is required. Now, we reach at the end of the array. After first pass, the array will be -

Now, move to the second iteration.

**Second Pass**

The same process will be followed for second iteration.

Here, 10 is smaller than 32. So, swapping is required. After swapping, the array will be -

Now, move to the third iteration.

**Third Pass**

The same process will be followed for third iteration.

Here, 10 is smaller than 26. So, swapping is required. After swapping, the array will be -

Now, move to the fourth iteration.
AD

**Fourth pass**

Similarly, after the fourth iteration, the array will be -

Hence, there is no swapping required, so the array is completely sorted.

<br>

***
<br>

## **Bubble Sort Complexity** 

<br>

1. **Time Complexity:** 

    | Case | Time Complexity|
    | ---- | -------------- |
    | Best Case | O(n) |
    | Average Case | O(n^2) |
    | Worst Case | O(n^2) |

    * **Best Case Complexity -** It occurs when there is no sorting required, i.e. the array is already sorted. The best-case time complexity of bubble sort is **O(n)**.
    * **Average Case Complexity -** It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. The average case time complexity of bubble sort is **O(n^2)**.
    * **Worst Case Complexity -** It occurs when the array elements are required to be sorted in reverse order. That means suppose you have to sort the array elements in ascending order, but its elements are in descending order. The worst-case time complexity of bubble sort is **O(n^2)**.

2. **Space Complexity:** 
    | Space Complexity | Stable|
    | ---- | -------------- |
    | O(1) | YES |

    * The space complexity of bubble sort is O(1). It is because, in bubble sort, an extra variable is required for swapping.
    * The space complexity of optimized bubble sort is O(2). It is because two extra variables are required in optimized bubble sort.

<br>

***
<br>

## **Important points to be noted:**

<br>

Bubble short is majorly used where -

* complexity does not matter
* simple and shortcode is preferred

Also, this algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

<br>

***

<br>

## **SAMPLE**

<br>

### **Code**

```cpp
#include<iostream>    
using namespace std;    
    void print(int a[], int n) //function to print array elements  
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
       cout<<a[i]<<" ";     
    }        
    }  
 void bubble(int a[], int n) // function to implement bubble sort  
 {  
 int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    
 }  
int main()    
{    
    int i, j,temp;     
    int a[5] = {45, 1, 32, 13, 26};     
    int n = sizeof(a)/sizeof(a[0]);   
    cout<<"Before sorting array elements are - \n";  
    print(a, n);  
    bubble(a, n);  
    cout<<"\nAfter sorting array elements are - \n";    
    print(a, n);  
return 0;  
}    
```
<br>

### **Output**
***
<br>


<br>

***
<br>

## **Resources:**
<br>

* [**JAVAPOINT**](https://www.javatpoint.com/bubble-sort)
* [**GFG**](https://www.geeksforgeeks.org/bubble-sort/)
