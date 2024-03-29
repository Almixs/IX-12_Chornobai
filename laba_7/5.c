#include <stdio.h>

int main() {
    int x = 2, z;
    float y;
    z = (int)(0.5 * (y = 2.3 * x) + x++ / 3 * y);
    printf("z = %d\n", z);
    return 0;
}
