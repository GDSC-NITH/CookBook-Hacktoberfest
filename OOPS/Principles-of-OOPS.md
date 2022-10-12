# OOPS

## Four basic principles of Object Oriented Programming

There are 4 mainly principles that make an language Object Oriented.
These are Encapsulation, Data Abstraction, Polymorphism and Inheritance.
These are also called as four pillars of Object Oriented Programming.

## Encapsulation

Encapsulation is the mechanism of hiding of data implementation by restricting access to public methods.
Instance variables are kept private and accessor methods are made public to achieve this.

For example, we are hiding the name and dob attributes of person class in the below code snippet.

Encapsulation — private instance variable and public accessor methods.

```cpp

public class Employee 
{
    private String name;
    private Date dob;
    public String getName()
    {
        return name;
    }
    public void setName(String name) 
    {
        this.name = name;
    }
    public Date getDob()
    {
        return dob;
    }
    public void setDob(Date dob) 
    {
        this.dob = dob;
    }
}

```

## Abstraction

Abstraction can be defined as hiding internal implementation and showing only the required features or set of services that are offered.
This is the most essential part of Object-Oriented programming.
Using abstract class/Interface we express the intent of the class rather than the actual implementation.
In a way, one class should not know the inner details of another in order to use it, just knowing the interfaces should be good enough.

## Inheritance

Inheritances expresses “is-a” and/or “has-a” relationship between two objects.
Using Inheritance, In derived classes we can reuse the code of existing super classes.
In Java, concept of “is-a” is based on class inheritance (using extends) or interface implementation (using implements).

## Polymorphism

It means one name many forms. It is further of two types — static and dynamic.
Static polymorphism is achieved using method overloading and dynamic polymorphism using method overriding.
It is closely related to inheritance.
We can write a code that works on the superclass, and it will work with any subclass type as well.

```cpp

public void print(Collection<String> collection) 
{
    for (String str : collection)
    {
        System.out.println("str = " + str);
    }
}

```

## **Resources:**

* [**JAVAPOINT**](https://www.interviewbit.com/blog/principles-of-oops/)
* [**GFG**](https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/#intro)
