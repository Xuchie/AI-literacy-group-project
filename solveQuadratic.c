#include <stdio.h>
#include <math.h>

int solveQuadratic(double a, double b, double c, double *x1, double *x2) {
    if (a == 0) {
        // Linear equation: bx + c = 0
        if (b == 0) return -1;  // Degenerate case
        *x1 = -c / b;
        return 1;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double sqrtD = sqrt(discriminant);
        *x1 = (-b + sqrtD) / (2 * a);
        *x2 = (-b - sqrtD) / (2 * a);
        return 2;
    } 
    else if (discriminant == 0) {
        *x1 = -b / (2 * a);
        return 1;
    } 
    else {
        return 0; // No real roots
    }
}

int main(){
    double a, b, c, x1, x2;
    printf("Enter coefficients a: ");
    scanf("%lf", &a);
    printf("Enter coefficients b: ");
    scanf("%lf", &b);
    printf("Enter coefficients c: ");
    scanf("%lf", &c);
    

    int result = solveQuadratic(a, b, c, &x1, &x2);

    if (result == 2) {
        printf("Two distinct real roots: x1 = %.2lf and x2 = %.2lf\n", x1, x2);
    } 
    else if (result == 1) {
        printf("One real root: x = %.2lf\n", x1);
    } 
    else if (result == 0) {
        printf("No real roots.\n");
    } 
    else {
        printf("Invalid equation.\n");
    }

    return 0;
}