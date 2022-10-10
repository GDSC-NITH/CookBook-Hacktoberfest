<h1> DNF SORT (Dutch National Flag)</h1>

There is an interesting programming technique that is used to solve problems in which an array consists of three numbers (usually 0, 1, and 2) and is widely used to
solve problems involving sequentially arranging three colours.
This programming problem was proposed by **Edsger Dijkstra.**

<h2> DNF Sort - what does it stand for? </h2>
The flag of the Netherlands consists of three colors: white, red, and blue. <br>
The logic of this concept is used to randomly arrange balls of white, red, and blue such that balls of the same color are placed together. 
Similarly, used to arrange an array so that three elements are placed together.

<h2> Sort an array of 0s, 1s, and 2s </h2>

* Brute force is to sort the array O(NlogN).<br>
* Efficient approach is to just count the no of 1’s, 2’s and 3’s in one for loop and then put the values in the array in another loop.<br>
* Most effective approach to solve the problem is by using the DNF Sort as only only 1 traversal is needed.<br>

<h2> Algorithm </h2>
1. Take three-pointers, namely — low, mid, high.
2. Low and Mid pointers point at the start of the array, and the High pointer will point at the end of the given array.
3. Low is for 0’s, Mid is for 1’s and High is for 2’s.

-> Index 0 to low - this is the **"bottom group"** (O’s) <br>
-> Index low to mid - this is the **"middle group"** (1’s) <br>
-> Index mid to high - this is the **"top group"** (2’s) <br>

<h2> Cases </h2>

* If array [mid] =0, then swap array [mid] with array [low] and increment both pointers once.
* If array [mid] = 1, then no swapping is required. Increment mid pointer once.
* If array [mid] = 2, then we swap array [mid] with array [high] and decrement the high pointer once.
<img src="https://user-images.githubusercontent.com/77115663/194800242-8bb71b30-6b42-4244-ab7c-50f34ab82493.png">

<h2> Examples </h2>

**Input:** {0, 1, 2, 0, 1, 2} <br>
**Output:** {0, 0, 1, 1, 2, 2} <br>

**Input:** {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1} <br>
**Output:** {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2} <br>

<h2> Code Snippet (in Cpp) </h2>

````

#include<iostream>
using namespace std;

void dnf_sort(int arr[], int n)
{
    int low=0;
    int mid=0;
    int high=n-1;

    while(low<=mid)
    {
        if(arr[mid]==0) //Case 1
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1) //Case 2
        {
            mid++;
        }
        else  //Case 3
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

// Driver Function

int main()
{
    int arr[] = { 0,1,2,2,1,0 };
    dnf_sort(arr, 6);

    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
````

<h2> Output </h2>

````
0,0,1,1,2,2

````

<h2> References and Useful Articles </h2>

* <a href="https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/">geeksforgeeks</a>
* <a href="https://www.tutorialspoint.com/sort-an-arrays-of-0-s-1-s-and-2-s-using-cplusplus">tutorialspoint</a>
* <a href="https://www.javatpoint.com/daa-dutch-national-flag">javatpoint</a>
* <a href="https://www.educative.io/answers/the-dutch-national-flag-problem-in-cpp">educative</a>
* <a href="https://leetcode.com/problems/sort-colors/">leetcode</a>






 

