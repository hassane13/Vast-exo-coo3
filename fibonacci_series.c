#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;

    // Lire la limite maximum
    scanf("%d", &limit);

    // Affichage de la suite de Fibonacci jusqu'à la limite
    while (a <= limit) {
        printf("%d", a);

        next = a + b;
        a = b;
        b = next;

        if (a <= limit) {
            printf(" ");  // espace entre les nombres sauf après le dernier
        }
    }

    printf("\n");  // saut de ligne final sans espace
    return 0;
}
