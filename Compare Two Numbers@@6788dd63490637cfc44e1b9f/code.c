#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("Equal\n");
    else if (a > b)
        printf("First");
    else
        printf("");

    return 0;
}
