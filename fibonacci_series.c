#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;
    int first = 1;

    // Lire la valeur limite
    scanf("%d", &limit);

    // Générer et afficher la suite de Fibonacci jusqu’à la limite
    while (a <= limit) {
        if (first) {
            printf("%d", a); // Affiche le premier nombre sans espace
            first = 0;
        } else {
            printf(" %d", a); // Affiche les nombres suivants avec un espace devant
        }

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n"); // Saut de ligne final
    return 0;
}
