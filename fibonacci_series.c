#include <stdio.h>

int main() {
    int limit;         // La valeur limite jusqu'à laquelle on affiche la série de Fibonacci
    int a = 0, b = 1;  // Initialisation des deux premiers termes de la série
    int next;          // Variable pour stocker le terme suivant
    int first = 1;     // Indicateur pour savoir si on affiche le premier nombre (pour gérer les espaces)

    // Lecture de la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        // Si la lecture échoue, on quitte le programme avec un code d'erreur
        return 1;
    }

    // Gestion du cas où la limite est négative
    // On n'affiche rien sauf un saut de ligne (la série ne contient pas de termes <= limite négative)
    if (limit < 0) {
        printf("\n");
        return 0;
    }

    // Boucle pour générer et afficher la série de Fibonacci jusqu'à la limite incluse
    while (a <= limit) {
        // Si ce n'est pas le premier nombre affiché, on imprime un espace avant le nombre
        if (!first) {
            printf(" ");
        }

        // Affichage du terme courant de la série
        printf("%d", a);

        // Après avoir affiché le premier terme, on indique que ce n'est plus le premier
        first = 0;

        // Calcul du terme suivant dans la série
        next = a + b;

        // Mise à jour des deux derniers termes
        a = b;
        b = next;
    }

    // Impression d'un saut de ligne obligatoire à la fin, pour respecter le format demandé
    printf("\n");

    return 0;
}
