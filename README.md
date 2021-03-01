# learn-C-linux

## C Introduction

### Keywords and Identifiers

Character Set | Sample
------------ | -------------
Alphabets | Uppercase: **A B C ... X Y Z**
Alphabets | Lowercase: **a b c ... x y z**
Digits | **0, 1, 2, 3, 4, 5, 6, 7, 8, 9**
Special Characters | **, < > . _ ( ) ; $ : %[ ] # ? ' & { } " ^ ! * / | - \ ~ +**
White space Characters | **Blank space, newline, horizontal tab, carriage return and form feed**

#### C-Keywords

C-Keywords (reserved) |
------------ |
**auto**
**double**
**int**
**struct**
**break**
**else**
**long**
**switch**
**case**
**enum**
**register**
**typedef**
**char**
**extern**
**return**
**union**
**continue**
**for**
**signed**
**void**
**do**
**if**
**static**
**while**
**default**
**goto**
**sizeof**
**volatile**
**const**
**float**
**short**
**unsigned**

### C Variables, Constants and Literals

#### Variables

- variable is a container (storage area) to hold data
- variable should be given a unique name (identifier)
- variable names are just the symbolic representation of a memory location
- e.g.: int playerScore = 95;
- int -- type
- playerScore -- variable names; identifier
- 95 -- values; in this case integer 95

#### Literals

- **integers**:
  - **decimal** (base 10): 0, -9, 22 etc
  - **octal** (base 8): 021, 077, 033 etc
  - **hexadecimal** (base 16): 0x7f, 0x2a, 0x521 etc
- **floating-point**: -2.0, 0.0000234, -0.22E-5 etc
- **characters**
  - 'a', 'm', 'F', '2', '}'
  - enclosing a single character inside **single quotation marks**
- escape sequences:
  - **\b** :Backspace
  - **\f** :Form feed
  - **\n** :Newline
  - **\r** :Return
  - **\t** :Horizontal tab
  - **\v** :Vertical tab
  - **\\** :Backslash
  - **\'** :Single quotation mark
  - **\"** :Double quotation mark
  - **\?** :Question mark
  - **\0** :Null character
- **string literals**
  - a string literal is a sequence of characters enclosed in **double-quote marks**
  - e.g. :
    - "good" //string constant
    - "" //null string constant
    - "      " //string constant of six white space
    - "x" //string constant having a single character.
    - "Earth is round\n" //prints string with a newline

#### Constants

- define a variable whose value cannot be changed -- use the **const** keyword

### C Data Types

Type | Size (bytes) | Format Specifier | Details
------------ | ------------- | ------------- | -------------
**int** | 2 or 4 | %d or %i | whole numbers that can have both zero, positive and negative values but no decimal values**<br>2<sup>32</sup>distinct states from -2147483648** to 2147483647
**char** | 1 | %c | used for declaring character type variables
**float** | 4 | %f | used to hold real numbers
**double** | 8 | %lf | used to hold real numbers
**char** | 1 | %c
**long** | - | - | to use a large number
**short** | - | - | only a small integer ([−32,767, +32,767] range)
**short int** | 2 | %hd
**unsigned int** | 2 or 4 | %u
**long int** | 4 or 8 | %ld or %li
**long long int** | 8 | %lld or %lli
**unsigned** | - | - | hold only zero and positive values
**signed** | - | - | can hold positive and negative values
**unsigned long int** | 4 | %lu
**unsigned long long int** | 8 | %llu
**signed char** | 1 | %c
**unsigned char** | 1 | %c
**long double** | 10, 12, 16 | %Lf
**void** | - | - | incomplete type. It means "nothing" or "no type"
**sizeof** | - | - | check the size of a variable

#### Derived Data Types

Data types that are derived from fundamental data types are derived types

### C Input Output (I/O)

- C Output: **printf()**
- C Input: **scanf()**

### C Programming Operators

#### C Arithmetic Operators

Operator | Meaning of Operator
------------ | -------------
"+" | addition or unary plus
"-" | subtraction or unary minus
"*" | multiplication
"/" | division
"%" | remainder after division (modulo division)

#### C Increment and Decrement Operators

has two operators increment **++** and decrement **--** to change the value of an operand (constant or variable) by 1

