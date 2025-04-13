#include <stdio.h>

void checkEligibility(int age) {
    if (age >= 18) {
        printf("Eligible\n");
    } else {
        printf("Not eligible\n");
    }
}

int main() {
    int age;
    printf("");
    scanf("%d", &age);

    checkEligibility(age);

    return 0;
}
