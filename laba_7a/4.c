#include <stdio.h>

int main()
{
    int a;
    int b = 3;
    float c;

    c = b % 2 + (a = ++b / 2) + 1.1;
    printf("a=%d, c=%.1f\n", a, c);

    return 0;
}
