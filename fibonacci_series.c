#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;

    scanf("%d", &limit);

    // Afficher la suite de Fibonacci jusqu'à la limite avec un format propre
    while (a <= limit) {
        printf("%d", a);

        next = a + b;
        a = b;
        b = next;

        if (a <= limit) {
            printf(" ");  // espace entre les nombres sauf après le dernier
        }
    }

    printf("\n");  // saut de ligne sans espace
    return 0;
}
