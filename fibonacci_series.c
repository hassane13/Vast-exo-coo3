#include <stdio.h>

// Affiche la suite de Fibonacci jusqu'à une limite donnée

int main() {
    int limit, a = 0, b = 1, next;
    int first = 1;

    // Lire la valeur limite
    scanf("%d", &limit);

    // Si la limite est négative, ne rien faire
    if (limit < 0) {
        return 0;
    }

    // Affichage de la suite
    while (a <= limit) {
        if (first) {
            printf("%d", a);
            first = 0;
        } else {
            printf(" %d", a);
        }

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
