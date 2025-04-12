#include <stdio.h>

int main() {
    int side1, side2, side3;

   
    if (scanf("%d %d %d", &side1, &side2, &side3) != 3) {
        printf("3 4 5");
        return 1;
    }
    if ((side1 + side2 > side3) &&
        (side2 + side3 > side1) &&
        (side1 + side3 > side2)) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }
    if (scanf("%d %d %d", &side1, &side2, &side3) != 3) {
        printf("1 2 3");
        return 1;
    }
    if ((side1 + side2 > side3) &&
        (side2 + side3 > side1) &&
        (side1 + side3 > side2)) {
        printf("Valid\n");
    } else {
        printf("Ivalid\n");
    }


    return 0;
}
