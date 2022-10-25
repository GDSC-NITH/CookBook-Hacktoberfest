# Data Types
All variables use data-type during declaration to restrict the type of data to be stored. Therefore, we can say that data types are used to tell the variables the type of data it can store. Whenever a variable is defined in C++, the compiler allocates some memory for that variable based on the data type with which it is declared. Every data type requires a different amount of memory.

##### C++ supports the following data types:

* Primary or Built in or Fundamental data type
* Derived data types
* User defined data types


Example
``` c++
int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String
```
![image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191113115600/DatatypesInC.png)

### Data types in C++ are mainly divided into three types: 
 ##### Primitive Data Types: 
These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char, float, bool, etc. Primitive data types available in C++ are: 

* Integer
* Character
* Boolean
* Floating Point
* Double Floating Point
* Valueless or Void
* Wide Character

##### Derived Data Types:
The data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. These can be of four types namely: 

* Function
* Array
* Pointer
* Reference


##### Abstract or User-Defined Data Types: 
These data types are defined by the user itself. Like, as defining a class in C++ or a structure. C++ provides the following user-defined datatypes: 

* Class
* Structure
* Union
* Enumeration
* Typedef defined Datatype


![image](https://user-images.githubusercontent.com/104310254/195938994-110560f5-da39-4e67-87fd-4e5c35c3f235.png)

The size of variables might be different from those shown in the above table, depending on the compiler
and the computer you are using.

sizeof operator — sizeof operator is used to find the number of bytes occupied by a variable/data type in computer memory. Eg:     int m , x[50];     cout<<sizeof(m); //returns 4 which is the number of bytes occupied by the integer variable “m”.     cout<<sizeof(x); //returns 200 which is the number of bytes occupied by the integer array variable “x”.     

##### Following is the example, which will produce correct size of various data types on your computer.
<br/>


``` c++
#include <iostream>
using namespace std;

int main()
{
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	
	cout << "Size of long : " << sizeof(long) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	
	cout << "Size of double : " << sizeof(double) << endl;
	
	return 0;
}
```
##### Output
![image](https://user-images.githubusercontent.com/104310254/195939942-88ef5221-bafc-4cec-a2a3-bea9735e91c4.png)

#### Datatype Modifiers
As the name suggests, datatype modifiers are used with the built-in data types to modify the length of data that a particular data type can hold. 
![image](https://user-images.githubusercontent.com/104310254/195940465-df467eaa-4101-4897-9c6e-3e89a2580a02.png)

##### Data type modifiers available in C++ are: 

* Signed
* Unsigned
* Short
* Long


##### Macro Constants
![image](https://user-images.githubusercontent.com/104310254/195942466-ffb26052-c7f3-4fcd-9bd3-eda72dcd5b1b.png)
