#include <stdio.h>
#include <math.h>
#include <complex.h>
int main(){
        float  a,b,c,d,x1,x2;
        printf("Enter the co-efficient of a: ");
        scanf("%f", &a);
        printf("\n Enter the co-efficient of b: ");
        scanf("%f", &b);
        printf("\n Enter the constant c: ");
        scanf("%f", &c);
        d = sqrt((pow(b, 2)-(4*a*c)));
        x1 = (-b + d)/(2*a);
        x2 = (-b - d)/(2*a);
        printf("The first root =  %.2f", x1);
        printf("\nThe second root=  %.2f", x2);
        return 0;

}