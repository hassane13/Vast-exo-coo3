#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;

    scanf("%d", &limit);

    int first = 1;  // Pour gérer l'affichage des espaces

    while (a <= limit) {
        if (!first) {
            printf(" ");
        }
        printf("%d", a);
        first = 0;

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
