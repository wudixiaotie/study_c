// Given specified dimensions, print a grid-like pattern. Use the | (pipe) sign to 
// print vertical elements, the - (minus) to print horizontal ones and + (plus) for 
// crossings. The rest of the space fill with . (dots) characters.

// Input

// You are given t - the number of test cases and for each of the test cases four 
// positive integers: l - the number of horizontal elements, c - the number of vertical 
// elements in the grid; h and w - the high and the with of the single rectangle respectively.

// Output

// For each of the test cases output the requested pattern (please have a look at 
// the example). Use one line break in between successive patterns.

// Example

// Input:
// 3
// 3 1 2 1
// 4 4 1 2
// 2 5 3 2

// Output:
// .|.
// .|.
// -+-
// .|.
// .|.
// -+-
// .|.
// .|.
// -+-
// .|.
// .|.

// ..|..|..|..|..
// --+--+--+--+--
// ..|..|..|..|..
// --+--+--+--+--
// ..|..|..|..|..
// --+--+--+--+--
// ..|..|..|..|..
// --+--+--+--+--
// ..|..|..|..|..


// ..|..|..|..|..|..
// ..|..|..|..|..|..
// ..|..|..|..|..|..
// --+--+--+--+--+--
// ..|..|..|..|..|..
// ..|..|..|..|..|..
// ..|..|..|..|..|..
// --+--+--+--+--+--
// ..|..|..|..|..|..
// ..|..|..|..|..|..
// ..|..|..|..|..|..

#include <stdio.h>

void draw (int, int, int, int);
void draw_horizontal (int, int, int);
void draw_vertical (int, char);

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
        printf("\n");
    }

    return 0;
}

void draw (int l, int c, int h, int w) {
    for (int m = 0; m < l; ++m) {
        draw_horizontal(h, c, w);

        for (int n = 0; n < c; ++n) {
            draw_vertical(w, '-');
            printf("+");
        }

        draw_vertical(w, '-');
        printf("\n");
    }

    draw_horizontal(h, c, w);
}

void draw_horizontal (int h, int c, int w) {
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < c; ++j) {
            draw_vertical(w, '.');
            printf("|");
        }

        draw_vertical(w, '.');
        printf("\n");
    }
}

void draw_vertical (int w, char element) {
    for (int i = 0; i < w; ++i) {
        printf("%c", element);
    }
}