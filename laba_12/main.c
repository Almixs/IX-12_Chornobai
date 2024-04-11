#include <stdio.h>
#include <math.h>

int main() {
    double x, y_library, y_explicit, precision, term, sum = 0;
    int iterations = 0;

    // Зчитуємо значення x з клавіатури
    printf("Введіть значення x (0 <= x <= π/2): ");
    scanf("%lf", &x);

    // Обчислення значення функції y за допомогою бібліотечних функцій компілятора
    y_library = exp(x) - pow(exp(x), 2);  

    // Обчислення значення функції y за допомогою розкладу у ряд
    do {
        term = pow(-1, iterations) * pow(x, 2 * iterations + 1) / (2 * iterations + 1);
        sum += term;
        iterations++;

        // Обчислення точності за допомогою різниці між бібліотечним і розкладеним значеннями
        precision = fabs(y_library - sum);
    } while (precision > 0.00001);

    y_explicit = sum;

    // Виведення результатів на екран
    printf("Значення функції y (бібліотечне): %lf\n", y_library);
    printf("Значення функції y (розклад у ряд): %lf\n", y_explicit);
    printf("Кількість ітерацій: %d\n", iterations);

    return 0;
}
