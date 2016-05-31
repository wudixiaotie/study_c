// Compute the Minimum Bounding Rectangle (MBR) that surrounds the given set of 2D 
// objects, i.e., the axis-aligned rectangle, which contains all of the specified 
// objects and is the one with minimum area among all rectangles with this property.

// Input

// First, you are given t (t<100) - the number of test cases.

// Each of the test cases starts with one integer n (n < 100) - the number of 
// objects in the set. In the successive n lines, the descriptions of the objects follow.

// Each object is described by one character and some parameters:

// a point: p x y, where x and y are point coordinates.
// a circle: c x y r, where x and y are the center coordinates and r is the radius of the circle.
// a line segment: l x1 y1 x2 y2, where xi, yi are the coordinates of the endpoints of the line.
// Successive test cases are separated by an empty line.

// Output

// For each of the test cases output four numbers - the coordinates of the two points 
// that correspond to the lower left and the upper right corner of the MBR, in the 
// following order: first the x-coordinate of the lower left corner, then the y-coordinate 
// of the lower left corner, the x-coordinate of the upper right corner and the y-coordinate of upper right corner.

// You can assume that all object parameters are integers and that -1000 -1000 1000 1000 
// is a bounding rectangle for of all of them.

// Example

// Input:
// 3
// 1
// p 3 3 

// 2
// c 10 10 20
// c 20 20 10

// 1
// l 0 0 100 20

// Output:
// 3 3 3 3 
// -10 -10 30 30
// 0 0 100 20
// Test case description

// test 1: points only    (2 pts)
// test 2: circles only   (2 pts) 
// test 3: lines only     (2 pts)
// test 4: mixed          (2 pts)
// test 5: mixed          (2 pts)

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void generate_point(Point *, Point *);

int main() {
    int t;
    scanf("%d", &t);
    int n;
    Point rectangle[t][2], lower_left_point, upper_right_point;
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        generate_point(&rectangle[i][0], &rectangle[i][1]);

        for (int j = 1; j < n; j++) {
            generate_point(&lower_left_point, &upper_right_point);
            if (lower_left_point.x < rectangle[i][0].x) {
                rectangle[i][0].x = lower_left_point.x;
            }
            if (lower_left_point.y < rectangle[i][0].y) {
                rectangle[i][0].y = lower_left_point.y;
            }
            if (upper_right_point.x > rectangle[i][1].x) {
                rectangle[i][0].x = upper_right_point.x;
            }
            if (upper_right_point.y > rectangle[i][1].y) {
                rectangle[i][0].y = upper_right_point.y;
            }
        }
    }

    for (int i = 0; i < t; i++) {
        printf("%d %d %d %d\n", rectangle[i][0].x, rectangle[i][0].y, rectangle[i][1].x, rectangle[i][1].y);
    }
    return 0;
}

void generate_point(Point * lower_left_point, Point * upper_right_point) {
    char sharp;
    scanf("\n%c\n", &sharp);
    switch (sharp) {
        case 'p':
        {
            int x, y;
            scanf("%d %d", &x, &y);
            (*lower_left_point).x = x;
            (*lower_left_point).y = y;
            (*upper_right_point).x = x;
            (*upper_right_point).y = y;
            break;
        }
        case 'c':
        {
            int x, y, r;
            scanf("%d %d %d", &x, &y, &r);
            (*lower_left_point).x = x - r;
            (*lower_left_point).y = y - r;
            (*upper_right_point).x = x + r;
            (*upper_right_point).y = y + r;
            break;
        }
        case 'l':
        {
            int x1, y1, x2, y2;
            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
            if (x1 < x2) {
                (*lower_left_point).x = x1;
                (*upper_right_point).x = x2;
            }
            else {
                (*lower_left_point).x = x2;
                (*upper_right_point).x = x1;
            }

            if (y1 < y2) {
                (*lower_left_point).y = y1;
                (*upper_right_point).y = y2;
            }
            else {
                (*lower_left_point).y = y2;
                (*upper_right_point).y = y1;
            }
            break;
        }
    }
}