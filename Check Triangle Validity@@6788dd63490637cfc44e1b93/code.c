#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Prompt the user to enter the lengths of the three sides
    printf("Enter the lengths of the three sides of the triangle:\n");

    // Read the side lengths from the user
    if (scanf("%d %d %d", &side1, &side2, &side3) != 3) {
        printf("Invalid input. Please enter three integer values.\n");
        return 1;
    }

    // Check the Triangle Inequality Theorem
    if ((side1 + side2 > side3) &&
        (side2 + side3 > side1) &&
        (side1 + side3 > side2)) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
