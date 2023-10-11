#include <stdio.h> // Підключаємо бібліотеку для роботи зі стандартним виводом і вводом
#include <math.h> // Підключаємо бібліотеку для математичних операцій

int main() {
    double alpha;  // Оголошуємо змінну для зберігання кута alpha

    // Запитуємо користувача ввести значення кута alpha
    printf("Введіть значення кута alpha в радіанах: ");
    scanf("%lf", &alpha);  // Зчитуємо введене значення і зберігаємо його в змінній alpha

    // Розрахунок за першою формулою (Z1)
    double Z1 = 1 - (1.0 / 4) * pow(sin(2 * alpha), 2) + cos(2 * alpha);

    // Розрахунок за другою формулою (Z2)
    double Z2 = pow(cos(alpha), 2) + pow(cos(alpha), 4);

    // Виведення результатів
    printf("Z1 = %lf\n", Z1);
    printf("Z2 = %lf\n", Z2);

    return 0; // Повернення значення 0 для позначення успішного завершення програми
}
