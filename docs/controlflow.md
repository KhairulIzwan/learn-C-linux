# C Flow Control

## C if...else Statement

### C if Statement

```c
if (test expression) 
{
   // statements to be executed if the test expression is true
}
```

### C if...else Statement

```c
if (test expression) {
    // statements to be executed if the test expression is true
}
else {
    // statements to be executed if the test expression is false
}
```

### C if...else Ladder

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

### Nested if...else

It is possible to include an if...else statement inside the body of another if...else statement.

## C Loops

### C for Loop

```c
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
```

### C while and do...while Loop

#### C while Loop

```c
while (testExpression) 
{
    // statements inside the body of the loop 
}
```

#### C do...while Loop

```c
do
{
   // statements inside the body of the loop
}
while (testExpression);
```

## C break and continue

### C break

**break** statement ends the loop immediately when it is encountered

### C continue

**continue** statement skips the current iteration of the loop and continues with the next iteration.

## C switch Statement

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

## C goto Statement

```c
goto label;
... .. ...
... .. ...
label: 
statement;
```