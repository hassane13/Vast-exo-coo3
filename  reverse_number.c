#include <stdio.h>

int main() {
    int n, reversed = 0;
    scanf("%d", &n);

    if (n == 0) {
        printf("Nombre inverse : 0\n");
        return 0;
    }

    int is_negative = 0;
    if (n < 0) {
        is_negative = 1;
        n = -n;
    }

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    if (is_negative) {
        reversed = -reversed;
    }

    // Attention au mot exact attendu : peut-être "inverse" et pas "inversé"
    printf("Nombre inverse : %d\n", reversed);

    return 0;
}
