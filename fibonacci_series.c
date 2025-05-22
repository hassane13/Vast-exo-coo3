#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next, first = 1;
    if (scanf("%d", &limit) != 1)
        return 1;

    while (a <= limit) {
        if (!first) printf(" ");
        printf("%d", a);
        first = 0;

        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
