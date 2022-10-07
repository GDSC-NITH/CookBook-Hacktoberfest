## Introduction
If you are a competitive programmer or someone preparing for campus placements or technical interviews, you have probably come across the following question:

Given an integer array, find the contiguous subarray (containing at least one number) with the largest sum or in other words the maximum sum contiguous subarray and print its sum.

If not, does the name **Kadane’s algorithm** sound familiar?

It’s alright if you’re hearing this name for the first time.

You may be wondering what it is and why we need to solve the problem using Kadane’s algorithm. 

## What is Kadane's Algorithm?
*Kadane’s algorithm is an iterative dynamic programming algorithm in which we search for a maximum sum contiguous subarray within a one-dimensional numeric array.*

Now, let us see how Kadane’s Algorithm works.

## Working of Kadane's Algorithm
Some of you may think it’ll be a sum of all elements in an array. But what if there will be negative integer elements in the array, which will decrease the array’s total sum.

Thus, we can see that the sum of all elements in an array isn’t always the case.

A simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array and keep track of the maximum sum contiguous subarray among all positive segments. 

First, we will consider two elements, one which stores the maximum end of the subarray and another which stores the maximum sum so far. 
Let these two variables be max_ending_here and max_so_far, respectively. 
We will initialise both of them to 0. 
Each time we get a positive sum, we compare it with max_so_far and update max_so_far if it is greater than it.
This logic is written in the form of an algorithm as follows:

1. Start
2. max_so_far = 0
3. max_ending_here = 0
4. Loop for each element of the array
5. max_ending_here = max_ending_here + a[i]
6. if(max_ending_here < 0)
max_ending_here = 0
7. if(max_so_far < max_ending_here)
max_so_far = max_ending_here
8. return max_so_far 

## Illustration
   
    Lets take the example: {-2, -3, 4, -1, -2, 1, 5, -3}
    max_so_far = INT_MIN
    max_ending_here = 0

    for i=0,  a[0] =  -2
    max_ending_here = max_ending_here + (-2)
    Set max_ending_here = 0 because max_ending_here < 0
    and set max_so_far = -2

    for i=1,  a[1] =  -3
    max_ending_here = max_ending_here + (-3)
    Since max_ending_here = -3 and max_so_far = -2, max_so_far will remain -2
    Set max_ending_here = 0 because max_ending_here < 0

    for i=2,  a[2] =  4
    max_ending_here = max_ending_here + (4)
    max_ending_here = 4
    max_so_far is updated to 4 because max_ending_here greater 
    than max_so_far which was -2 till now

    for i=3,  a[3] =  -1
    max_ending_here = max_ending_here + (-1)
    max_ending_here = 3

    for i=4,  a[4] =  -2
    max_ending_here = max_ending_here + (-2)
    max_ending_here = 1

    for i=5,  a[5] =  1
    max_ending_here = max_ending_here + (1)
    max_ending_here = 2

    for i=6,  a[6] =  5
    max_ending_here = max_ending_here + (5)
    max_ending_here = 7
    max_so_far is updated to 7 because max_ending_here is 
    greater than max_so_far

    for i=7,  a[7] =  -3
    max_ending_here = max_ending_here + (-3)
    max_ending_here = 4

## C++ Code
[C++](https://carbon.now.sh/?bg=rgba%28104%2C116%2C128%2C1%29&t=a11y-dark&wt=none&l=auto&width=680&ds=true&dsyoff=20px&dsblur=68px&wc=true&wa=true&pv=56px&ph=56px&ln=false&fl=1&fm=Hack&fs=14px&lh=133%25&si=false&es=2x&wm=false&code=%2523include%253Ciostream%253E%250Ausing%2520namespace%2520std%253B%250A%250A%252F%252FFunction%2520to%2520find%2520maximum%2520sum%2520contiguous%2520subarray%2520in%2520a%2520given%2520set%2520of%2520integers%250A%250Aint%2520kadane%28int%2520arr%255B%255D%252C%2520int%2520n%29%250A%257B%250A%2509%252F%252Fstores%2520maximum%2520sum%2520subarray%2520found%2520so%2520far%250A%2509%2520%250A%2509int%2520max_so_far%2520%253D%25200%253B%250A%2509%2520%250A%2509%252F%252Fstores%2520the%2520maximum%2520sum%2520of%2520subarray%2520ending%2520at%2520the%2520current%2520position%250A%250A%2509int%2520max_ending_here%2520%253D%25200%253B%250A%250A%2509%252F%252Ftraverse%2520the%2520given%2520array%250A%250A%2509for%2520%28int%2520i%2520%253D%25200%253B%2520i%2520%253C%2520n%253B%2520i%252B%252B%29%250A%2509%257B%250A%2520%2520%2520%2520%2509%252F*%2520update%2520maximum%2520sum%2520of%2520subarray%2520%2522ending%2522%2520at%2520index%2520i%2520%28by%2520adding%2520the%2520current%2520element%2520to%2520maximum%2520sum%2520ending%2520at%2520previous%2520index%2520i-1%29%2520*%252F%250A%250A%2520%2520%2520%2520%2509max_ending_here%2520%253D%2520max_ending_here%2520%252B%2520arr%255Bi%255D%253B%250A%2520%250A%2520%2520%2520%2520%2509%252F*%2520if%2520maximum%2520sum%2520is%2520negative%252C%2520set%2520it%2520to%25200%2520%28which%2520represents%2520an%2520empty%2520sub-array%29%2520*%252F%250A%2520%2520%2520%2520%2509if%28max_ending_here%2520%253C%25200%29%250A%2520%2520%2520%2520%2509%257B%250A%2520%2520%2520%2520%2520%2520%2520%2520%2509max_ending_here%2520%253D%25200%253B%250A%2520%2520%2520%2520%2509%257D%250A%2520%2520%2520%2520%2520%2509%2520%250A%2520%2520%2520%2520%2509%252F%252Fupdate%2520result%2520if%2520current%2520subarray%2520sum%2520is%2520found%2520to%2520be%2520greater%250A%2520%2520%2520%2520%2509if%28max_so_far%2520%253C%2520max_ending_here%29%250A%2520%2520%2520%2520%2509%257B%250A%2520%2520%2520%2520%2520%2520%2520%2520%2509max_so_far%2520%253D%2520max_ending_here%253B%2520%2520%2520%2520%250A%2520%2520%2520%2520%2509%257D%250A%2509return%2520max_so_far%253B%250A%257D%250A%250Aint%2520main%28%29%250A%257B%250A%2520%2509int%2520arr%255B%255D%2520%253D%2520%257B-2%252C%2520-3%252C%25204%252C%2520-1%252C%2520-2%252C%25201%252C%25205%252C%2520-3%257D%253B%250A%2520%2509int%2520n%2520%253D%2520sizeof%28arr%29%252Fsizeof%28arr%255B0%255D%29%253B%250A%2520%2509cout%2520%253C%253C%2520%2522Maximum%2520sum%2520contiguous%2520subarray%2520is%2520%2522%253C%253Ckadane%28arr%252C%2520n%29%253B%250A%2520%2509return%25200%253B%250A%257D%250A)

**NOTE**: 
The above algorithm only works if and only if at least one positive number should be present otherwise it does not work i.e if an Array contains all negative numbers it doesn’t work.

## RESOURCES:
* [**GFG**](https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/)
* [**Coding Ninjas**](https://www.codingninjas.com/blog/2020/09/17/a-quick-look-at-kadanes-algorithm/)
