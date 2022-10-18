
# Strings

- Strings are used for storing text. A string variable contains a collection of characters surrounded by double quotes.

- To use strings, you must include an additional header file in the source code, the <string> library.

#### Example

```bash
#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting;
  return 0;
}
```
#### Output:
![cpp-example-output](https://user-images.githubusercontent.com/99107358/196533616-248f89bf-6474-495b-9f40-78dce0553725.png)
  
## String Concatenation

The + operator can be used between strings to add them together to make a new string. This is called concatenation.

## Example

```bash

#include <string>
using namespace std;
 
int main () {
  string firstName = "Rahul";
  string lastName = "Verma";
  string fullName = firstName + " " + lastName;
  cout << fullName;
  return 0;
}
```
  #### Output:
  ![concatenation-cpp-eg](https://user-images.githubusercontent.com/99107358/196534511-6ae207d4-0bc5-4b5c-9806-f20979158fd0.png)
  

## Append a String

A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function.

```bash
#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "Rahul ";
  string lastName = "Verma";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}
```
#### Output:
![append-cpp-eg](https://user-images.githubusercontent.com/99107358/196534959-1356fa45-3586-463a-af48-119880590027.png)

## String Length

Length function of a string is used to determine the length of a string.

```bash
#include <iostream>
#include <string>
using namespace std;

int main() {
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length();
  return 0;
}
```
#### Output:
![length-cpp-eg](https://user-images.githubusercontent.com/99107358/196535404-1441a338-d1ba-4bfa-8b2a-ffab508663c8.png)

## Accessing characters of String
You can access the characters in a string by referring to its index number inside square brackets [].
  
  This example prints the second character in myString.
```bash
  #include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  cout << myString[1];
  return 0;
}
```
  #### Output: 
  ![access-cpp](https://user-images.githubusercontent.com/99107358/196537765-38438b97-ef95-4a51-b3bc-128e95f9d2c0.png)
  
### Change String Characters
  To change the value of a specific character in a string, refer to the index number, and use single quotes.
  
  ```bash
  #include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  myString[0] = 'J';
  cout << myString;
  return 0;
}
  ```
  
  #### Output:
  
  ![cpp-eg](https://user-images.githubusercontent.com/99107358/196539950-f74e6b5e-2f31-4a8c-86ea-82cc2e1eea42.png)
