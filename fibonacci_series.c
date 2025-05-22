#include <stdio.h>

int main() {
    int limit;         // Limite maximale jusqu'à laquelle on génère la série de Fibonacci
    int a = 0, b = 1;  // Les deux premiers termes de la série
    int next;          // Terme suivant calculé
    int first = 1;     // Indicateur pour gérer l'affichage des espaces (1 = premier nombre)

    // Lire la limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        // En cas d'erreur de saisie, quitter avec un code d'erreur
        return 1;
    }

    // Boucle : tant que 'a' est inférieur ou égal à la limite, on affiche 'a'
    while (a <= limit) {
        if (!first) {
            // Si ce n'est pas le premier nombre, afficher un espace avant pour séparer
            printf(" ");
        }

        // Afficher le terme actuel
        printf("%d", a);

        // Après avoir affiché le premier nombre, on passe 'first' à 0
        first = 0;

        // Calculer le terme suivant de la série Fibonacci
        next = a + b;

        // Mettre à jour 'a' et 'b' pour la prochaine itération
        a = b;
        b = next;
    }

    // Afficher un saut de ligne après la série
    printf("\n");

    return 0;
}
