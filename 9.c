#include <stdio.h>
#include <string.h>

// Structures

//user defined
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu;

typedef struct computerengineeringstudent
{
    int roll;
    float cgpa;
    char name[100];
} coe;

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add) {  
    printf("address is %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
};

struct vector {
    int x; int y;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is: %d\n", sum.x);
    printf("sum of y is: %d\n", sum.y);
}

int main() {

    // ------ 
    /*
    struct student s1;
    stu s2;
    */
    
    coe s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "max");

    printf("student s1 name is %s\n", s1.name);
    // ------ 

    // ------ 
    struct address adds[5];
    // input
    printf("enter info for person 1: ");
    scanf("%d", &adds[0].houseNo); // house №
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("enter info for person 2: ");
    scanf("%d", &adds[1].houseNo); 
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("enter info for person 3: ");
    scanf("%d", &adds[2].houseNo); 
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("enter info for person 4: ");
    scanf("%d", &adds[3].houseNo); 
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("enter info for person 5: ");
    scanf("%d", &adds[4].houseNo); 
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    /* example output:
    address is 1, 2, asdasd, asdads
    address is 3, 4, asdasd, asdasd
    address is 5, 6, sdfsdf, sdfsdf
    address is 7, 8, fhfghgh, fghfgh
    address is 9, 10, sdfsdf, sdfsdf
    */
    // ------ 

    // ------ 
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};

    calcSum(v1, v2, sum); // sum of x is: 8 sum of y is: 17
    // ------ 

    return 0;
}