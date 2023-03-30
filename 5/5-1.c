#include <stdio.h>

// Functions & Recursion

// declaration prototype
void printHello();
void printGoodbye();

int main() {
    printHello(); //function call
    printGoodbye();

    return 0;
}

//function definition
void printHello() {
    printGoodbye();
}

void printGoodbye() {
    printHello();
}