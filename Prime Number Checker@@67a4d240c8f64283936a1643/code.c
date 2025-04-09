#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) { // Only iterate up to sqrt(num)
        if (num % i == 0) {
            return 0; // If divisible by any number, it is not prime
        }
    }
    return 1; // If no divisors are found, it is prime
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0; // Exit successfully
}
