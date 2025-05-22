#include <stdio.h>

int main() {
    int limit;      // La limite jusqu'où afficher la série Fibonacci
    int a = 0;      // Premier terme de la série
    int b = 1;      // Deuxième terme de la série
    int next;       // Terme suivant
    int first = 1;  // Indicateur pour gérer l'affichage des espaces

    // Lire la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        // En cas d'erreur de lecture, on quitte avec code 1
        return 1;
    }

    // Afficher la série Fibonacci jusqu'à la limite
    while (a <= limit) {
        if (!first) {
            // Ajouter un espace avant chaque nombre sauf le premier
            printf(" ");
        }
        printf("%d", a);
        first = 0;

        // Calculer le terme suivant
        next = a + b;
        a = b;
        b = next;
    }

    // Terminer la ligne après l'affichage
    printf("\n");

    return 0;
}
