#include <stdio.h>

int main() {
    int limit;         // Limite maximale pour afficher les nombres de Fibonacci
    int a = 0, b = 1;  // Initialisation des deux premiers termes
    int next;          // Terme suivant
    int first = 1;     // Flag pour gérer l'affichage des espaces

    // Lire la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        return 1; // Sortir en cas d'erreur de lecture
    }

    // Générer et afficher la série de Fibonacci jusqu'à la limite
    while (a <= limit) {
        if (!first) {
            printf(" "); // Afficher un espace avant chaque nombre sauf le premier
        }
        printf("%d", a);
        first = 0;

        next = a + b;
        a = b;
        b = next;
    }
    printf("\n"); // Saut de ligne final obligatoire

    return 0;
}
