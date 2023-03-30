#include <stdio.h>

// recursive func
void printHW(int count) {
    if(count == 0) {
        return;
    }
    printf("\tHello, recursive World!\n");
    printf("\t\tHello, recursive World!\n");
    printf("\t\t\tHello, recursive World!\n");
    printHW(count - 1);
}

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    int factNum1 = factorial(n - 1);
    int factN = factNum1 * n;
    return factN;
}

int main() {
    printHW(5);
    printf("factorial is: %d", factorial(4));
    return 0;
}

