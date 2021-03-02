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