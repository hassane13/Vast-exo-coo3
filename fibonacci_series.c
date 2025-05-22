#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;
    int first = 1;

    // Lire la limite supérieure depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        return 1;  // Erreur de saisie
    }

    // Afficher les nombres de Fibonacci jusqu'à la limite incluse
    while (a <= limit) {
        if (!first) {
            printf(" ");  // Séparateur espace entre les nombres
        }
        printf("%d", a);
        first = 0;

        // Calculer le prochain terme
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");  // Fin de ligne après la série

    return 0;
}
