Kadane's Algorithm is an iterative dynamic programming algorithm ( A method that is often used to solve finite-dimensional nonlinear constrained global optimal control problems ), so to understand Kadane's Algorithm we need to understand Dynamic Programming first. Kadane's Algorithm is used to solve the famous problem - Maximum Subarray Sum. This Algorithm is used to solve the problem in linear time.

## Maximum Subarray Problem
So, What is this Maximum Subarray Problem? The main motive of this problem is to find a sub-array from an array, whose sum is maximum among all the sub-arrays and return that maximum sum. You must be thinking that, maximum sum will be the sum of all elements in the array, but if there are negative numbers also in the array, then the answer might not be the same.

For Example:

Let the array be: **[2, -4, 3, -1, 2]**

![array](https://scaler.com/topics/images/kadane.webp)

In this array, the subarray with maximum sum is [3, -1, 2] with sum 4, whereas the total sum of the array is 2.

## Working of the Algorithm
In Kadane's Algorithm, we look for all positive contiguous subarrays of the array, keeping track of the global maximum sum which will be the array. Whenever we get a positive-subarray-sum, we compare it with the global_max and update global_max if the sum is greater than the global_max, and whenever we get a negative-subarray-sum, we have to reset the sum to zero, because we will never take that element for the next subarrays.

Initialize: local_max = 0 global_max = INT_MIN

For each element we will follow these steps:

1. local_max = local_max + a[i]
2. if (local_max > global_max ) set global_max = local_max
3. if (local_max < 0) set local_max = 0
global_max is the maximum sum required.

Lets understand the above algorithm using an example.
```
Let the array be: [2, -4, 3, -1, 2]

at first, local_max = global_max = 0

Now, lets loop through each element.

when i=0, a[0]= 2: local_max = local_max + 2 = 2. since, local_max is greater than global_max, so set global_max = 2.

when i=1, a[1]= -4: local_max = local_max + (-4) = 2+(-4) = -2 since local_max < 0, we wll set local_max to 0. but, global_max is still 2.

when i=2, a[2]= 3: local_max = local_max + (3) = 0+3 = 3 since local_max(= 3) > global_max(= 2) so we will set global_max = 3.

when i=3, a[3]= -1 local_max = local_max + (-1) = 3+(-1) = 2 global_max is still greater than local_max, so no update will be done here, i.e. global_max = 2

when i=4, a[4]= 2 local_max = local_max + 2 = 2+2 = 4 since local_max(= 4) > global_max(= 2), we will set global_max = 4. 

**Thus we get the maximum subarray sum as 4.**

**Note**: The above algorithm will fail for the case, when there are only negative elements in the array, because our global_max is already set to 0. So, to handle that case we have to modify our algorithm. We will add current element to the previous subarray only if it results in a greater sum, else we will start the new subarray from that element.
```

## C++ Code
```
#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++) {
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

```
```
int main()
{
	int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
	int n = sizeof(a) / sizeof(a[0]);

	// Function Call
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
```
 
## Time Complexity
Time Complexity of Kadane's Algorithm is **O(n)**

The way this algorithm uses optimal substructures, this algorithm can be seen as simple dynamic programming. This algorithm traverses the whole array only once, so the time complexity depends on the length of the array linearly.

## RESOURCES:
* [**Scaler**](https://www.scaler.com/topics/kadanes-algorithm/)
