#include <stdio.h>

int main() {
    int limit;      // Limite maximale jusqu'à laquelle afficher la série
    int a = 0;      // Premier terme de la série Fibonacci
    int b = 1;      // Deuxième terme de la série Fibonacci
    int next;       // Terme suivant dans la série
    int first = 1;  // Indicateur pour savoir si on affiche le premier terme (pas d'espace avant)

    // Lire la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        // En cas d'erreur de saisie, quitter avec code d'erreur 1
        return 1;
    }

    // Boucle tant que le terme courant est inférieur ou égal à la limite
    while (a <= limit) {
        if (!first) {
            // Pour tous les termes sauf le premier, afficher un espace avant le nombre
            printf(" ");
        }
        printf("%d", a);
        first = 0;

        // Calculer le terme suivant
        next = a + b;
        a = b;
        b = next;
    }

    // Afficher un saut de ligne final
    printf("\n");

    return 0;
}
