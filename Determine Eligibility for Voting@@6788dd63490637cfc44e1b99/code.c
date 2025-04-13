#include <stdio.h>

void checkEligibility(int age) {
    if (age >= 18) {
        printf("Eligible to vote.\n");
    } else {
        printf("Not eligible to vote.\n");
    }
}

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    checkEligibility(age);

    return 0;
}
