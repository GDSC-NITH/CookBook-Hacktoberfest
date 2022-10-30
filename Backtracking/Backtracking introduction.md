
# Backtracking

Backtracking is an algorithmic technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point in time (by time, here, is referred to the time elapsed till reaching any level of the search tree).  Backtracking can also be said as an improvement to the brute force approach. So basically, the idea behind the backtracking technique is that it searches for a solution to a problem among all the available options.  Initially, we start the backtracking from one possible option and if the problem is solved with that selected option then we return the solution else we backtrack and select another option from the remaining available options. There also might be a case where none of the options will give you the solution and hence we understand that backtracking won’t give any solution to that particular problem. We can also say that backtracking is a form of recursion. This is because the process of finding the solution from the various option available is repeated recursively until we don’t find the solution or we reach the final state. So we can conclude that backtracking at every step eliminates those choices that cannot give us the solution and proceeds to those choices that have the potential of taking us to the solution.


##

Prerequisites : 

Recursion:
https://www.geeksforgeeks.org/recursion/

Complexity Analysis:
https://www.geeksforgeeks.org/analysis-of-algorithms-set-1-asymptotic-analysis/


# Example:-

## Code in c++ for Backtracking:-



```//
C++ program to print all permutations of a string with duplicates allowed 


#include <bits/stdc++.h> 
using namespace std; 

// This function takes three parameters: 
// 1. String 
// 2. Starting index of the string 
// 3. Ending index of the string. 
void permute(string a, int l, int r) 
{ 
    // Base case 
    if (l == r) 
        cout<<a<<endl; 
    else
    { 
        // Permutations made 
        for (int i = l; i <= r; i++) 
        { 
  
            // Swapping done 
            swap(a[l], a[i]); 
  
            // Recursion called 
            permute(a, l+1, r); 
  
            //backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 
  
// Driver Code 
int main() 
{ 
    string str = "ABC"; 
    int n = str.size(); 
    permute(str, 0, n-1); 
    return 0; 
} 
  
  ```

  ## Output:-
```
ABC
ACB
BAC
BCA
CBA
CAB  
```

Algorithm Paradigm: Backtracking ;

Time Complexity: O(n*n!) Note that there are n! permutations and it requires O(n) time to print a permutation.;

Auxiliary Space: O(r – l);


## Code in Java:-

```    
// Java program to print all permutations of a given string.


public class Permutation
{
	public static void main(String[] args)
	{
		String str = "ABC";
		int n = str.length();
		Permutation permutation = new Permutation();
		permutation.permute(str, 0, n-1);
	}

	
	private void permute(String str, int l, int r)
	{
		if (l == r)
			System.out.println(str);
		else
		{
			for (int i = l; i <= r; i++)
			{
				str = swap(str,l,i);
				permute(str, l+1, r);
				str = swap(str,l,i);
			}
		}
	}

	
	public String swap(String a, int i, int j)
	{
		char temp;
		char[] charArray = a.toCharArray();
		temp = charArray[i] ;
		charArray[i] = charArray[j];
		charArray[j] = temp;
		return String.valueOf(charArray);
	}

}


```
## Code in Python:-
```
# Python program to print all permutations with
# duplicates allowed

def toString(List):
	return ''.join(List)

# Function to print permutations of string
# This function takes three parameters:
# 1. String
# 2. Starting index of the string
# 3. Ending index of the string.
def permute(a, l, r):
	if l==r:
		print (toString(a))
	else:
		for i in range(l,r):
			a[l], a[i] = a[i], a[l]
			permute(a, l+1, r)
			a[l], a[i] = a[i], a[l] # backtrack

# Driver program to test the above function
string = "ABC"
n = len(string)
a = list(string)
permute(a, 0, n)


```

#### Applications of Backtracking:-

N-queen problem

Sum of subset problem

Graph coloring

Hamiliton cycle
# Recursion tree 

## Explanation via recursion tree for permutatins of string "ABC":-

![gfg1](https://media.geeksforgeeks.org/wp-content/cdn-uploads/NewPermutation.gif)

## How does Backtracking work?
Backtracking is a systematic method of trying out various sequences of decisions until you find out that works. Let's understand through an example.

We start with a start node. First, we move to node A. Since it is not a feasible solution so we move to the next node, i.e., B. B is also not a feasible solution, and it is a dead-end so we backtrack from node B to node A.

![jtp1](https://static.javatpoint.com/tutorial/daa/images/backtracking.png)



Suppose another path exists from node A to node C. So, we move from node A to node C. It is also a dead-end, so again backtrack from node C to node A. We move from node A to the starting node.


![jtp2](https://static.javatpoint.com/tutorial/daa/images/backtracking2.png)
Now we will check any other path exists from the starting node. So, we move from start node to the node D. Since it is not a feasible solution so we move from node D to node E. The node E is also not a feasible solution. It is a dead end so we backtrack from node E to node D.

![jtp3](https://static.javatpoint.com/tutorial/daa/images/backtracking4.png)
Suppose another path exists from node D to node F. So, we move from node D to node F. Since it is not a feasible solution and it's a dead-end, we check for another path from node F.

![jtp4](https://static.javatpoint.com/tutorial/daa/images/backtracking4.png)
Suppose there is another path exists from the node F to node G so move from node F to node G. The node G is a success node.

![jtp5](https://static.javatpoint.com/tutorial/daa/images/backtracking5.png)


#### The terms related to the backtracking are:

**Live node**: The nodes that can be further generated are known as live nodes.

**E node**: The nodes whose children are being generated and become a success node.

**Success node**: The node is said to be a success node if it provides a feasible solution.

**Dead node**: The node which cannot be further generated and also does not provide a feasible solution is known as a dead node.

Many problems can be solved by backtracking strategy, and that problems satisfy complex set of constraints, and these constraints are of two types:

_Implicit constrain_: It is a rule in which how each element in a tuple is related.

_Explicit constraint_: The rules that restrict each element to be chosen from the given set.


## Authors

- [Geeks for Geeks](https://www.geeksforgeeks.org/)
- [Javatpoint](https://www.javatpoint.com/)
