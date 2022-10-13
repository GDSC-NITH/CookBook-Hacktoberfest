#
 What Are Pointers in C?

A pointer is a variable pointing to the address of another variable.
It is declared along with an asterisk symbol (*).

The syntax to declare a pointer is as follows:

         datatype *var1

The syntax to assign the address of a variable to a pointer is:

         datatype var1, *var2;

var2=&var1;

## Code solution

```c
#include<stdio.h>

int main()

{

  int a=5, *ptr;

  ptr=&a;

  printf(“Direct Access, a=%d\n”,a);

printf(“Indirect Access, a=%d\n”,*ptr);

  return 0;

}

```

## Void Pointer

When a pointer is declared with a void keyword, then it is called a void pointer.
To print the value of this pointer, you need to typecast it.

Syntax:

void *var;

## Code solution

```c

#include<stdio.h>

int main()

{

     int a=2;

     void *ptr;

ptr= &a;

printf("After Typecasting, a = %d", *(int *)ptr);

     return 0;

}



```

## NULL Pointer

If you assign a NULL value to a pointer during its declaration, it is called Null Pointer.

Syntax:

Int *var = NULL;

## Code solution

```c

#include<stdio.h>

int main()

{

int *var = NULL;

printf(“var=%d”,*var);

}

```

## Wild Pointer

A wild pointer is only declared but not assigned an address of any variable.
They are very tricky, and they may cause segmentation errors.

Syntax:

Int *var = NULL;

## Code solution

```c

#include<stdio.h>

int main()

{

  int *ptr;

  printf(“ptr=%d”,*ptr);

  return 0;

}

```

## Dangling Pointer

Suppose there is a pointer p pointing at a variable at memory 1004.
If you deallocate this memory, then this p is called a dangling pointer.
You can deallocate a memory using a free() function.

Syntax:

Int *var = NULL;

## Code solution

```c

#include<stdio.h>

#include<stdlib.h>

int main()

{

  int *ptr=(int *)malloc(sizeof(int));

  int a=5;

  ptr=&a;

  free(ptr);

  //now this ptr is known as dangling pointer.

printf(“After deallocating its memory *ptr=%d”,*ptr);

  return 0;

}

```

## **Resources:**

* [**GFG**](https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/)
