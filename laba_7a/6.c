#include <stdio.h>

int main()
{
    float x = 1.1;
    float y = 0;
    int a;
    float z;

    z = (a = x++) * y + 3 * x;
    printf("z=%.1f\n", z);

    return 0;
}
