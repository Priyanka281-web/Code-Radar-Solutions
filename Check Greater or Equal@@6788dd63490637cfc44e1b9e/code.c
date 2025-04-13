#include <stdio.h>

void checkGreaterOrEqual(int a, int b) {
    if (a >= b) {
        printf("%d is greater than or equal to %d.\n", a, b);
    } else {
        printf("%d is not greater than or equal to %d.\n", a, b);
    }
}

int main() {
    int num1, num2;
    printf("");
    scanf("%d %d", &num1, &num2);

    checkGreaterOrEqual(num1, num2);

    return 0;
}
