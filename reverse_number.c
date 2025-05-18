#include <stdio.h>

int main() {
    int n, reversed = 0;
    scanf("%d", &n);

    int negatif = 0;
    if (n < 0) {
        negatif = 1;
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

    if (negatif) {
        reversed = -reversed;
    }

    printf("Nombre inversé : %d\n ", reversed);
    return 0;
}
