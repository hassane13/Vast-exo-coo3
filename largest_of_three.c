#include <stdio.h>

int main() {
    int a, b, c;

    // Lire trois entiers depuis l'entrée standard
    scanf("%d %d %d", &a, &b, &c);

    // Comparer les trois nombres pour trouver le plus grand
    if (a >= b && a >= c) {
        // a est plus grand ou égal aux deux autres
        printf("Le plus grand nombre est : %d\n", a);
    } else if (b >= a && b >= c) {
        // b est plus grand ou égal aux deux autres
        printf("Le plus grand nombre est : %d\n", b);
    } else {
        // c est le plus grand
        printf("Le plus grand nombre est : %d\n", c);
    }

    return 0;
}
