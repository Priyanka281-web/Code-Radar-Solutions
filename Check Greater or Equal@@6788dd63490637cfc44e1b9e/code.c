#include <stdio.h>

void checkGreaterOrEqual(int a, int b) {
    if (a >= b) {
        printf("Yes");
    } else {
        printf("No");
    }
}

int main() {
    int num1, num2;
    printf("");
    scanf("%d %d", &num1, &num2);

    checkGreaterOrEqual(num1, num2);

    return 0;
}
