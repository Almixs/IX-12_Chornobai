#include <stdio.h>
int main(void) {
    float var1, var2;
    printf("Введіть перше число (var1): ");
    scanf("%f", &var1);
    printf("Введіть друге число (var2): ");
    scanf("%f", &var2);
    printf("var1 > var2 дає %d\n", var1 > var2);
    printf("var1 < var2 дає %d\n", var1 < var2);
    printf("var1 == var2 дає %d\n", var1 == var2);
    printf("var1 >= var2 дає %d\n", var1 >= var2);
    printf("var1 <= var2 дає %d\n", var1 <= var2);
    printf("var1 != var2 дає %d\n", var1 != var2);
    printf("!var1 дає %d\n", !var1);
    printf("!var2 дає %d\n", !var2);
    printf("var1 || var2 дає %d\n", var1 || var2);
    printf("var1 && var2 дає %d\n", var1 && var2);
    
    return 0;
}
