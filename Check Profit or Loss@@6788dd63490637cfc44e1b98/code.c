#include <stdio.h>

void checkTransaction(float costPrice, float sellingPrice) {
    if (sellingPrice > costPrice) {
        printf("Profit\n");
    } else if (sellingPrice < costPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit, No Loss\n");
    }
}

int main() {
    float costPrice, sellingPrice;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    checkTransaction(costPrice, sellingPrice);

    return 0;
}
