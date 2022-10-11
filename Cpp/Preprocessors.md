# Preprocessors

As the name suggests, Preprocessors are programs that process our source code before compilation. 
There are number of steps involved between writing a program and executing a program in C / C++. Let us have a look at these steps before we actually start learning about Preprocessors.
Pictorially it can be represented as ,

![image](https://user-images.githubusercontent.com/104310254/195145461-5c04b6f0-5b4c-4cf0-b970-866a979da844.png)

### There are 4 Main Types of Preprocessor Directives: 
* Macros
* File Inclusion
* Conditional Compilation
* Other directives

### 1. Marcos
Macros are pieces of code in a program that is given some name.

#define: define a macro substitution.
#undef: It is used for undefining a macro.

Let us understand this by a code:-
``` c++
#include <iostream>

// macro with parameter
#define AREA(l, b) (l * b)
int main()
{
	int l1 = 10, l2 = 5, area;

	area = AREA(l1, l2);

	std::cout << "Area of rectangle is: " << area;

	return 0;
}
```

##### Output

![image](https://user-images.githubusercontent.com/104310254/195147566-1d7f4831-6f6e-4664-a1e9-0b3b9335b450.png)

### 2. File Inclusion
This type of preprocessor directive tells the compiler to include a file in the source code program.

#include: specifies the files to be included, especially header files.

#### Syntax
```C++
#include< file_name > 
```
where file_name is the name of the file to be included.


### 3.Conditional Compilation
Conditional Compilation directives are a type of directive that helps to compile a specific portion of the program or to skip the compilation of some specific part of the program based on some conditions. This can be done with the help of the two preprocessing commands ‘ifdef‘ and ‘endif‘. 
#### Syntax
``` c++
#ifdef macro_name
    statement1;
    statement2;
    statement3;
    .
    .
    .
    statementN;
#endif
```
##### Conditional Compilation Directives:

#if: It tests a compile-time condition.
#elif
#endif: It specifies the end of #if.
#ifdef: It is used to test for macro definition.
#ifndef: It tests whether a macro is not defined.
#else: It provides an alternative option when #if fails.

### 4.Other directives

Apart from the above directives, there are two more directives that are not commonly used. These are: 
**#undef Directive**:- The #undef directive is used to undefine an existing macro. This directive works as:




##### Other Directives commands:-
#error
#line: Supplies a line number for compiler messages.
#pragma: It specifies implementation-defined instructions to the compiler.

Let us understand this by code
``` c++
#include <bits/stdc++.h>
using namespace std;
	
void func1();
void func2();

#pragma startup func1
#pragma exit func2

void func1()
{
	cout << "Inside func1()\n";
}

void func2()
{
	cout << "Inside func2()\n";
}

int main()
{
	void func1();
	void func2();
	cout << "Inside main()\n";

	return 0;
}


```
##### Output
![image](https://user-images.githubusercontent.com/104310254/195151780-5d4f15c4-0ab1-4e63-a098-c90dc449b5ef.png) <br/>
### Resources
 [GFG](https://www.geeksforgeeks.org/cc-preprocessors/?ref=lbp) 










