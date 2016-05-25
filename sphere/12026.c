// Given two natural numbers (both not greater than 200), each number in the separate line, please print the sum of them.

// Example

// Input:
// 2
// 3

// Output:
// 5
#include <stdio.h>

int main()
{
    int input[2];
    for (int i = 0; i < 2; ++i)
    {
        scanf("%d", &input[i]);
    }

    int sum = 0;
    for (int i = 0; i < 2; ++i)
    {
        sum += input[i];
    }

    printf("%d\n", sum);

    return 0;
}