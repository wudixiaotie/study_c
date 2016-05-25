// STRHH - Half of the half
// #basics
// Given a sequence of 2*k characters, please print every second character from 
// the first half of the sequence. Start printing with the first character.

// Input

// In the first line of input your are given the positive integer t (1<=t<=100) 
// - the number of test cases. In the each of the next t lines, you are given a 
// sequence of 2*k (1<=k<=100) characters.

// Output

// For each of the test cases please please print every second character from 
// the first half of a given sequence (the first character should appear).

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

#ifndef STR_MAX
#define STR_MAX 200
#endif

void input_string(char * , char * );

int main(int argc, char const *argv[]) {
    int t;
    scanf("%d\n", &t);
    char string_array[t][STR_MAX];
    char result_array[t][STR_MAX];

    for (int i = 0; i < t; ++i) {
        input_string(string_array[i], result_array[i]);
    }

    for (int i = 0; i < t; ++i) {
        printf("%s\n", result_array[i]);
    }

    return 0;
}


void input_string(char * string, char * result) {
    char c;
    int len = 0;
    scanf("%c", &c);
    for (int i = 0; c != '\n' && i < STR_MAX; ++i) {
        string[i] = c;
        len ++;
        scanf("%c", &c);
    }
    string[len] = '\0';

    int half = len / 2;
    int x = 0;
    for (int y = 0; y < half; x += 1, y += 2) {
        result[x] = string[y];
    }
    result[x] = '\0';
}