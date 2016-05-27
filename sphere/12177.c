// Using two characters: . (dot) and * (asterisk) print a frame-like pattern.

// Input

// You are given t - the number of test cases and for each of the test cases two 
// positive integers: l - the number of lines and c - the number of columns of a frame.

// Output

// For each of the test cases output the requested pattern (please have a look at 
// the example). Use one line break in between successive patterns.

// Example

// Input:
// 3
// 3 1
// 4 4
// 2 5

// Output:
// *
// *
// *

// ****
// *..*
// *..*
// ****


// *****
// *****

#include <stdio.h>

void draw(int, int);

int main (int argc, char const *argv[]) {
    int t;
    scanf("%d", &t);

    int input_array[t][2];
    for (int i = 0; i < t; ++i)
    {
        scanf("%d %d", &input_array[i][0], &input_array[i][1]);
    }

    for (int i = 0; i < t; ++i) {
        draw(input_array[i][0], input_array[i][1]);
    }

    return 0;
}

void draw(int l, int c) {
    for (int x = 0; x < c; ++x) {
        printf("*");
    }
    printf("\n");

    for (int m = 1; m < l - 1; ++m) {
        printf("*");

        for (int n = 1; n < c - 1; ++n) {
            printf(".");
        }

        if (c > 1) {
            printf("*");
        }
        printf("\n");
    }

    if (l > 1) {
        for (int x = 0; x < c; ++x) {
            printf("*");
        }
    }
    printf("\n\n");
}