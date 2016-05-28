// Using two characters: . (dot) and * (asterisk) print a grid-like pattern. The 
// grid will have l lines, c columns, and each square shaped element of the grid 
// will have the height and width equal to s.

// Moreover, each of the grid elements will have a diagonal. The diagonal of the 
// first square in the first line of the grid is directed towards down and right 
// corner - use the \ (backslash) character to print it; while the next diagonal 
// will be directed towards upper right corner - use the / (slash) character to 
// print it. Print the successive diagonals alternately (please consult the example below).

// Input

// You are given t - the number of test cases and for each of the test case three 
// positive integers: l - the number of lines, c - the number of columns in the 
// grid and s - the size of the single square shaped element.

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
// ****
// *\.*
// *.\*
// ****
// *./*
// */.*
// ****
// *\.*
// *.\*
// ****

// *********
// *\*/*\*/*
// *********
// */*\*/*\*
// *********
// *\*/*\*/*
// *********
// */*\*/*\*
// *********

// ****************
// *\.*./*\.*./*\.*
// *.\*/.*.\*/.*.\*
// ****************
// *./*\.*./*\.*./*
// */.*.\*/.*.\*/.*
// ****************

#include <stdio.h>

void draw(int, int, int);
void draw_head(int, int);

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

void draw(int l, int c, int s) {
    char positive[s][s];
    char negative[s][s];
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < s; ++j) {
            positive[i][j] = '.';
            negative[i][j] = '.';
        }
        positive[i][i] = '\\';
        negative[i][s - i - 1] = '/';
    }

    int is_positive;
    for (int i = 0; i < l; ++i) {
        draw_head(c, s);

        for (int x = 0; x < s; ++x) {
            if (i % 2 == 0) {
                is_positive = 1;
            }
            else {
                is_positive = 0;
            }

            for (int j = 0; j < c; ++j) {
                printf("*");
                if (is_positive == 1) {
                    is_positive = 0;

                    for (int i = 0; i < s; ++i)
                    {
                        printf("%c", positive[x][i]);
                    }
                }
                else {
                    is_positive = 1;

                    for (int i = 0; i < s; ++i)
                    {
                        printf("%c", negative[x][i]);
                    }
                }
            }
            printf("*\n");
        }
    }

    draw_head(c, s);
}

void draw_head(int c, int s) {
    for (int i = 0; i < c * (s + 1); ++i) {
        printf("*");
    }
    printf("*\n");
}