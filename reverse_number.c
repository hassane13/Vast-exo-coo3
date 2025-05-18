#include <stdio.h>

int main() {
    int n, reversed = 0;
    scanf("%d", &n);

    // Supposons n >= 0
    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    printf("Nombre inversé : %d\n", reversed);
    return 0;
}
