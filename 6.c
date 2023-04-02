#include <stdio.h>

// Pointers...

// call by value
void swap(int a, int b) { 
    int t = a;
    a = b;
    b = t;
    printf("1st = %d, 2nd = %d\n", a, b);
}

// call by reference
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void printAddress(int n) {
    printf("address of n %u\n", &n);
}

void printstarAddress(int *n) {
    printf("address of n %u\n", n);
}

void doWork(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}

int main() {
    
    // ------
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d\n", _age);
    // ------

    // ------
    printf("// ------\n");

    int xx;
    *ptr;

    ptr = &xx;
    *ptr = 0; // xx = 0

    printf("x = %d\n", xx);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5; // xx = 5
    printf("x = %d\n", xx); // 5
    printf("*ptr = %d\n", *ptr); // 5

    (*ptr)++; // *ptr = *ptr + 1
    printf("x = %d\n", xx); // 6
    printf("*ptr = %d\n", *ptr); // 6

    printf("// ------\n");
    // ------

    int i = 5;
    int *pointer = &i;
    int **pptr = &pointer;

    printf("%d\n", **pptr);
    // ------

    // ------
    int x = 3, y = 5;
    swap(x, y);
    printf("x = %d & y = %d\n", x, y);
    _swap(&x, &y);
    printf("x = %d & y = %d\n", x, y);
    // ------

    // ------
    int n = 4;
    printAddress(n);
    printf("address of n %u\n", &n); // 2 different n
    printstarAddress(&n);
    printf("address of n %u\n", &n); // 1 *n.
    // ------

    int a = 3, b = 5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);

    return 0;
}