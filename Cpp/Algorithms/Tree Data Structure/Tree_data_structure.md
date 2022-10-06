
# Tree Data Structure

A tree is non-linear and a hierarchical data structure consisting of a collection of nodes such that each node of the tree stores a value and a list of references to other nodes (the “children”).

![g1](https://user-images.githubusercontent.com/96624900/194362123-2cb9e2a5-292c-4a97-92b7-0726faa0ed75.JPG)


### Basic Terminologies In Tree Data Structure:
- Parent Node: The node which is a predecessor of a node is called the parent node of that node. 
- Child Node: The node which is the immediate successor of a node is called the child node of that node. 
- Root Node: The topmost node of a tree or the node which does not have any parent node is called the root node. 
- Leaf Node or External Node: The nodes which do not have any child nodes are called leaf nodes. 
- Ancestor of a Node: Any predecessor nodes on the path of the root to that node are called Ancestors of that node.
- Descendant: Any successor node on the path from the leaf node to that node.
- Sibling: Children of the same parent node are called siblings.

## Properties of a Tree:
![OK](https://user-images.githubusercontent.com/96624900/194370827-98ac64b7-53b2-40bd-ae3a-eaee7d04ca5d.JPG)


- ### Depth of a node: 
  The depth of a node is defined as the length of the path from the root to that node. 

- ### Height of a node:
  The height of a node can be defined as the length of the longest path from the node to a leaf node of the tree.

- ### Degree of a Node: 
  The total count of subtrees attached to that node is called the degree of the node. The degree of a leaf node must be 0. 

- ### Height of the Tree:
  The height of a tree is the length of the longest path from the root of the tree to a leaf node of the tree.

## Some more properties of a Tree:
 - Traversing in a tree is done by depth first search and breadth first search algorithm.
 - It has no loop and no circuit
 - Its hierarchical model.

## Syntax:
![g2](https://user-images.githubusercontent.com/96624900/194364620-498c3afe-53ef-45d9-8e0b-5c86e8ce1547.JPG)

## Basic Operation Of Tree:

![g3](https://user-images.githubusercontent.com/96624900/194365068-1bdceb9e-6c43-4e5c-bf26-a804c510e4b6.JPG)

## Example of Tree data structure:

![g4](https://user-images.githubusercontent.com/96624900/194365087-c42650c8-f33d-4771-9a99-b1c68b6c30f7.JPG)

Here,

Node A is the root node

B is the parent of D and E

D and E are the siblings

D, E, F and G are the leaf nodes

A and B are the ancestors of E

## Types of Tree data structures
The different types of tree data structures are as follows:

   1. ### General tree

  A general tree data structure has no restriction on the number of nodes. It means that a parent node can have any number of child nodes.  

 2. ### Binary tree  

A node of a binary tree can have a maximum of two child nodes. In the given tree diagram, node B, D, and F are left children, while E, C, and G are the right children.  

3. ###  Balanced tree

If the height of the left sub-tree and the right sub-tree is equal or differs at most by 1, the tree is known as a balanced tree.  

   - ### Balanced Tree
![balance](https://user-images.githubusercontent.com/96624900/194368382-a7a4fbdb-bb15-4399-9362-0cccb6e9c877.JPG)
- ### Unbalanced Tree
![unbalance](https://user-images.githubusercontent.com/96624900/194368421-7146c0a6-0400-4404-af3a-8433cbeb81d7.JPG)

4. ### Binary search tree

As the name implies, binary search trees are used for various searching and sorting algorithms.It is a non-linear data structure. It shows that the value of the left node is less than its parent, while the value of the right node is greater than its parent.

## Applications of Tree data structure:
The applications of tree data structures are as follows:

1. ###  Spanning trees: 
It is the shortest path tree used in the routers to direct the packets to the destination. 

2. ###  Storing hierarchical data: 
Tree data structures are used to store the hierarchical data, which means data is arranged in the form of order.  

3. ### Syntax tree: 
The syntax tree represents the structure of the program’s source code, which is used in compilers.  

4. ### Trie: 
It is a fast and efficient way for dynamic spell checking. It is also used for locating specific keys from within a set.  

5. ### Heap: 
It is also a tree data structure that can be represented in a form of an array. It is used to implement priority queues.  
## Resource

- [GFG](https://www.geeksforgeeks.org/introduction-to-tree-data-structure-and-algorithm-tutorials/)

