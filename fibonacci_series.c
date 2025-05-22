#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;
    int printed = 0; // indique si un nombre a été affiché

    scanf("%d", &limit);

    while (a <= limit) {
        if (printed) {
            printf(" ");
        }
        printf("%d", a);
        printed = 1;

        next = a + b;
        a = b;
        b = next;
    }

    // Affiche un saut de ligne uniquement si quelque chose a été imprimé
    if (printed) {
        printf("\n");
    }

    return 0;
}
