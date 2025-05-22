#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;

    // Lire la limite maximale jusqu'où afficher la suite de Fibonacci
    scanf("%d", & limit);

    // Boucle tant que le nombre actuel 'a' est inférieur ou égal à la limite
    while (a <= limit) {
        // Affiche le nombre actuel de la suite
        printf(" %d ", a);

        // Calcul du prochain nombre dans la suite de Fibonacci
        next = a + b;
        a = b;
        b = next;

        // Si le prochain nombre est encore dans la limite, on affiche un espace
        if (a <= limit) {
            printf(" "); // Ajoute un espace entre les nombres sauf après le dernier
        }
    }

    // Passe à la ligne après avoir affiché toute la suite
    printf(" \n ");
    return 0;
}
