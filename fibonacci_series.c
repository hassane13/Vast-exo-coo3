#include <stdio.h>

int main() {
    int limit;      // Limite max pour la série Fibonacci
    int a = 0;      // Premier terme
    int b = 1;      // Deuxième terme
    int next;       // Terme suivant
    int first = 1;  // Flag pour gérer les espaces entre nombres

    // Lire la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        return 1; // En cas d'erreur de saisie, quitter
    }

    // Boucle pour générer la série Fibonacci jusqu'à la limite
    while (a <= limit) {
        if (!first) {
            printf(" "); // Ajouter un espace avant chaque nombre sauf le premier
        }
        printf("%d", a);
        first = 0;

        // Calculer le prochain terme
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n"); // Saut de ligne final

    return 0;
}
