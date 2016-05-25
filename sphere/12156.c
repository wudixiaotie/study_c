// STRHH - Half of the half
// #basics
// Given a sequence of 2*k characters, please print every second character from the first half of the sequence. Start printing with the first character.

// Input

// In the first line of input your are given the positive integer t (1<=t<=100) - the number of test cases. In the each of the next t lines, you are given a sequence of 2*k (1<=k<=100) characters.

// Output

// For each of the test cases please please print every second character from the first half of a given sequence (the first character should appear).

// Example

// Input:
// 4
// your 
// progress 
// is 
// noticeable

// Output:
// y
// po
// i
// ntc


#include <stdio.h>

#ifndef GET_ARRAY_LEN
#define GET_ARRAY_LEN(array, len) { len = (sizeof(array) / sizeof(array[0])); }
#endif

// void input_string(char * string, int len) {

// }

int main(int argc, char const *argv[])
{
    int * a[1];
    scanf("%d", a[0]);
    printf("%d\n", *a[0]);
    // int t;
    // scanf("%d", &t);
    // char string_array[t][100];
    // int length_array[t];

    // int len;
    // for (int i = 0; i < t; ++i)
    // {
    //     input_string(string_array[t], length_array[t]);
    // }

    // for (int i = 0; i < t; ++i)
    // {
    //     scanf("%ms", &sequence[i]);
    // }

    // int len;
    // for (int i = 0; i < t; ++i)
    // {
    //     GET_ARRAY_LEN(sequence[i], len);
    //     printf("%c\n", sequence[i][7]);
    // }
    return 0;
}