#include <stdio.h>

int main() {
    int limit;
    int a = 0, b = 1, next;
    int first = 1;

    if (scanf("%d", &limit) != 1)
        return 1;

    // Si limite négative, ne rien afficher (sauf saut de ligne)
    if (limit < 0) {
        printf("\n");
        return 0;
    }

    while (a <= limit) {
        if (!first)
            printf(" ");
        printf("%d", a);
        first = 0;

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
