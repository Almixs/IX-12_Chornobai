#include <stdio.h>
#include <math.h>

int main() {
    int k = 13;
    int xA = 1, yA = 1;
    int xB = 2 * k, yB = 2 * k - 1;
    int xC = -2 * k, yC = k + 2;
    
    float dAB = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
    float dBC = sqrt(pow(xB - xC, 2) + pow(yB - yC, 2));
    float dCA = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));

    float perimeter = dAB + dBC + dCA;

    float semi_perimeter = perimeter / 2;

    float area = sqrt(semi_perimeter * (semi_perimeter - dAB) * (semi_perimeter - dBC) * (semi_perimeter - dCA));

    float inradius = area / semi_perimeter;

    printf("Периметр трикутника: %.2f\n", perimeter);
    printf("Площа трикутника: %.2f\n", area);
    printf("Радіус вписаного кола: %.2f\n", inradius);

    return 0;
}
