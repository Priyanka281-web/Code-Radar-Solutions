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
    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOdd(num);

    return 0;
}
