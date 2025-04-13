#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("Equal\n");
    else if (a > b)
        printf("%d is greater than %d.\n", a, b);
    else
        printf("%d is greater than %d.\n", b, a);

    return 0;
}
