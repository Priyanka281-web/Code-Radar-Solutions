#include <stdio.h>

void checkMultiple(int a, int b) {
    if (b != 0 && a % b == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
}

int main() {
    int num1, num2;
    printf("");
    scanf("%d %d", &num1, &num2);

    checkMultiple(num1, num2);

    return 0;
}
