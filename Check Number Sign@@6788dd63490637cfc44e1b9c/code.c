#include <stdio.h>

void checkNumberSign(int num) {
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
}

int main() {
    int num;
    printf("\");
    scanf("%d", &num);

    checkNumberSign(num);

    return 0;
}
