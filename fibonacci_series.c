#include <stdio.h>

int main() {
    int limit;      // Limite maximale pour la série de Fibonacci
    int a = 0;      // Premier terme de la série
    int b = 1;      // Deuxième terme de la série
    int next;       // Terme suivant dans la série
    int first = 1;  // Indicateur pour gérer l'affichage des espaces

    // Lecture de la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        return 1;  // Quitte si la lecture échoue
    }

    // Génération et affichage de la série de Fibonacci jusqu'à la limite
    while (a <= limit) {
        if (!first) {
            printf(" ");  // Espace avant tous les termes sauf le premier
        }
        printf("%d", a);
        first = 0;

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");  // Saut de ligne final obligatoire
    return 0;
}
