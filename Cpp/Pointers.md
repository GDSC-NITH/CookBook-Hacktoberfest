# Pointers in C++

A pointer is a variable that stores the memory address as its value.They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures.

## Syntax

```C++
datatype *var_name; 
int *ptr;   //ptr can point to an address which holds int data
```

![image](https://media.geeksforgeeks.org/wp-content/uploads/20200218181458/chain_pointer-1-1.jpg)

### How to use a Pointer?

* Define a pointer variable
* Assigning the address of a variable to a pointer using unary operator (&) which returns the address of that variable
* Accessing the value stored in the address using unary operator (*) which returns the value of the variable located at the address specified by its operand.

    By assigning data types to a pointer , we know how many bits are taken by the pointer.When we increment a pointer, we increase the pointer by the size of data type to which it points.

### C++ program to demonstrate use of pointers

``` c++
#include <iostream>
using namespace std;

int main()
{
 // A normal integer variable
 int Var = 10;

 // A pointer variable that holds address of var.
 int *ptr = &Var;

 // This line prints value at address stored in ptr.
 // Value stored is value of variable "var"
 cout << "Value of Var = "<< *ptr << endl;

 // The output of this line may be different in different
 // runs even on same machine.
 cout << "Address of Var = " << ptr << endl;

 // We can also use ptr as lvalue (Left hand
 // side of assignment)
 *ptr = 20; // Value at address is now 20

 // This prints 20
 cout << "After doing *ptr = 20, *ptr is "<< *ptr << endl;

 return 0}
```

### Output

![image](https://user-images.githubusercontent.com/104310254/194915423-1ee73b74-9b82-4faa-91e0-9a6fcc1d7b60.png)

### Understanding the above code pictorially

![image](https://user-images.githubusercontent.com/104310254/194915853-fe136c15-3e51-4a59-9101-92ed5746aec4.png)

### Pointer Expression and Pointer Arithmetic

Only a limited set of operations can be performed on Pointers such as

* incremented ( ++ )
* decremented ( — )
* an integer may be added to a pointer ( + or += )
* an integer may be subtracted from a pointer ( – or -= )

Pointers arithmetis is meaningless unless performed on array
Note: Pointers contain addresses. Adding two addresses makes no sense, because there is no idea what it would point to. Subtracting two addresses lets you compute the offset between these two addresses.

![img](https://www.bccfalna.com/ebooks/wp-content/uploads/ebooks/2015/05/Pointer-Expressions.png)

### Array Name as Pointers

An array name acts like a pointer constant. The value of this pointer constant is the address of the first element.
For example, if we have an array named val then val and &val[0] can be used interchangeably.

### C++ Program to Illustrate Array Name as Pointers

``` c++

#include <bits/stdc++.h>
using namespace std;

void geeks()
{
 // Declare an array
 int val[3] = { 5, 10, 15};

 // Declare pointer variable
 int *ptr;

 // Assign address of val[0] to ptr.
 // We can use ptr=&val[0];(both are same)
 ptr = val ;
 cout << "Elements of the array are: ";
 cout << ptr[0] << " " << ptr[1] << " " << ptr[2];

 return;
}

// Driver program
int main()
{
 geeks();
 return 0;
}

```

![image](https://user-images.githubusercontent.com/104310254/194918451-52e42762-5e1d-45e7-89da-3cfa10dad41e.png)

![image](https://user-images.githubusercontent.com/104310254/194918557-726c774a-35e1-45ed-b5d4-7f41f4ec5335.png)

## Resources

[Official Documentation](https://cplusplus.com/doc/tutorial/pointers/)

[GFG](https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/?ref=lbp)
