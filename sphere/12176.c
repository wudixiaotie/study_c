// Using two characters: . (dot) and * (asterisk) print a chessboard-like pattern. 
// The first character printed should be * (asterisk).

// Input

// You are given t < 100 - the number of test cases and for each of the test cases 
// two positive integers: l - the number of lines and c - the number of columns in 
// the pattern (l, c < 100).

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
// .
// *

// *.*.
// .*.*
// *.*.
// .*.*

// *.*.*
// .*.*.

#include <stdio.h>

int main (int argc, char const *argv[]) {
    int t;
    scanf("%d", &t);

    int input_array[t][2];
    for (int i = 0; i < t; ++i)
    {
        scanf("%d %d", &input_array[i][0], &input_array[i][1]);
    }

    char before;
    for (int i = 0; i < t; ++i) {
        for (int m = 0; m < input_array[i][0]; ++m) {
            if (m % 2 == 1) {
                before = '*';
            }
            else {
                before = '.';
            }
            for (int n = 0; n < input_array[i][1]; ++n) {
                if (before == '*')
                {
                    printf("%c", '.');
                    before = '.';
                }
                else {
                    printf("%c", '*');
                    before = '*';
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}