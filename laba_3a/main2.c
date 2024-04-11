#include <stdio.h>
#define TRUE "ІСТИНА"
#define FALSE "ХИБНІСТЬ"

int main(void) {
    float var1, var2;
    printf("Введіть перше число (var1): ");
    scanf("%f", &var1);
    printf("Введіть друге число (var2): ");
    scanf("%f", &var2);
    printf("var1 > var2 дає %s\n", var1 > var2 ? TRUE : FALSE);
    printf("var1 < var2 дає %s\n", var1 < var2 ? TRUE : FALSE);
    printf("var1 == var2 дає %s\n", var1 == var2 ? TRUE : FALSE);
    printf("var1 >= var2 дає %s\n", var1 >= var2 ? TRUE : FALSE);
    printf("var1 <= var2 дає %s\n", var1 <= var2 ? TRUE : FALSE);
    printf("var1 != var2 дає %s\n", var1 != var2 ? TRUE : FALSE);
    printf("!var1 дає %s\n", !var1 ? TRUE : FALSE);
    printf("!var2 дає %s\n", !var2 ? TRUE : FALSE);
    printf("var1 || var2 дає %s\n", var1 || var2 ? TRUE : FALSE);
    printf("var1 && var2 дає %s\n", var1 && var2 ? TRUE : FALSE);
    
    return 0;
}
