# _PRINTF
## Do you know the printf function?
## No?
### **Get to know us!**

**printf** is a function that allows us to show or print a formatted string, this function is typical of the programming language "C" and has a prototype similar to the following, taking into account that the variable **"x"** has a value of 30:
```sh
    int x = 25;
    printf ("my age is:%d \n years old", x);
``` 
will print the following line.

```sh
vagrant @ vagrant-ubuntu-trusty-64:~$
my age is 25
```
### **And what can I print with printf**
Printf accepts different types of characters to print, but like all functions it has a standardized encoding that accepts with reserved words or characters the way I can print a different type of character, such as the following:

**Formatter** | **Departure**
-- | --
%d or %i | signed 10 base integer (int);
%u | unsigned base 10 integer (int)
%o | unsigned base 8 integer (int)
%x | base 16 integer, lowercase letters (int)
%X | base 16 integer, uppercase letters (int)
%c | character (char)
%s | character string (string)
%b | base binary 0,1
### **amazing printf! no?**
***
### **Now let's make our own printf**
To make our own printf we must start with something very important, our function name which we will call **_ printf**

## **_ printf**

What we will also do is fascinating because we will create our own printf function, in which we will give you a set of steps so that you can print according to a character or formatter the type of data that we need to print.

### **1.**
We create a header file that we will call
```sh
holberton.h
```
In **holberton.h** we will keep all the libraries that we need to include for the operation of our function **_ printf**, along with the prototypes that will make the connection with each file and its function.

### **2.**
we start with our main file! What a thrill!! which we will call

    _printf
    
This file will have all the structure or logic to tell our function **_printf** when it should work and under what parameters, looking for the encoding that we gave our file with **_getmatch_print.c**, managing to connect with the other functions necessary for each need:

* **_ putchar.c**
* **_printChar.c**
* **_printString.c**
* **_printInt.c**
* **_printDeci.c**
* **_printUnsInt.c**
* **_printBinary.c**
* **_printOcatl.c**
* **_printHexaLower.c**
* **_printHexaUpper.c**

### **3.**
We add a manual explaining how our function works, you can call it as follows:
```sh
vagrant @ vagrant-ubuntu-trusty-64:~$ ./man_3_printf
```
### **4.**
Now we compile! with the following:
```sh
vagrant @ vagrant-ubuntu-trusty-64:~$ gcc -Wall -Wextra -Werror -pedantic -Wno-format * .c -o test
```

### **5.**

## Now we will test our function! Now encode the following:
```sh
#include "holberton.h"
/ **
 * main - Entry point
 * Return: Always 0
 * /
int main (void)
{
    char name1[] = "Cristian Bedoya";
    char name2[] = "Jocelyn Vega";
    
    _printf ("members: [%s, %s] \n", name1, name2);
    
    return (0);
}
```

### ** Remember that it is a project open to your comments and you can contribute **
### **Thank you!**