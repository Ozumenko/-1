/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float a,b;//a-x,b-y
   printf("Введите a и b\n");
   scanf("%f %f",&a,&b);
if( a>=-1 && a<=1 && b>=0 && b<=1)
   printf("T(a,b) находиться в окружности\n");
else
    printf("T(a,b) находиться не в окружности\n");
    return 0;
}
