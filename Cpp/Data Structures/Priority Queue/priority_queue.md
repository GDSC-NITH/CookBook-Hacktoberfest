# **Priority Queue Data Structure**

## **Introduction**

Priority Queue is an abstract data type that is similar to a queue, and every element has some priority value associated with it. The priority of the elements in a priority queue determines the order in which elements are served (i.e., the order in which they are removed). If in any case the elements have same priority, they are served as per their ordering in the queue.

## **Properties of Priority Queue**

A priority Queue is an extension of the queue with the following properties:

1. Every item has a priority associated with it.
2. An element with high priority is dequeued before an element with low priority.
3. If two elements have the same priority, they are served according to their order in the queue.

<br>

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Priority-Queue-min-1024x512.png" alt="Text Widget Output" width="600" height="300">
</p>

<br>

## **How is Priority assigned to the elements in a Priority Queue?**

In a priority queue, generally, the value of an element is considered for assigning the priority.

For example, the element with the highest value is assigned the highest priority and the element with the lowest value is assigned the lowest priority. The reverse case can also be used i.e., the element with the lowest value can be assigned the highest priority. Also, the priority can be assigned according to our needs.

## **Operations of a Priority Queue:**

A typical priority queue supports the following operations:

### **1. insertion in Priority Queue:**

When a new element is inserted in a priority queue, it moves to the empty slot from top to bottom and left to right. However, if the element is not in the correct place then it will be compared with the parent node. If the element is not in the correct order, the elements are swapped. The swapping process continues until all the elements are placed in the correct position.

### **2. Deletion in a Priority Queue:**

As you know that in a max heap, the maximum element is the root node. And it will remove the element which has maximum priority first. Thus, you remove the root node from the queue. This removal creates an empty slot, which will be further filled with new insertion. Then, it compares the newly inserted element with all the elements inside the queue to maintain the heap invariant.

### **3. Peek in a Priority Queue:**

This operation helps to return the maximum element from Max Heap or the minimum element from Min Heap without deleting the node from the priority queue.

## **Types of priority queue:**

### **1. Ascending Order priority queue:**

As the name suggests, in ascending order priority queue, the element with a lower priority value is given a higher priority in the priority list. For example, if we have the following elements in a priority queue arranged in ascending order like 4,6,8,9,10. Here, 4 is the smallest number, therefore, it will get the highest priority in a priority queue.

### **2. Descending Order priority queue:**

The root node is the maximum element in a max heap, as you may know. It will also remove the element with the highest priority first. As a result, the root node is removed from the queue. This deletion leaves an empty space, which will be filled with fresh insertions in the future. The heap invariant is then maintained by comparing the newly inserted element to all other entries in the queue.

<br>

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20220623153252/priorityqueue.jpg" alt="Text Widget Output" width="350" height="300">
</p>

<br>

## **Difference between Priority Queue and Normal Queue?**

There is no priority attached to elements in a queue, the rule of first-in-first-out(FIFO) is implemented whereas, in a priority queue, the elements have a priority. The elements with higher priority are served first.

## **How to Implement Priority Queue?**

Priority queue can be implemented using the following data structures:

- Arrays
- Linked List
- Heap Data Structure
- Binary Search Tree

#### **Code Discussion:**

### **1) Implement Priority Queue Using Array:**

A simple implementation is to use an array of the following structure.

```
struct item {
        int item;
        int priority;
}
```

- Enqueue() : This function is used to insert data in the queue.
- Dequeue() : This function removes the element with the highest priority from the queue.
- peek()/top() : This function is used to get the highest priority element in the queue without removing it from the queue.

      Arrays           | Enqueue() | Dequeue() | peek()  |

      Time Complexity  |   O(1)    |   O(n)    |  O(n)   |

Code :

```
// C++ program to implement Priority Queue
// using Arrays
#include <bits/stdc++.h>
using namespace std;

// Structure for the elements in the
// priority queue
struct item {
    int value;
    int priority;
};

// Store the element of a priority queue
item pr[100000];

// Pointer to the last index
int size = -1;

// Function to insert a new element
// into priority queue
void enqueue(int value, int priority)
{
    // Increase the size
    size++;

    // insert the element
    pr[size].value = value;
    pr[size].priority = priority;
}

// Function to check the top element
int peek()
{
    int highestPriority = INT_MIN;
    int ind = -1;

    // Check for the element with
    // highest priority
    for (int i = 0; i <= size; i++) {

        // If priority is same choose
        // the element with the
        // highest value
        if (highestPriority == pr[i].priority && ind > -1
            && pr[ind].value < pr[i].value) {
            highestPriority = pr[i].priority;
            ind = i;
        }
        else if (highestPriority < pr[i].priority) {
            highestPriority = pr[i].priority;
            ind = i;
        }
    }

    // Return position of the element
    return ind;
}

// Function to remove the element with
// the highest priority
void dequeue()
{
    // Find the position of the element
    // with highest priority
    int ind = peek();

    // Shift the element one index before
    // from the position of the element
    // with highest priority is found
    for (int i = ind; i < size; i++) {
        pr[i] = pr[i + 1];
    }

    // Decrease the size of the
    // priority queue by one
    size--;
}

// Driver Code
int main()
{
    // Function Call to insert elements
    // as per the priority
    enqueue(10, 2);
    enqueue(14, 4);
    enqueue(16, 4);
    enqueue(12, 3);

    // Stores the top element
    // at the moment
    int ind = peek();

    cout << pr[ind].value << endl;

    // Dequeue the top element
    dequeue();

    // Check the top element
    ind = peek();
    cout << pr[ind].value << endl;

    // Dequeue the top element
    dequeue();

    // Check the top element
    ind = peek();
    cout << pr[ind].value << endl;

    return 0;
}
```

