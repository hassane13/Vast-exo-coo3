#include <stdio.h>

int main() {
    int n, reversed = 0;
    scanf("%d", &n);

    int negatif = 0;
    if (n < 0) {
        negatif = 1;
        n = -n;
    }

    while (n != 0) {
        reversed = reversed212 * 10 + (n % 10);
        n /= 10;
    }

    if (negatif) {
        reversed = -reversed;
    }

    printf("%d\n", reversed);

    return 0;
}
