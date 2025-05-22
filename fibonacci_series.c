#include <stdio.h>

int main() {
    int limit;        // Limite supérieure pour la série de Fibonacci
    int a = 0, b = 1; // Premiers termes de la série
    int next;         // Prochain terme à calculer
    int printed = 0;  // Indique si un nombre a déjà été affiché (pour gérer les espaces)

    // Lire la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        // En cas d'erreur de saisie, quitter avec un code d'erreur
        return 1;
    }

    // Boucle tant que le terme actuel est inférieur ou égal à la limite
    while (a <= limit) {
        // Si ce n'est pas le premier nombre affiché, afficher un espace avant le nombre
        if (printed) {
            printf(" ");
        }

        // Afficher le terme actuel de la série
        printf("%d", a);

        printed = 1; // Indiquer qu'on a affiché au moins un nombre

        // Calculer le terme suivant
        next = a + b;
        a = b;
        b = next;
    }

    // Afficher un saut de ligne à la fin si on a affiché au moins un nombre
    if (printed) {
        printf("\n");
    }

    return 0;
}
