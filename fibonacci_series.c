#include <stdio.h>

int main() {
    int limit;      // Limite maximale jusqu'où afficher les nombres de Fibonacci
    int a = 0;      // Premier terme de la série Fibonacci
    int b = 1;      // Deuxième terme de la série Fibonacci
    int next;       // Variable pour stocker le terme suivant
    int first = 1;  // Indicateur pour gérer l'affichage des espaces (pas d'espace avant le premier nombre)

    // Lire la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        return 1;  // Quitter si la lecture échoue
    }

    // Boucle tant que le terme actuel est strictement inférieur à la limite
    while (a < limit) {
        // Afficher un espace avant le nombre sauf pour le premier terme
        if (!first) {
            printf(" ");
        }
        // Afficher le terme courant
        printf("%d", a);
        first = 0;

        // Calculer le terme suivant
        next = a + b;
        a = b;
        b = next;
    }

    // Ajouter un saut de ligne à la fin de la sortie
    printf("\n");

    return 0;
}
