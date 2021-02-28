#include <stdio.h>    
int main()
{

    int testIntegerIN;
    float num1;
    double num2;
    char chrIO;
    char chrASCII;
    int a;
    float b;

    // Integer Input/Output
    printf("Enter an integer: ");
    scanf("%d", &testIntegerIN);  
    printf("Number = %d\n",testIntegerIN);

    // Float and Double Input/Output
    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);
    printf("num1 = %f\n", num1);
    printf("num2 = %lf\n", num2);

    // C Character I/O
    printf("Enter a character: ");
    scanf("%c", &chrIO);     
    // When %c is used, a character is displayed
    printf("You entered %c.",chrIO);

    // ASCII Value
    printf("Enter a character: ");
    scanf("%c", &chrASCII);
    // When %c is used, a character is displayed
    printf("You entered %c\n",chrASCII);  
    // When %d is used, ASCII value is displayed
    printf("ASCII value is %d\n", chrASCII);

    // I/O Multiple Values
    printf("Enter integer and then a float: ");
  
    // Taking multiple inputs
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f\n", a, b);

    return 0;
}