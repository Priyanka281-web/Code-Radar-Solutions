#include <stdio.h>

void checkTriangleType(int a, int b, int c) {
    if (a == b && b == c) {
        printf("Equilateral Triangle\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }
}

int main() {
    int a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    checkTriangleType(a, b, c);

    return 0;
}
