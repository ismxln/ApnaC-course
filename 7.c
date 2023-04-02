#include <stdio.h>

// Arrays

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    } 
}

void storeTable(int arr[][10], int n, int m, int number) {
    for(int i = 0; i < m; i++) { // 0 to 10
        arr[n][i] = number * (i + 1); // 2, 4, 6, 8, 10, ...
        // arr[0][0] arr[0][1] arr[0][2] ...
        // arr[1][0] arr[1][1] arr[1][2] ...
    }
}

int main() {

    // ------
    int marks[3];

    printf("enter phy: ");
    scanf("%d", &marks[0]);

    printf("enter chem: ");
    scanf("%d", &marks[1]);

    printf("enter math: ");
    scanf("%d", &marks[2]);

    printf("phy = %d, chem = %d, math = %d\n\n", marks[0], marks[1], marks[2]);
    // ------

    // ------
    float price[] = {100.0, 200.0, 300.0};
    /*
    float price[3];
    printf("enter 3 prices: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    */

    printf("total price 1: %f\n", price[0] + (0.18 * price[0]));
    printf("total price 2: %f\n", price[1] + (0.18 * price[1]));
    printf("total price 3: %f\n", price[2] + (0.18 * price[2]));
    // ------

    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArr(arr, 5);

    // ------ fibonacci

    int n;
    printf("enter n (n > 2): ");
    scanf("%d", &n);
    
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < n; i++) { // 1, 2, 3, 5, etc..
        fib[i] = fib[i - 1] + fib[i - 2]; // important
        printf("%d\t", fib[i]);
    }
    printf("\n");

    // ------ 

    // ------ 2D array, storing the tables of 2 & 3
    
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    printf("\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\t", tables[0][i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\t", tables[1][i]);
    }
    // ------

    return 0;
}

