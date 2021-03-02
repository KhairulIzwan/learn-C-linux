# C Functions

## Standard library functions

- functions are built-in functions in C programming
- defined in header files

## User-defined function

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

## C Recursion

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

## C Storage Class

### Local Variable

automatic or local variables exist only inside the block in which it is declared

```c
int main() {
    int n1; // n1 is a local variable to main()
}

void func() {
   int n2;  // n2 is a local variable to func()
}
```

### Global Variable

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

### Register Variable

register keyword is used to declare register variables

### Static Variable

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