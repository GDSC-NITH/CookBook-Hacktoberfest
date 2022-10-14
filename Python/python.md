# Python

Python is a high-level general-purpose programming language. His design philosophy emphasizes code readability by using clear indentation. Python is dynamically typed and garbage collected. It supports multiple programming paradigms, including structured (especially procedural), object-oriented, and functional programming. It is often referred to as a "batteries included" language due to its extensive standard library.

## Basics

* `input()`: used to take user input. By default, it returns the user input in form of a string.
* `print()`: used to print a python object(s) in Python as standard output.
* `#`: single line comments
* `''' '''`: Multi line comments
* `import` : Import in python is similar to #include header_file in C/C++

## Data types

| Types | Data-type|
|----|----|
|Text Type | str |
|Numeric Types | int, float, complex   |
|Sequence Types | list, tuple, range |
|Mapping Type | dict |
|Set Types | set, frozenset |
|Boolean Type | bool |
|None Type | NoneType |

## Variables

In Python language, the data type of the variable will be automatically determined from the value assigned, we need not define it explicitly.

```c
 variable-name = value
```

```c
value = 10 // declaring a variable and assigning value 10 to it which automatically gets stored as int
grade = 'A' // declaring a variable and assigning value A to it which automatically gets stored as string
```

### Casting

If you want to specify the data type of a variable, this can be done with casting.

```c
x = str(3)    # x will be '3'
y = int(3)    # y will be 3
z = float(3)  # z will be 3.0
```

### Naming convention

* only letters (both uppercase and lowercase letters), digits and underscore(`_`).
* cannot contain white spaces
* First letter should be either a letter or an underscore(`_`).
* Case sensitive
* Keywords cannot be used as variable names

## Arrays

Array can be handled in Python by a module named array. They can be useful when we have to manipulate only a specific data type values. A user can treat lists as arrays. However, user cannot constraint the type of elements stored in a list. If you create arrays using the array module, all elements of the array must be of the same type.

### Creating a Array

Array in Python can be created by importing array module. array(data_type, value_list) is used to create an array with data type and value list specified in its arguments.

```c
import array as arr

a = arr.array('i', [1, 2, 3]) # 'i' stands for int
```

## String

In Python, Strings are arrays of bytes representing Unicode characters.

### Example

```c
s="abcde" # or 'abcde'
print(s)     //prints s
```

## Operators

| Operator type | Description|
|----|-----|
| Arithmetic Operator|+ , - , * , / , //, % , ** |
| comparision Operator| < , > , <= , >=, != , == |
| Bitwise Operator| &  , | , ^ , >> , << , ~ |
| Logical Operator| and , or , not |
| Assignment Operator| = , += , -= , *= , /= , %=, //=, ** = , &=, ^=, >>== , <<== |
| Identity Operator| is , is not |
| Membership Operator| in , not in |

## Keywords(reserved words)

```c
False               class               from                or
None                continue            global              pass
True                def                 if                  raise
and                 del                 import              return
as                  elif                in                  try
assert              else                is                  while
async               except              lambda              with
await               finally             nonlocal            yield
break               for                 not
```

## Conditional Statements

### 1. If

```c
a = 33
b = 200
if b > a:
  print("b is greater than a") # Python relies on indentation (whitespace at the beginning of a line) to define scope in the code. 
```

### 2. Elif

```c
a = 33
b = 33
if b > a:
  print("b is greater than a")
elif a == b:
  print("a and b are equal")
```

### 3. Else

```c
a = 200
b = 33
if b > a:
  print("b is greater than a")
elif a == b:
  print("a and b are equal")
else:
  print("a is greater than b")
```

## Loops

### 1. While

```c
while (condition):
  #code
```

### 2. For

```c
for iterator_var in sequence:
    #code
```

## Functions

A function is a block of code which only runs when it is called. You can pass data, known as parameters, into a function. A function can return data as a result.

```c
# Creating a function: In Python a function is defined using the def keyword 
def my_function():
  #code

# Calling a Function: To call a function, use the function name followed by parenthesis
my_function()
```
