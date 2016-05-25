#include <stdio.h>

void scanf_string() {
    char * string;

    scanf("%ms", &string);
    printf("%s\n", string);
}

void scanf_int() {
    int integer;

    scanf("%d", &integer);
    printf("%d\n", integer);
}

void scanf_string_array() {
    int s;

    printf("Input array size:\n");
    scanf("%d", &s);
    char * sequence[s];

    printf("\nInput string array:\n");
    for (int i = 0; i < s; ++i)
    {
        scanf("%ms", &sequence[i]);
    }

    printf("\nString array is:\n");
    for (int i = 0; i < s; ++i)
    {
        printf("%s\n", sequence[i]);
    }
}

int main(int argc, char const *argv[])
{
    scanf_string();
    scanf_int();
    scanf_string_array();
    return 0;
}