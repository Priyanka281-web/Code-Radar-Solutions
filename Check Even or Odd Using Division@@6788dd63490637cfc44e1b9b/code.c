#include <stdio.h>

void checkEvenOdd(int num) {
    if ((num / 2) * 2 == num) { 
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}

int main() {
    int num;
    printf("");
    scanf("%d", &num);

    checkEvenOdd(num);

    return 0;
}
