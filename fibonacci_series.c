#include <stdio.h>

int main() {
    int limit;        // Limite supérieure pour la série de Fibonacci
    int a = 0, b = 1; // Deux premiers termes de Fibonacci
    int next;         // Variable pour stocker le prochain terme
    int first = 1;    // Flag pour éviter espace avant le premier nombre

    // Lecture de la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        return 1; // Quitter si saisie invalide
    }

    // Boucle pour générer la série tant que le terme courant est <= limite
    while (a <= limit) {
        if (!first) {
            printf(" "); // Ajouter un espace entre les nombres sauf avant le premier
        }
        printf("%d", a); // Afficher le terme courant
        first = 0;       // Indiquer que le premier terme a été affiché

        // Calculer le terme suivant de la série
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n"); // Nouvelle ligne à la fin de la série

    return 0; // Fin du programme
}
