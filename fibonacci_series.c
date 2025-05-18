#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;
    scanf("%d", &limit);

    while (a <= limit) {
        printf("%d", a);
        next = a + b;
        a = b;
        b = next;
        if (a <= limit)
            printf(" ");
    }
    printf("\n");
    return 0;
}
