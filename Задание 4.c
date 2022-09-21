/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b;
    printf("Input 2 numbers:");
    scanf("%d %d", &a, &b);

    int action;
    printf("1. Sum\n2. Subtract\n3. Multiplication\n4. Division\n Select action number:");
    scanf("%d", &action);


    switch (action) {
        case 1:
            printf("%d", a + b);
            break;
        case 2:
            printf("%d", a - b);
            break;
        case 3:
            printf("%d", a * b);
            break;
        case 4:
            printf("%d", a / b);
            break;
        default:
            printf('Action not found');
            break;
    }
    return 0;
}