Output:

16

14

12

### **2) Implement Priority Queue Using Linked List:**

In a LinkedList implementation, the entries are sorted in descending order based on their priority. The highest priority element is always added to the front of the priority queue, which is formed using linked lists. The functions like push(), pop(), and peek() are used to implement a priority queue using a linked list and are explained as follows:

- push(): This function is used to insert new data into the queue.
- pop(): This function removes the element with the highest priority from the queue.
- peek() / top(): This function is used to get the highest \* priority element in the queue without removing it from the queue.

      Linked List      | Push() |  Pop()  | peek() |

      Time Complexity  |  O(n)  |   O(1)  |  O(1)  |

Code:

```
// C++ code to implement Priority Queue
// using Linked List
#include <bits/stdc++.h>
using namespace std;

// Node
typedef struct node {
    int data;

    // Lower values indicate
    // higher priority
    int priority;

    struct node* next;

} Node;

// Function to create a new node
Node* newNode(int d, int p)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;

    return temp;
}

// Return the value at head
int peek(Node** head) { return (*head)->data; }

// Removes the element with the
// highest priority form the list
void pop(Node** head)
{
    Node* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

// Function to push according to priority
void push(Node** head, int d, int p)
{
    Node* start = (*head);

    // Create new Node
    Node* temp = newNode(d, p);

    // Special Case: The head of list has
    // lesser priority than new node
    if ((*head)->priority < p) {

        // insert New Node before head
        temp->next = *head;
        (*head) = temp;
    }
    else {

        // Traverse the list and find a
        // position to insert new node
        while (start->next != NULL
               && start->next->priority > p) {
            start = start->next;
        }

        // Either at the ends of the list
        // or at required position
        temp->next = start->next;
        start->next = temp;
    }
}

// Function to check is list is empty
int isEmpty(Node** head) { return (*head) == NULL; }

// Driver code
int main()
{

    // Create a Priority Queue
    // 7->4->5->6
    Node* pq = newNode(4, 1);
    push(&pq, 5, 2);
    push(&pq, 6, 3);
    push(&pq, 7, 0);

    while (!isEmpty(&pq)) {
        cout << " " << peek(&pq);
        pop(&pq);
    }
    return 0;
}
```

Output: 6 5 4 7

### **3) Implement Priority Queue Using Heaps:**

Binary Heap is generally preferred for priority queue implementation because heaps provide better performance compared to arrays or LinkedList. Operations on Binary Heap are as follows:

- insert(p): inserts a new element with priority p.
- extractMax(): Extracts an element with maximum priority.
- remove(i): Removes an element pointed by an iterator i.
- getMax(): Returns an element with maximum priority.
- changePriority(i, p): Changes the priority of an element pointed by i to p.

      Binary Heap      | insert()   |  Remove()  | peek() |

      Time Complexity  | O(log n)   |  O(log n)  |  O(1)  |

### **4) Implement Priority Queue Using Binary Search Tree:**

A Self-Balancing Binary Search Tree like AVL Tree, Red-Black Tree, etc. can also be used to implement a priority queue. Operations like peek(), insert() and delete() can be performed using BST.

      Binary Search Tree | peek() |  insert() | delete() |

      Time Complexity    |  O(1)  |  O(log n) | O(log n) |

## **Application of Priority Queue:**

- CPU Scheduling
- Graph algorithms like Dijkstra’s shortest path algorithm, \* Prim’s Minimum Spanning Tree, etc.
- Stack Implementation
- All queue applications where priority is involved.
- Data compression in Huffman code
- Event-driven simulation such as customers waiting in a queue.
- Finding Kth largest/smallest element.

## **Resources:**

- [`Geeks For Geeks`](https://www.geeksforgeeks.org/priority-queue-set-1-introduction/)
