#include <stdio.h>

// Variables, Data types + Input/Output

int main() {
    
    int number = 25;
    char star = '*';
    char hashtag = '#';
    float pi = 3.14;

    // int a = 30;
    int A = 40;

    int age = 22;
    age = 24;
    int _age = 22;

    int final_price = 100;

    printf("\t\tHello, C!\n");

    // int
    printf("age is %d \n", age);
    // float
    printf("pi is %f \n", pi);
    // char
    printf("star is %c \n\n", star);

    // ------
    // Input
    printf("enter age: ");
    // write %d(int), to address - named age(&age)
    scanf("%d", &age);
    printf("age is: %d\n\n", age);
    // ------

    // ------
    int a, b;
    printf("enter a: ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    printf("sum of a and b equal %d\n\n", a + b);
    // ------

    // ------ square area
    int side;
    printf("enter side: ");
    scanf("%d", &side);
    printf("area is: %d\n\n", side * side);
    // ------

    // ------ circle area
    float radius;
    printf("enter radius: ");
    scanf("%f", &radius);
    printf("area of a circle = %f\n\n", radius * radius * pi);
    // ------

    // ------ rectangle perimeter
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("rectangle perimeter equal %d\n\n", 2 * (a + b));
    // ------

    // ------ number cube
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("cube of number equal %d\n\n", n * n * n);
    // ------

    return 0;
}