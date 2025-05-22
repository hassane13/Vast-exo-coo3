#include <stdio.h>

int main() {
    int limit;           // Valeur limite jusqu'à laquelle afficher la série de Fibonacci
    int a = 0, b = 1;    // Initialisation des deux premiers termes de la série
    int next;            // Terme suivant dans la série
    int first = 1;       // Indicateur pour gérer l'affichage des espaces entre les nombres

    // Lire la valeur limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        // En cas d'erreur de lecture, quitter avec code d'erreur
        return 1;
    }

    // Boucle pour générer la série de Fibonacci tant que le terme courant est <= limite
    while (a <= limit) {
        if (!first) {
            // Si ce n'est pas le premier terme, afficher un espace avant le nombre
            printf(" ");
        }
        // Afficher le terme courant de la série
        printf("%d", a);

        // Indiquer que le premier terme a été affiché
        first = 0;

        // Calculer le terme suivant
        next = a + b;

        // Mettre à jour les deux derniers termes
        a = b;
        b = next;
    }

    // Afficher un saut de ligne à la fin, obligatoire pour la bonne présentation
    printf("\n");

    return 0;
}
