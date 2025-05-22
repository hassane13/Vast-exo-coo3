#include <stdio.h>

int main() {
    int limit;      // Valeur limite jusqu'où afficher la série
    int a = 0;      // Premier terme de la série Fibonacci
    int b = 1;      // Deuxième terme de la série Fibonacci
    int next;       // Terme suivant calculé
    int first = 1;  // Indicateur pour éviter l'espace avant le premier nombre

    // Lire la valeur limite depuis l'entrée standard
    if (scanf("%d", &limit) != 1) {
        // Si la lecture échoue, on quitte avec un code d'erreur
        return 1;
    }

    // Tant que le terme courant est inférieur ou égal à la limite, on l'affiche
    while (a <= limit) {
        if (!first) {
            // Ajouter un espace avant tous les nombres sauf le premier
            printf(" ");
        }
        // Afficher le terme courant
        printf("%d", a);
        first = 0;

        // Calculer le terme suivant de la série
        next = a + b;

        // Mettre à jour les termes pour la prochaine itération
        a = b;
        b = next;
    }

    // Afficher un saut de ligne à la fin de la série
    printf("\n");

    return 0;
}
