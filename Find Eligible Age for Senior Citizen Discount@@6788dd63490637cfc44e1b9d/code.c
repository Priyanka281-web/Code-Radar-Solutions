#include <stdio.h>

void checkEligibility(int age) {
    if (age >= 60) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }
}

int main() {
    int age;
    printf("");
    scanf("%d", &age);

    checkEligibility(age);

    return 0;
}


