#include<stdio.h>
int main() 
{
    double first, second, temp;

    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    // Value of first is assigned to temp
    temp = first;

    // Value of second is assigned to first
    first = second;

    // Value of temp (initial value of first) is assigned to second
    second = temp;

    printf("\nAfter swapping, firstNumber = %.2lf\n", first);
    printf("After swapping, secondNumber = %.2lf\n", second);

    // Swapping

    // a = (initial_a - initial_b)
    first = first - second;   

    // b = (initial_a - initial_b) + initial_b = initial_a
    second = first + second;

    // a = initial_a - (initial_a - initial_b) = initial_b
    first = second - first;

    printf("After swapping, a = %.2lf\n", first);
    printf("After swapping, b = %.2lf\n", second);

    return 0;
}