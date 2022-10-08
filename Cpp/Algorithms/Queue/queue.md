# Queue

A **Queue** is a useful data structure in programming. It is similar to the ticket queue outside a cinema hall, where the first person entering the queue is the first person who gets the ticket.

Queue follows the First In First Out (FIFO) rule - the item that goes in first is the item that comes out first.
![](https://cdn.programiz.com/sites/tutorial2program/files/queue.png)

## **Basic Operations of Queue**


A queue is an object (an abstract data structure - ADT) that allows the following operations:

**Enqueue**: Add an element to the end of the queue.

**Dequeue**: Remove an element from the front of the queue.

**IsEmpty**: Check if the queue is empty.

**IsFull**: Check if the queue is full.

**Peek**: Get the value of the front of the queue without removing it.


![](https://cdn.programiz.com/sites/tutorial2program/files/Queue-program-enqueue-dequeue.png)


## **Implementation of Queue using One Dimensional Array**

```
#include <iostream>
using namespace std;

class Queue
{
private:
    int *queueArray;
    int startIndex;
    int nextIndex;
    int capacity;
    int size;
    void expandArray()
    {
        int *newArray = new int[capacity * 2];
        int index = 0;
        for (int i = startIndex; i < capacity; i++)
        {
            newArray[index] = queueArray[i];
            index++;
        }
        for (int i = 0; i < startIndex; i++)
        {
            newArray[index] = queueArray[i];
            index++;
        }
        nextIndex = capacity;
        startIndex = 0;
        capacity = capacity * 2;
        delete[] queueArray;
        queueArray = newArray;
    }

public:
    Queue()
    {
        capacity = 5;
        queueArray = new int[capacity];
        nextIndex = 0;
        size = 0;
        startIndex = -1;
    }

    void enqueue(int element)
    {
        if (size == capacity)
        {
            expandArray();
        }
        queueArray[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if (startIndex == -1)
        {
            startIndex = 0;
        }
        size++;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        if (size == 0)
        {
            return true;
        }
        return false;
    }

    int front()
    {
        if (isEmpty())
        {
            cout << "Empty Queue" << endl;
            return 0;
        }
        return queueArray[startIndex];
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Empty Queue" << endl;
            return 0;
        }
        else
        {
            int ans = queueArray[startIndex];
            startIndex = (startIndex + 1) % capacity;
            size--;
            if (size == 0)
            {
                startIndex = -1;
                nextIndex = 0;
            }
            return ans;
        }
    }
};
```
## Complexity
### Time Complexity:
O(1) is the Time complexity of EnQueue,DeQueue,Front,isEmpty,size operations. When Queue becomes full ,to make new Queue Array of double size ,O(n) is the Time complexity of EnQueue. 

O(n) is traversing to print each n(number of elements), the time complexity of the Display operation.

### Space Complexity:
O(n) The space complexity is O(n), where n is the number of elements.

## **Implementation of Queue using Linked List**
```
#include <iostream>
using namespace std;
template <typename T>
class Node
{

public:
    T data;
    Node<T> *nextNode;
    

    Node(T data)
    {
        this->data = data;
        nextNode = NULL;
        
    }
    Node()
    {
        nextNode = NULL;
        
    }
};

template <typename T>
class Queue
{
private:
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            size++;
        }
        else
        {
            tail->nextNode = newNode;
            tail = tail->nextNode;
            size++;
        }
    }

    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Empty Queue" << endl;
            return 0;
        }
        Node<T> *temp = head;
        head = head->nextNode;
        size--;
        T ans = temp->data;
        delete temp;
        return ans;
    }
    T front()
    {
        if (isEmpty())
        {
            cout << "Empty Queue" << endl;
            return 0;
        }
        return head->data;
    }
};
```
## Complexity
### Time Complexity:
O(1) is the Time complexity of EnQueue,DeQueue,Front,isEmpty,size operations.

O(n) is traversing to print each n(number of elements), the time complexity of the Display operation.

### Space Complexity:
O(n) The space complexity is O(n), where n is the number of elements.

## Resources:
### [Programiz](https://www.programiz.com/dsa/queue)
### [GFG](https://www.geeksforgeeks.org/queue-data-structure/)

