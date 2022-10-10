# Constructors and Destructors in C++

## Constructors
Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object which is why it is known as constructors.

## Syntax
#### Constructors can be defined in two ways :-
1)For defining Constructor within the class
``` c++ 
<class-name> (list-of-parameters) { // constructor definition }
```
Let us understand this by a code
``` c++
// defining the constructor within the class

#include <iostream>
using namespace std;

class student {
	int rno;
	char name[10];
	double fee;

public:
	student()
	{
		cout << "Enter the RollNo:";
		cin >> rno;
		cout << "Enter the Name:";
		cin >> name;
		cout << "Enter the Fee:";
		cin >> fee;
	}

	void display()
	{
		cout << endl << rno << "\t" << name << "\t" << fee;
	}
};

int main()
{
	student s; // constructor gets called automatically when
			// we create the object of the class
	s.display();

	return 0;
}
```
### Output
![image](https://user-images.githubusercontent.com/104310254/194933890-39510185-29b8-4163-b9cb-909da28f655d.png)

For defining Constructor outside the class:-


``` c++
<class-name>: :<class-name> (list-of-parameters){ // constructor definition}
```
Code for defining the Constructor outside of the class 
``` c++
// defining the constructor outside the class

#include <iostream>
using namespace std;
class student {
	int rno;
	char name[50];
	double fee;

public:
	student();
	void display();
};

student::student()
{
	cout << "Enter the RollNo:";
	cin >> rno;

	cout << "Enter the Name:";
	cin >> name;

	cout << "Enter the Fee:";
	cin >> fee;
}

void student::display()
{
	cout << endl << rno << "\t" << name << "\t" << fee;
}

int main()
{
	student s;
	s.display();

	return 0;
}

```
### Output
![image](https://user-images.githubusercontent.com/104310254/194934125-cf002900-167a-43f7-983c-c721f3023c9b.png)

## There are three types of Constructors

* Default constructor
* Parameterized constructor
* Copy Constructor

### Default Constructors
   Default constructor is also known as a zero-argument constructor, as it doesn’t take any parameter. It can be defined by the user if not then the compiler creates it on his own. Default constructor always initializes data members of the class with the same value they were defined.
   #### Syntax
   ``` c++
   class class_name{
  private: 
  // private members 
  
  public: 
  
  // declaring default constructor
  class_name()
  {
    // constructor body 
  }
  
};
```
#### Code to show the working of default constructor
``` c++
#include <iostream>
using namespace std;

class Person{
  
  // declaring private class data members 
private:
  string name;
  int age;
  
public: 

  // declaring constructor
  Person()
  {
      cout<<"Default constructor is called"<<endl;
      name = "student";
      age = 12;
  }
  
  // display function to print the class data members value 
  void display()
  {
      cout<<"Name of current object: "<<name<<endl;
      cout<<"Age of current object: "<<age<<endl;
  }
  
};
int main() 
{
    // creating object of class using default constructor
    Person obj;
    
    // printing class data members 
    obj.display();
    
    return 0;
}
```
#### Output
![image](https://user-images.githubusercontent.com/104310254/194937074-6dcaa7de-a731-4c62-97e1-50ec899b5914.png)

### Parameterized constructor
Parameterized constructor is used to initialize data members with the values provided by the user. This constructor is basically the upgraded version of the default constructor. We can define more than one parameterized constructor according to the need of the user, but we have to follow the rules of the function overloading, like a different set of arguments must be there for each constructor.

#### Syntax
``` c++
class class_name{
  private: 
  // private members 
  
  public: 
  
  // declaring parameterized constructor
  class_name(parameter1, parameter2,...)
  {
    // constructor body 
  }
  
};
```
#### Code to understand the working of the parameterized constructor
``` c++
#include <iostream>
using namespace std;

class Person{
  
  // declaring private class data members 
private:
  string name;
  int age;
  
public: 

  // declaring parameterized constructor of three different types 
  Person(string person_name)
  {
      cout<<"Constructor to set name is called"<<endl;
      name = person_name;
      age = 12;
  }
  
  Person(int person_age)
  {
      cout<<"Constructor to set age is called"<<endl;
      name = "Student";
      age = person_age;
  }
  
  Person(string person_name, int person_age)
  {
      cout<<"Constructor for both name and age is called"<<endl;
      name = person_name;
      age = person_age;
  }
  // display function to print the class data members value 
  void display()
  {
      cout<<"Name of current object: "<<name<<endl;
      cout<<"Age of current object: "<<age<<endl;
      cout<<endl;
  }
  
};
int main() 
{
    // creating objects of class using parameterized constructor
    Person obj1("First person");
    
    // printing class data members for first object 
    obj1.display();
    
    Person obj2(25);
    
    // printing class data members for second object 
    obj2.display();
    
    Person obj3("Second person",15);
    
    // printing class data members for third object 
    obj3.display();
    return 0;
}
```
#### Output
![image](https://user-images.githubusercontent.com/104310254/194938336-d0211026-7163-4e03-b3c2-8534ca72bc97.png)

### Copy Constructor
If we have an object of a class and we want to create its copy in a new declared object of the same class, then a copy constructor is used. The compiler provides each class a default copy constructor and users can define it also. It takes a single argument which is an object of the same class.

### Syntax
``` c++
class class_name{
  private: 
  // private members 
  
  public: 
  
  // declaring copy constructor
  class_name(const class_name& obj)
  {
    // constructor body 
  }
  
};
```
### Code to understand the working of the copy constructor
``` c++
#include <iostream>
using namespace std;

class Person{
  
  // declaring private class data members 
private:
  string name;
  int age;
  
public: 
  Person(string person_name, int person_age)
  {
      cout<<"Constructor for both name and age is called"<<endl;
      name = person_name;
      age = person_age;
  }
  
  Person(const Person& obj)
  {
      cout<<"Copy constructor is called"<<endl;
      name = obj.name;
      age = obj.age;
  }
  // display function to print the class data members value 
  void display()
  {
      cout<<"Name of current object: "<<name<<endl;
      cout<<"Age of current object: "<<age<<endl;
      cout<<endl;
  }
  
};
int main() 
{
    // creating objects of class using parameterized constructor
    Person obj1("First person",25);
    
    // printing class data members for first object 
    obj1.display();
    
    // creating copy of the obj1
    Person obj2(obj1);
    
    // printing class data members for second object 
    obj2.display();
    
    return 0;
}
```
### Output
![image](https://user-images.githubusercontent.com/104310254/194940560-82b671b0-77a9-4d0c-bc53-8851f92a3255.png)

## Destructors
A destructor is also a special member function as a constructor. Destructor destroys the class objects created by the constructor. Destructor has the same name as their class name preceded by a tilde (~) symbol. It is not possible to define more than one destructor. The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded. Destructor neither requires any argument nor returns any value. It is automatically called when the object goes out of scope.  Destructors release memory space occupied by the objects created by the constructor. In destructor, objects are destroyed in the reverse of object creation.

## Syntax
``` c++
class class_name{
  private: 
  // private members 
  
  public: 
  
  // declaring destructor
  ~class_name()
  {
    // destructor body 
  }
  
};
```

## Code to Demonstrate Destructors
``` c++
#include <iostream>
using namespace std;
class Test {
public:
	Test() { cout << "\n Constructor executed"; }

	~Test() { cout << "\n Destructor executed"; }
};

main()
{
	Test t, t1, t2, t3;
	return 0;
}

```
## Output
![image](https://user-images.githubusercontent.com/104310254/194941460-aa77412f-de6f-4c31-b351-c16c944a8d98.png)

## Resources
[GFG](https://www.geeksforgeeks.org/constructors-c/?ref=lbp) <br/>
[CodeMentor](https://www.codementor.io/@supernerdd7/constructor-and-destructor-in-c-1r8kkogm6j#:~:text=Constructor%20and%20Destructor%20are%20the,when%20the%20object%20is%20destroyed.)








