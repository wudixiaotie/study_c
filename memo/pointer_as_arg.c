#include <stdio.h>

void modify(int * len) {
    for (int i = 0; i < 12; ++i)
    {
        (*len) ++;
    }
}

int main(int argc, char const *argv[]) {
    int len = 0;
    modify(&len);
    printf("%d\n", len);
}