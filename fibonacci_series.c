#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;

    scanf("%d", &limit);

    while (a <= limit) {
        printf("%d ", a);  // Ajout d'un espace après chaque nombre
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
