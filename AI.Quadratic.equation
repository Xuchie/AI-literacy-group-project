#include <stdio.h>
#include <math.h>

/**
 * Solves a quadratic equation ax^2 + bx + c = 0
 * Prints the roots based on the discriminant value.
 */
void solveQuadratic(double a, double b, double c) {
    // Check if the equation is linear
    if (a == 0) {
        if (b == 0) {
            printf("No solution (invalid equation).\n");
        } else {
            printf("Linear equation detected. One root: x = %.2f\n", -c / b);
        }
        return;
    }

    // Calculate the discriminant
    double discriminant = (b * b) - (4 * a * c);

    // Condition for real and distinct roots
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots: x1 = %.2f and x2 = %.2f\n", root1, root2);
    }
    // Condition for real and equal roots
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Two equal real roots: x1 = x2 = %.2f\n", root);
    }
    // Condition for complex (imaginary) roots
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Two complex roots: x1 = %.2f + %.2fi and x2 = %.2f - %.2fi\n", 
               realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

// Example usage
int main() {
    printf("Test 1 (Real & Distinct):\n");
    solveQuadratic(1, -5, 6); // x^2 - 5x + 6 = 0
    
    printf("\nTest 2 (Real & Equal):\n");
    solveQuadratic(1, -4, 4); // x^2 - 4x + 4 = 0
    
    printf("\nTest 3 (Complex Roots):\n");
    solveQuadratic(1, 1, 1);  // x^2 + x + 1 = 0

    return 0;
}
