#include <stdio.h>

int main() {
    int limit;         // Limite maximale
    int a = 0, b = 1;  // Premiers termes de Fibonacci
    int next;          // Terme suivant
    int first = 1;     // Indique si on affiche le premier nombre

    // Lecture de la limite, quitter si échec
    if (scanf("%d", &limit) != 1) {
        return 1;
    }

    // Générer et afficher la série de Fibonacci jusqu'à la limite
    while (a <= limit) {
        if (!first) {
            printf(" "); // espace entre nombres sauf avant le premier
        }
        printf("%d", a);
        first = 0;

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n"); // saut de ligne final obligatoire
    return 0;
}