#### C Assignment Operators

Operator | Example | Same as
------------ | ------------- | -------------
= | a = b | a = b
+= | a += b | a = a+b
-= | a -= b | a = a-b
*= | a *= b | a = a*b
/= | a /= b | a = a/b
%= | a %= b | a = a%b

#### C Relational Operators

Operator | Meaning of Operator | Example
------------ | ------------- | -------------
**==** | Equal to | 5 == 3 is evaluated to 0
**>** | Greater than | 5 > 3 is evaluated to 1
**<** | Less than | 5 < 3 is evaluated to 0
**!=** | Not equal to | 5 != 3 is evaluated to 1
**>=** | Greater than or equal to | 5 >= 3 is evaluated to 1
**<=** | Less than or equal to | 5 <= 3 is evaluated to 0

#### C Logical Operators

Operator | Meaning of Operator | Example
------------ | ------------- | -------------
&& | Logical AND. | True only if all operands are true. If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0.
\|\| | Logical OR. | True only if either one operand is true. If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1.
! | Logical NOT. | True only if the operand is 0. If c = 5 then, expression !(c==5) equals to 0.

#### C Bitwise Operators

Operator | Meaning of Operator
------------ | -------------
& | Bitwise AND
\| | Bitwise OR
^ | Bitwise exclusive OR
~ | Bitwise complement
<< | Shift left
\>> | Shift right

#### Other Operators

- Comma Operator:
  - Comma operators are used to link related expressions together
  - int a, c = 5, d;

- The sizeof operator:
  - unary operator that returns the size of data
  - sizeof

## C Flow Control

### C if...else Statement

#### C if Statement

```c
if (test expression) 
{
   // statements to be executed if the test expression is true
}
```

#### C if...else Statement

```c
if (test expression) {
    // statements to be executed if the test expression is true
}
else {
    // statements to be executed if the test expression is false
}
```

#### C if...else Ladder

```c
if (test expression1) {
   // statement(s)
}
else if(test expression2) {
   // statement(s)
}
else if (test expression3) {
   // statement(s)
}
.
.
else {
   // statement(s)
}
```

#### Nested if...else

It is possible to include an if...else statement inside the body of another if...else statement.

### C Loops

#### C for Loop

```c
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
```

#### C while and do...while Loop

##### C while Loop

```c
while (testExpression) 
{
    // statements inside the body of the loop 
}
```

##### C do...while Loop

```c
do
{
   // statements inside the body of the loop
}
while (testExpression);
```

### C break and continue

#### C break

**break** statement ends the loop immediately when it is encountered

#### C continue

**continue** statement skips the current iteration of the loop and continues with the next iteration.

### C switch Statement

```c
switch (expression)
​{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}
```

### C goto Statement

```c
goto label;
... .. ...
... .. ...
label: 
statement;
```

## C Functions

### Standard library functions

- functions are built-in functions in C programming
- defined in header files

### User-defined function

- functions created by the user

```c
#include <stdio.h>
void functionName()
{
    ... .. ...
    ... .. ...
}

int main()
{
    ... .. ...
    ... .. ...

    functionName();
    
    ... .. ...
    ... .. ...
}
```

### C Recursion

```c
void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}
```

### C Storage Class

#### Local Variable

automatic or local variables exist only inside the block in which it is declared

```c
int main() {
    int n1; // n1 is a local variable to main()
}

void func() {
   int n2;  // n2 is a local variable to func()
}
```

#### Global Variable

declared outside of all functions are known as external or global variables - accessible from any function inside the program

```c
#include <stdio.h>
void display();

int n = 5;  // global variable

int main()
{
    ++n;     
    display();
    return 0;
}

void display()
{
    ++n;   
    printf("n = %d", n);
}
```

Suppose, a global variable is declared in file1. If you try to use that variable in a different file file2, the compiler will complain. To solve this problem, keyword extern is used in file2 to indicate that the external variable is declared in another file.

#### Register Variable

register keyword is used to declare register variables

#### Static Variable

declared by using the static keyword and static variable persists until the end of the program

```c
#include <stdio.h>
void display();

int main()
{
    display();
    display();
}
void display()
{
    static int c = 1;
    c += 5;
    printf("%d  ",c);
}
```

