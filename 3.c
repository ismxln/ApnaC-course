#include <stdio.h>

// Conditional Statements

int main() {
    
    // ------
    int age = 19;
    printf("enter age: ");
    scanf("%d", &age);

    // if, else if, else.
    if(age > 18) {
        printf("adult\n");
        printf("they can: vote, drive.\n\n");
    }
    else if(age > 13 && age < 18) {
        printf("teenager\n\n");
    }
    else {
        printf("child\n\n");
    }

    // Condition ? doSomething if TRUE : doSomething if FALSE;
    age >= 18 ? printf("adult\n") : printf("not adult\n");
    // ------

    // ------
    // switch(number){ case C1: doSomething break; case C2...}
    int day; // 1 = mon, 2 = tues, 3 = wed, etc.
    printf("enter day(1-7): ");
    scanf("%d", &day);
    switch (day) {
    case 1:
        printf("monday\n\n");
        break;
    case 2:
        printf("tuesday\n\n");
        break;
    case 3:
        printf("wednesday\n\n");
        break;
    case 4:
        printf("thursday\n\n");
        break;
    case 5:
        printf("friday\n\n");
        break;
    case 6:
        printf("saturday\n\n");
        break;
    case 7:
        printf("sunday\n\n");
        break;
    default:
        printf("not a valid day!\n\n");
        break;
    }
    // ------

    // ------
    char ch;
    printf("enter character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("uppercase\n\n");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("lowercase\n\n");
    }
    else {
        printf("not english letter\n\n");
    }
    // ------

    return 0;
}