// Print a regular grid pattern with diamond-like base elements. Use the \ (backslash) 
// and the / (slash) characters to print diamonds and . (dots) to fill the rest of the space.

// Input

// You are given t - the number of test cases and for each of the test cases three 
// positive integers: r - the number of rows, c - the number of columns in the grid 
// and s - the size of each diamond.

// Output

// For each of the test cases output the requested pattern (please have a look at 
// the example). Use one line break in between successive patterns.

// Example

// Input:
// 3
// 3 1 2 
// 4 4 1 
// 2 5 2

// Output:
// ./\.
// /..\
// \../
// .\/.
// ./\.
// /..\
// \../
// .\/.
// ./\.
// /..\
// \../
// .\/.

// /\/\/\/\
// \/\/\/\/
// /\/\/\/\
// \/\/\/\/
// /\/\/\/\
// \/\/\/\/
// /\/\/\/\
// \/\/\/\/


// ./\../\../\../\../\.
// /..\/..\/..\/..\/..\
// \../\../\../\../\../
// .\/..\/..\/..\/..\/.
// ./\../\../\../\../\.
// /..\/..\/..\/..\/..\
// \../\../\../\../\../
// .\/..\/..\/..\/..\/.

#include <stdio.h>

void draw (int, int, int);
void draw_diamond_part (char *, char *, int, int);

int main (int argc, char const *argv[]) {
    int t;
    scanf("%d", &t);

    int input_array[t][3];
    for (int i = 0; i < t; ++i)
    {
        scanf("%d %d %d",
              &input_array[i][0],
              &input_array[i][1],
              &input_array[i][2]);
    }

    for (int i = 0; i < t; ++i) {
        draw(input_array[i][0],
             input_array[i][1],
             input_array[i][2]);

        printf("\n");
    }

    return 0;
}

void draw(int r, int c, int s) {
    char backslash[s][s];
    char slash[s][s];
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < s; ++j) {
            backslash[i][j] = '.';
            slash[i][j] = '.';
        }
        backslash[i][i] = '\\';
        slash[i][s - i - 1] = '/';
    }

    for (int i = 0; i < r; ++i) {
        draw_diamond_part(*slash, *backslash, s, c);
        draw_diamond_part(*backslash, *slash, s, c);
    }
}

void draw_diamond_part (char * array1, char * array2, int s, int c) {
    for (int m = 0; m < s; ++m) {
        for (int j = 0; j < c; ++j) {
            for (int n = 0; n < s; ++n) {
                printf("%c", *(array1 + m * s + n));
            }
            for (int n = 0; n < s; ++n) {
                printf("%c", *(array2 + m * s + n));
            }
        }
        printf("\n");
    }
}