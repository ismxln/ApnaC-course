#include <stdio.h>

// Loop Control Statements

int main() {

    // i++ = use, then increase; ++i = increase, then use. pre/post.

    // for(initialisation; condition; updation) { doSomething }
    for(int i = 1; i <= 10; i++){
        printf("%d Hello, World!\n", i);
    }
    // ------

    // ------
    for(float i = 1.35; i <= 6.7; i++) {
        printf("%f\n", i);
    }
    // ------

    // ------
    for(char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c\n", ch);
    }
    // ------

    // ------ while
    int i = 1;
    while(i <= 5) {
        printf("Hello, World! (%d). \n\n", i);
        i++;
    }
    // ------

    // ------ while
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    i = 0;
    while(i <= n){
        printf("%d\n", i);
        i++;
    }
    // or for
    for(int i = 0; i <= n; i++) {
        printf("%d\n", i);
    }
    // ------
    
    // ------ do {} while(condition);
    printf("do{} while();\n");
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    // ------

    printf("enter number: ");
    scanf("%d", &n);
    
    int sum = 0;
    for(int i = 1; i <= n; i++) { 
        sum += i;
    }
    printf("sum is %d\n", sum);
    
    // from n to 1
    for(int i = n; i >= 1; i--) {
        printf("%d\n", i);
    }

    // n = 9 -> 9 * 1, 9 * 2, ..., 9 * 10.
    for(int i = 1; i <= 10; i++) {
        printf("%d\n", n * i);
    }

    return 0;
}