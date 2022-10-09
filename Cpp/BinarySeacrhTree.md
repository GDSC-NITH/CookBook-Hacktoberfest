# **Binary Search Tree(BST)**

In this tutorial, you will learn how Binary Search Tree works. Also, you will find working examples of Binary Search Tree in C, C++, Java and Python.

Binary search tree is a data structure that quickly allows us to maintain a sorted list of numbers.

* It is called a binary tree because each tree node has a maximum of two children.
* It is called a search tree because it can be used to search for the presence of a number in `O(log(n))` time.

The properties that separate a binary search tree from a regular [`binary tree`](https://www.programiz.com/data-structures/trees) is

1. All nodes of left subtree are less than the root node
2. All nodes of right subtree are more than the root node
3. Both subtrees of each node are also BSTs i.e. they have the above two properties

<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-vs-not-bst.png" alt="Text Widget Output" width="500" height="300">
</p>

<br>

`A tree having a right subtree with one value smaller than the root is shown to demonstrate that it is not a valid binary search tree`

The binary tree on the right isn't a binary search tree because the right subtree of the node "3" contains a value smaller than it.

There are two basic operations that you can perform on a binary search tree:

<br>

***

<br>

## **Search Operation**

The algorithm depends on the property of BST that if each left subtree has values below root and each right subtree has values above the root.

If the value is below the root, we can say for sure that the value is not in the right subtree; we need to only search in the left subtree and if the value is above the root, we can say for sure that the value is not in the left subtree; we need to only search in the right subtree.

### **Algorithm:**

<br>

```
If root == NULL 
    return NULL;
If number == root->data 
    return root->data;
If number < root->data 
    return search(root->left)
If number > root->data 
    return search(root->right)
```

Let us try to visualize this with a diagram.

<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-search-1.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`4 is not found so, traverse through the left subtree of 8`

<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-search-2.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`4 is not found so, traverse through the right subtree of 3`

<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-search-3.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`4 is not found so, traverse through the left subtree of 6`

<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-search-1.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`4 is found`

If the value is found, we return the value so that it gets propagated in each recursion step as shown in the image below.

If you might have noticed, we have called return search(struct node*) four times. When we return either the new node or NULL, the value gets returned again and again until search(root) returns the final result.


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-search-5.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`If the value is found in any of the subtrees, it is propagated up so that in the end it is returned, otherwise null is returned`

If the value is not found, we eventually reach the left or right child of a leaf node which is NULL and it gets propagated and returned.

<br>

***

<br>

## **Insert Operation**

Inserting a value in the correct position is similar to searching because we try to maintain the rule that the left subtree is lesser than root and the right subtree is larger than root.

We keep going to either right subtree or left subtree depending on the value and when we reach a point left or right subtree is null, we put the new node there.

### **Algorithm:**

```
If node == NULL 
    return createNode(data)
if (data < node->data)
    node->left  = insert(node->left, data);
else if (data > node->data)
    node->right = insert(node->right, data);  
return node;
```

The algorithm isn't as simple as it looks. Let's try to visualize how we add a number to an existing BST.


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-insert-1.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`4<8 so, transverse through the left child of 8`


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-insert-2.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`4>3 so, transverse through the right child of 8`


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-insert-3.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`4<6 so, transverse through the left child of 6`

<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-insert-4.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`Insert 4 as a left child of 6`

We have attached the node but we still have to exit from the function without doing any damage to the rest of the tree. This is where the `return node;` at the end comes in handy. In the case of `NULL`, the newly created node is returned and attached to the parent node, otherwise the same node is returned without any change as we go up until we return to the root.

This makes sure that as we move back up the tree, the other node connections aren't changed.


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-insert-5.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`Image showing the importance of returning the root element at the end so that the elements don't lose their position during the upward recursion step.`

<br>

***

<br>

## **Deletion Operation**

There are three cases for deleting a node from a binary search tree.

## **Case I**

In the first case, the node to be deleted is the leaf node. In such a case, simply delete the node from the tree.


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-delete-1.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`4 is to be deleted`


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-delete-2.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`Delete the node`

## **Case II**

In the second case, the node to be deleted lies has a single child node. In such a case follow the steps below:

1. Replace that node with its child node.
2. Remove the child node from its original position.


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-delete-3.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`6 is to be deleted`


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-delete-4.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`copy the value of its child to the node and delete the child`


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-delete-5.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`Final tree`

## **Case III**

In the third case, the node to be deleted has two children. In such a case follow the steps below:

1. Get the inorder successor of that node.
2. Replace the node with the inorder successor.
3. Remove the inorder successor from its original position.


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-delete-6.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`3 is to be deleted`


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-delete-7.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`Copy the value of the inorder successor (4) to the node`


<br>

<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-delete-8.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

`Delete the inorder successor`

<br>

***

<br>

## **Examples**

```
// Binary Search Tree operations in C++

#include <iostream>
using namespace std;

struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    cout << root->key << " -> ";

    // Traverse right
    inorder(root->right);
  }
}

// Insert a node
struct node *insert(struct node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

// Find the inorder successor
struct node *minValueNode(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

// Driver code
int main() {
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  cout << "Inorder traversal: ";
  inorder(root);

  cout << "\nAfter deleting 10\n";
  root = deleteNode(root, 10);
  cout << "Inorder traversal: ";
  inorder(root);
}
```

<br>

***

<br>


## **Resource**

* [`Programiz`](https://www.programiz.com/dsa/binary-search-tree)
