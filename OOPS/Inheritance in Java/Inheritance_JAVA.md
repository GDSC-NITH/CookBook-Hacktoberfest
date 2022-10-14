# Java Inheritance
-----------------
```
Inheritance is one of the key features of OOP or we can say it is an important pillar of
OOP(Object-Oriented Programming) that allows us to create a new class from an existing class.
```
![](https://i0.wp.com/studyexperts.in/blog/wp-content/uploads/2022/01/Inheritance-in-java.png?resize=1024%2C570&ssl=1)



## **What is Inheritance?**
----------------
Inheritance is a mechanism in which **one class acquires the property of another class**
 
 **For example**, a *child inherits the traits of his/her parents*. With inheritance, we can reuse the fields and methods of the existing class.
 
  Hence, inheritance facilitates **Reusability** and is an important concept of OOPs.
* * * *
## **Why use inheritance?**
------------------
- The most important use of inheritance in Java is code ***reusability***. The code that is present in the parent class can be directly used by the child class.
- ***Method overriding*** is also known as runtime polymorphism. Hence, ***we can achieve Polymorphism in Java with the help of inheritance.***

* * * *

## **Important terminology:**
-------------
- **Class**: A class is a group of objects which have common properties. It is a template or blueprint from which objects are created.
- **Super Class/Parent Class**: The class whose ***features are inherited*** is known as a superclass(or a base class or a parent class).
- **Sub Class/Child class**: The class that ***inherits the other class*** is known as a subclass(or a derived class, extended class, or child class).
- **Reusability**: Inheritance supports the concept of “reusability”, i.e. when we want to create a new class and there is already a class that includes some of the code that we want.  
  We can derive our new class from the existing class. By doing this, we are ***reusing the fields*** and ***methods of the existing class***.

  * * * *
## **How to use inheritance in Java**
------------------

 The keyword used for inheritance is **extends**. 

 **Syntax:** 
 ```
 class derived-class extends base-class  
{  
   //methods and fields  
}  
 ``` 

 * * * * 
 ## **Java Inheritance Example**
 ------------------

 ![](https://static.javatpoint.com/images/core/inheritance.jpg)

 As displayed in the above figure, **Programmer is the subclass** and **Employee is the superclass**. 
 
 The relationship between the two classes is Programmer IS-A Employee. It means that Programmer is a type of Employee.
 ```
 class Employee{  
 float salary=40000;  
}  
class Programmer extends Employee{  
 int bonus=10000;  
 public static void main(String args[]){  
   Programmer p=new Programmer();  
   System.out.println("Programmer salary is:"+p.salary);  
   System.out.println("Bonus of Programmer is:"+p.bonus);  
}  
}  
 ```
 **Output:**
 ```
Programmer salary is:40000.0
Bonus of Programmer is:10000
 ```

 In the above example, Programmer object can access the field of own class as well as of Employee class i.e. code reusability.

 * * * * *
 ## **Types of inheritance**
 --------------
 There are five types of inheritance.
 -

----------------------
- ## ***Single Inheritance***: 
In single inheritance,***subclasses inherit the features of one superclass***.In the image below, class A serves as a base class for the derived class B.

![](https://media.geeksforgeeks.org/wp-content/uploads/20220728111827/1.jpg)

 **Code**

 ------------

 ```
 // Java program to illustrate the
// concept of single inheritance
import java.io.*;
import java.lang.*;
import java.util.*;

class one {
	public void print_geek()
	{
		System.out.println("Geeks");
	}
}

class two extends one {
	public void print_for() { System.out.println("for"); }
}
// Driver class
public class Main {
	public static void main(String[] args)
	{
		two g = new two();
		g.print_geek();
		g.print_for();
		g.print_geek();
	}
}

 ```
 **Output:**
 ```
 Geeks
 for
 Geeks
 ```
 ---------------

 - ## ***Multilevel Inheritance:*** 
 In Multilevel Inheritance, a ***derived class will be inheriting a base class*** and ***as well as the derived class*** also act as the base class to other class.
 ![](https://media.geeksforgeeks.org/wp-content/uploads/20220728111913/2.jpg)

 **Code**

 --------------------
 ```
 // Java program to illustrate the
// concept of Multilevel inheritance
import java.io.*;
import java.lang.*;
import java.util.*;

class one {
	public void print_geek()
	{
		System.out.println("Geeks");
	}
}

class two extends one {
	public void print_for() { System.out.println("for"); }
}

class three extends two {
	public void print_geek()
	{
		System.out.println("Geeks");
	}
}

// Drived class
public class Main {
	public static void main(String[] args)
	{
		three g = new three();
		g.print_geek();
		g.print_for();
		g.print_geek();
	}
}

 ```
 **Output**
 ```
Geeks
for
Geeks
 ```
 ----------------

 - ## ***Hierarchical Inheritance:***
 In Hierarchical Inheritance, ***one class serves as a superclass (base class) for more than one subclass***.

 ![](https://media.geeksforgeeks.org/wp-content/uploads/20220728113104/5drawio.png)

 **Code**

 ---------
 ```
 // Java program to illustrate the
// concept of Hierarchical inheritance

class A {
	public void print_A() { System.out.println("Class A"); }
}

class B extends A {
	public void print_B() { System.out.println("Class B"); }
}

class C extends A {
	public void print_C() { System.out.println("Class C"); }
}

class D extends A {
	public void print_D() { System.out.println("Class D"); }
}

// Driver Class
public class Test {
	public static void main(String[] args)
	{
		B obj_B = new B();
		obj_B.print_A();
		obj_B.print_B();

		C obj_C = new C();
		obj_C.print_A();
		obj_C.print_C();

		D obj_D = new D();
		obj_D.print_A();
		obj_D.print_D();
	}
}

 ```
 **Output:**
 ```
Class A
Class B
Class A
Class C
Class A
Class D
 ```
 --------------
 - ## ***Hybrid Inheritance(Through Interfaces):***
 Hybrid inheritance is a **combination of two or more types of inheritance**. For example:

 ![](https://media.geeksforgeeks.org/wp-content/uploads/20220728112142/4-660x330.jpg)

 - ## ***Multiple Inheritance***
 In Multiple inheritances, **one class can have more than one superclass and inherit features from all parent classes**.
```
Please note that Java does not support multiple inheritances with classes.
```
![](https://media.geeksforgeeks.org/wp-content/uploads/20220728112121/3.jpg)

**Code:**
```
// Java program to illustrate the
// concept of Multiple inheritance
import java.io.*;
import java.lang.*;
import java.util.*;

interface one {
	public void print_geek();
}

interface two {
	public void print_for();
}

interface three extends one, two {
	public void print_geek();
}
class child implements three {
	@Override public void print_geek()
	{
		System.out.println("Geeks");
	}

	public void print_for() { System.out.println("for"); }
}

// Drived class
public class Main {
	public static void main(String[] args)
	{
		child c = new child();
		c.print_geek();
		c.print_for();
		c.print_geek();
	}
}

```
**Output:**
```
Geeks
for
Geeks
```
* * * *
## **Important facts about inheritance in Java**
---------------
- ***Superclass can only be one***: A superclass can have any number of subclasses. But a subclass can have only one superclass. This is because Java does not support multiple inheritances with classes.
- ***Private member inheritance:*** A subclass does not inherit the private members of its parent class. 
- ***Default superclass:*** Except Object class, which has no superclass, every class has one and only one direct superclass (single inheritance).






 

## Resource

- [GFG](https://www.geeksforgeeks.org/inheritance-in-java/)
- [Javatpoint](https://www.javatpoint.com/inheritance-in-java)

