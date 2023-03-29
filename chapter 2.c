#include <stdio.h>

// Instructions & Operators

int main() {
    //int a = 22;
    //int b = a;
    //int c = b * 6;
    int d = 1, e;

    int oldAge = 22;
    int years = 2;
    int newAge = oldAge + years;

    int x, y, z;
    x = y = z = 4;
    
    int a = 1, b = 2;
    int sum = a + b;
    int multiply = a * b;

    printf("== %d\n", 4 == 4);
    printf("<= %d\n", 4 <= 4);
    printf("< %d\n", 4 < 4);
    printf(">= %d\n", 4 >= 4);
    printf("> %d\n", 4 > 4);
    printf("!= %d\n\n", 4 != 4);
    // && = AND, || = OR, ! = NOT. 

    /* Priority 
        1. !; 2. *, /, %; 3. +, -;
        4. <, <=, >, >=; 5. ==, !=;
        6. &&, 7. ||, 8. =.
    */
   
    /* Assigment Operators
        =, +=, -=, *=, /=, %=.
    */

    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("divisible by 2? %d", n % 2 == 0);

    return 0;
}