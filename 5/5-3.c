#include <stdio.h>
#include <math.h>

// функция square(n), возвращает квадрат числа n
double square(double n) {
    return pow(n, 2);
}

// главная функция main()
int main() {
    double n = 5.0; // тестовое значение числа
    double result = square(n); // вызываем функцию square()
    printf("square number %.2f equal %.2f", n, result); // выводим результат
    return 0;
}
