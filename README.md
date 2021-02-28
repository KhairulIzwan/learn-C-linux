# learn-C-linux

## Keywords and Identifiers

Character Set | Sample
------------ | -------------
Alphabets | Uppercase: **A B C ... X Y Z**
Alphabets | Lowercase: **a b c ... x y z**
Digits | **0, 1, 2, 3, 4, 5, 6, 7, 8, 9**
Special Characters | **, < > . _ ( ) ; $ : %[ ] # ? ' & { } " ^ ! * / | - \ ~ +**
White space Characters | **Blank space, newline, horizontal tab, carriage return and form feed**

### C-Keywords

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

## C Variables, Constants and Literals

### Variables

- variable is a container (storage area) to hold data
- variable should be given a unique name (identifier)
- variable names are just the symbolic representation of a memory location
- e.g.: int playerScore = 95;
- int -- type
- playerScore -- variable names; identifier
- 95 -- values; in this case integer 95

### Literals

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

### Constants

- define a variable whose value cannot be changed -- use the **const** keyword

## C Data Types

Type | Size (bytes) | Format Specifier | Details
------------ | ------------- | ------------- | -------------
**int** | 2 or 4 | %d or %i | ***whole numbers that can have both zero, positive and negative values but no decimal values**<br>* **2<sup>32</sup>** distinct states from **-2147483648** to **2147483647**
**char** | 1 | %c | * **used for declaring character type variables**
**float** | 4 | %f | * **used to hold real numbers**
**double** | 8 | %lf | * **used to hold real numbers**
**char** | 1 | %c
**short int** | 2 | %hd
**unsigned int** | 2 or 4 | %u
**long int** | 4 or 8 | %ld or %li
**long long int** | 8 | %lld or %lli
**unsigned long int** | 4 | %lu
**unsigned long long int** | 8 | %llu
**signed char** | 1 | %c
**unsigned char** | 1 | %c
**long double** | 10, 12, 16 | %Lf
**void** | - | - | * **incomplete type. It means "nothing" or "no type"**
**long** | - | - | -
**sizeof** | - | - | * **check the size of a variable**

## C Input Output (I/O)

- C Output: **printf()**
- C Input: **scanf()**

## Reference

1. [Learn C Programming](https://www.programiz.com/c-programming/)
2. [Run a C Program in Ubuntu and Other Linux Distributions](https://itsfoss.com/run-c-program-linux/)
