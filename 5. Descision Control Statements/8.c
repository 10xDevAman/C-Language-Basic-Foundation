// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

#include<stdio.h>
int main()
{
    int coeff_of_x2, coeff_of_x, constant;
    printf("Enter the quadratic expression in the below format : \n\t Ax2 + Bx + C\n");
    printf("Replace A with Coefficient of x2\n");
    printf("Replace B with Coefficient of x\n");
    printf("Replace C with Constant Value\n");
    scanf("%dx2 + %dx + %d", &coeff_of_x2, &coeff_of_x, &constant);
    printf("Equation : %dx2 + %dx + %d has ",coeff_of_x2, coeff_of_x, constant);

    int discriminant = coeff_of_x * coeff_of_x - (4 * coeff_of_x2 * constant);
    if ( discriminant > 0)
        printf("Two Roots are real and distinct.");
    else if( discriminant < 0)
        printf("Roots are Imaginary.");
    else
        printf("Roots are real and equal.");

    return 0;
}