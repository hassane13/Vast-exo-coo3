#include <stdio.h>

// Affiche la suite de Fibonacci jusqu'à une limite donnée

int main() {
    int limit, a = 0, b = 1, next;
    int first = 1;
    int printed = 0;  // indique si au moins un nombre a été affiché

    // Lire la limite
    scanf("%d", &limit);

    // Cas négatif : ne rien afficher, même pas \n
    if (limit < 0) {
        return 0;
    }

    while (a <= limit) {
        if (first) {
            printf("%d", a);
            first = 0;
        } else {
            printf(" %d", a);
        }
        printed = 1;
        next = a + b;
        a = b;
        b = next;
    }

    if (printed) {
        printf("\n");
    }

    return 0;
}