## C Programming Arrays

variable that can store multiple values

```c
int data[100]; 
```

### How to declare an array?

```c
dataType arrayName[arraySize];

```

### Access Array Elements

access elements of an array by indices.

```c
int data[0];
.
.
.
int data[99]; 
```

### How to initialize an array?

```c
int mark[5] = {19, 10, 8, 17, 9};
int mark[] = {19, 10, 8, 17, 9};
```

### Change Value of Array elements

```c
int mark[5] = {19, 10, 8, 17, 9}

// make the value of the third element to -1
mark[2] = -1;

// make the value of the fifth element to 0
mark[4] = 0;
```

### Input and Output Array Elements

Storing

```c
// take input and store it in the 3rd element
​scanf("%d", &mark[2]);

// take input and store it in the ith element
scanf("%d", &mark[i-1]);
```

Outputing

```c
// print the first element of the array
printf("%d", mark[0]);

// print the third element of the array
printf("%d", mark[2]);

// print ith element of the array
printf("%d", mark[i-1]);
```

Example

```c
// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>

int main() {
  int values[5];

  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
```

Example

```c
// Program to find the average of n numbers using arrays

#include <stdio.h>
int main()
{
     int marks[10], i, n, sum = 0, average;

     printf("Enter number of elements: ");
     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &marks[i]);
          
          // adding integers entered by the user to the sum variable
          sum += marks[i];
     }

     average = sum/n;
     printf("Average = %d", average);

     return 0;
}
```

### C Multidimensional Arrays

#### Initialization of a 2d array

```c
// Different ways to initialize two-dimensional array

int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};
         
int c[][3] = {{1, 3, 0}, {-1, 5, 9}};
                
int c[2][3] = {1, 3, 0, -1, 5, 9};
```

#### Initialization of a 3d array

```c
int test[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};
```

Example 2D Array

```c
// C program to store temperature of two cities of a week and display it.
#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main()
{
  int temperature[CITY][WEEK];

  // Using nested loop to store values in a 2d array
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d: ", i + 1, j + 1);
      scanf("%d", &temperature[i][j]);
    }
  }
  printf("\nDisplaying values: \n\n");

  // Using nested loop to display vlues of a 2d array
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
    }
  }
  return 0;
}
```

```c
// C program to find the sum of two matrices of order 2*2

#include <stdio.h>
int main()
{
  float a[2][2], b[2][2], result[2][2];

  // Taking input using nested for loop
  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter a%d%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }

  // Taking input using nested for loop
  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter b%d%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }

  // adding corresponding elements of two arrays
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      result[i][j] = a[i][j] + b[i][j];
    }

  // Displaying the sum
  printf("\nSum Of Matrix:");

  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("%.1f\t", result[i][j]);

      if (j == 1)
        printf("\n");
    }
  return 0;
}
```

Example 3D Array

```c
// C Program to store and print 12 values entered by the user

#include <stdio.h>
int main()
{
  int test[2][3][2];

  printf("Enter 12 values: \n");

  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 2; ++k)
      {
        scanf("%d", &test[i][j][k]);
      }
    }
  }

  // Printing values with proper index.

  printf("\nDisplaying values:\n");
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 2; ++k)
      {
        printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
      }
    }
  }

  return 0;
}
```

### C Pointer

special variables that are used to store addresses rather than values.

#### Pointer Syntax

```c
int* p; // the best practices
int *p1;
int * p2;
```

#### Assigning addresses to Pointers

```c
int* pc, c;
c = 5;
pc = &c;
```

#### Get Value of Thing Pointed by Pointers

```c
int* pc, c;
c = 5;
pc = &c;
printf("%d", *pc);   // Output: 5
```

#### Changing Value Pointed by Pointers

```c
int* pc, c;
c = 5;
pc = &c;
c = 1;
printf("%d", c);    // Output: 1
printf("%d", *pc);  // Ouptut: 1
```

## Reference

1. [Learn C Programming](https://www.programiz.com/c-programming/)
2. [Run a C Program in Ubuntu and Other Linux Distributions](https://itsfoss.com/run-c-program-linux/)
