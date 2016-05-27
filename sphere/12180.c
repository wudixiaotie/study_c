// Using two characters: . (dot) and * (asterisk) print a grid-like pattern.

// Input

// You are given t - the number of test cases and for each of the test cases four 
// positive integers: l - the number of lines, c - the number of columns in the grid; 
// h and w - the high and the with of the single rectangle.

// Output

// For each of the test cases output the requested pattern (please have a look at 
//     the example). Use one line break in between successive patterns.

// Example

// Input:
// 3
// 3 1 2 1
// 4 4 1 2
// 2 5 2 2

// Output:
// ***
// *.*
// *.*
// ***
// *.*
// *.*
// ***
// *.*
// *.*
// ***

// *************
// *..*..*..*..*
// *************
// *..*..*..*..*
// *************
// *..*..*..*..*
// *************
// *..*..*..*..*
// *************

// ****************
// *..*..*..*..*..*
// *..*..*..*..*..*
// ****************
// *..*..*..*..*..*
// *..*..*..*..*..*
// ****************

#include <stdio.h>

void draw(int, int, int, int);

int main (int argc, char const *argv[]) {
    int t;
    scanf("%d", &t);

    int input_array[t][4];
    for (int i = 0; i < t; ++i)
    {
        scanf("%d %d %d %d",
              &input_array[i][0],
              &input_array[i][1],
              &input_array[i][2],
              &input_array[i][3]);
    }

    for (int i = 0; i < t; ++i) {
        draw(input_array[i][0],
             input_array[i][1],
             input_array[i][2],
             input_array[i][3]);
    }

    return 0;
}

void draw(int l, int c, int dot_l, int dot_c) {
    for (int m = 0; m < l; ++m) {
        for (int i = 0; i < c * (dot_c + 1); ++i) {
            printf("*");
        }

        printf("*\n");

        for (int i = 0; i < dot_l; ++i) {
            for (int n = 0; n < c; ++n) {
                printf("*");
                for (int j = 0; j < dot_c; ++j) {
                    printf(".");
                }
            }
            printf("*\n");
        }
    }

    for (int i = 0; i < c * (dot_c + 1); ++i) {
        printf("*");
    }
    printf("*\n\n");
}