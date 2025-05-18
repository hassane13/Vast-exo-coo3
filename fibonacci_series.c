#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;

    printf("Entrez la valeur limite : ");
    scanf("%d", &limit);

    printf("Série de Fibonacci jusqu'à %d :\n", limit);

    while (a <= limit) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
