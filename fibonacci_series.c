#include <stdio.h>

int main() {
    int limit;           // Limite supérieure jusqu'à laquelle on génère la série de Fibonacci
    int a = 0, b = 1;    // Deux premiers termes de la série
    int next;            // Variable pour stocker le terme suivant dans la série
    int first = 1;       // Indicateur pour savoir si on affiche le premier nombre (pour gérer les espaces)

    // Lire la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1)
        return 1;       // En cas d'erreur de saisie, quitter avec code erreur

    // Boucle tant que le terme actuel 'a' est inférieur ou égal à la limite
    while (a <= limit) {
        // Si ce n'est pas le premier nombre affiché, afficher un espace avant le nombre
        if (!first) {
            printf(" ");
        }

        // Afficher le terme actuel de la série
        printf("%d", a);

        // Après avoir affiché le premier nombre, on met first à 0
        first = 0;

        // Calculer le terme suivant en sommant les deux derniers termes
        next = a + b;

        // Mettre à jour les termes pour la prochaine itération
        a = b;
        b = next;
    }

    // Après avoir affiché tous les nombres, afficher un saut de ligne
    printf("\n");

    return 0;
}
