# Java
Java is a programming language and a platform. Java is a high level, robust, object-oriented and secure programming language.
Java was developed by Sun Microsystems (which is now the subsidiary of Oracle) in the year 1995. James Gosling is known as the father of Java. 
Before Java, its name was Oak. Since Oak was already a registered company, so James Gosling and his team changed the name from Oak to Java.

## How Java Works?
Java language is first compiled into byte code and then it is interpreted into machine code. Thus, Java is both compiled as well as interpreted language.
* Java Development Kit (JDK): Collection of tools used for developing and running Java programs.
* Java Runtime Environment (JRE): Helps in executing programs developed in Java language.
## Basic Code Snippet for Java

```c
package AboutJava;//group class

public class MainClass {
    public static void main(String[] args) {//Entrypoint into the code/application
        
    }
}
```

## Basics
* `Scanner sc = new Scanner(System.in);`: read value into the variable n from input stream
* `System.out.println();`: print the value to the output stream
* `//`: single line comments
* `/* */`: Multi line comments

### Taking input from the keyboard 
```c
package AboutJava;
import java.util.Scanner;

public class MainClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();//For integer input
        String b = sc.next(); //For string input
        float = sc.nextFloat(); //For float input
    }
}
```

## Naming Conventions
* For classes, we use Pascal Convention in which first and subsequent characters from a word are capital letters(uppercase)
* For functions and variables, we use camelCase convention. Here, the first character is lowercase and the subsequent characters of next word are uppercase.
* only letters (both uppercase and lowercase letters), digits and underscore(`_`).
* cannot contain white spaces
* First letter should be either a letter or an underscore(`_`).
* Variable type can't be changed
* Case sensitive
* Keywords cannot be used as variable names

## Data types

| Types | Data-type|
|----|----|
|Primitive | int, char, float, double, short, byte, long, boolean |
|Non-Primitive | Classes, Interfaces, Strings, Object, Array, etc. |

