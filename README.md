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


## Reference

1. [Learn C Programming](https://www.programiz.com/c-programming/)
2. [Run a C Program in Ubuntu and Other Linux Distributions](https://itsfoss.com/run-c-program-linux/)
