// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when num is less than count
    for(count = 0; count <= num; ++count)
    {
        sum += count;
        printf("Loops %d Sum = %d\n", count, sum);
    }

    printf("Total Sum = %d\n", sum);

    return 0;
}