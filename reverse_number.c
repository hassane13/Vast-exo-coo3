#include <stdio.h>

int main() {
    int n, reversed = 0;
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        reversed = 0;
    } else {
        while (n != 0) {
            reversed = reversed * 10 + (n % 10);
            n /= 10;
        }
    }

    printf("%d\n", reversed);
    return 0;
}
