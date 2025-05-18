#include <stdio.h>

int main() {
    int n, original, count = 0;

    scanf("%d", &n);
    original = n;

    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) {
            n = -n;
        }
        while (n != 0) {
            n /= 10;
            count++;
        }
    }

    printf("%d contient %d chiffre(s).\n", original, count);

    return 0;
}
