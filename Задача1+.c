#include <stdio.h>

int main()  { 
    int a,b,c;
    float V,S;
    printf("стороны фигуры\n");
    scanf("%d",&a);
      scanf("%d",&b);
        scanf("%d",&c);
    V=a*b*c;
    printf("V=%.3f\n ",V);
    S=2*c*(a+b);
    printf("S=%.3f\n ",S);
    return 0;
    
}