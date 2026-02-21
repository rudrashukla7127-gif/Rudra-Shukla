#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("All three numbers are equal: %d\n", a);
    }
    else if (a >= b && a >= c) {
        printf("Maximum number is: %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("Maximum number is: %d\n", b);
    }
    else {
        printf("Maximum number is: %d\n", c);
    }

    return 0;
}


