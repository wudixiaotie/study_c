#include <stdio.h>

void doit(int * len) {
    for (int i = 0; i < 12; ++i)
    {
        // (*len) ++;
        *len ++;
    }
}

int main(int argc, char const *argv[]) {
    char c;
    // scanf("%c", &c);
    // printf("%c\n", c);

    int len = 0;
    doit(&len);
    printf("%d\n", len);
}