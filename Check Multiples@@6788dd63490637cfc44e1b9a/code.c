#include <stdio.h>

void checkMultiple(int a, int b) {
    if (b != 0 && a % b == 0) {
        printf("%d is a multiple of %d.\n", a, b);
    } else {
        printf("%d is not a multiple of %d.\n", a, b);
    }
}

int main() {
    int num1, num2;
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &num1, &num2);

    checkMultiple(num1, num2);

    return 0;
}
