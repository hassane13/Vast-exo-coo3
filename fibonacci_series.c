#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;
    int first = 1; // pour éviter d’afficher un espace avant le premier nombre

    // Lire la limite maximum
    scanf("%d", &limit);

    // Affichage de la suite de Fibonacci jusqu'à la limite
    while (a <= limit) {
        if (first) {
            printf("%d", a);
            first = 0;
        } else {
            printf(" %d", a); // espace avant les nombres suivants
        }

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n"); // saut de ligne final
    return 0;
}
