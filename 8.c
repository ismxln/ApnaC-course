#include <stdio.h>
#include <string.h>

// Strings

void salting(char password[]) {
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password); // newPass = "test"
    strcat(newPass, salt); // newPass = "test" + "123"

    puts(newPass);
}

void slice(char str[], int n, int m) { // n & m are valid values
    char newStr[100];
    int j = 0;
    for(int i = n; i <= m; i++, j++) {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}

int countVowels(char str[]){
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    return count;
}

int main() {

    // ------ 
    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    // ------ 

    // ------ 
    char password[100];
    scanf("%s", password);
    salting(password);
    // ------ 

    // ------ 
    char strr[] = "Hello, World!";
    slice(strr, 7, 99);
    // ------ 

    // ------ 
    printf("vowels are: %d in %s", countVowels(strr), strr);
    // ------ 

    return 0;
}