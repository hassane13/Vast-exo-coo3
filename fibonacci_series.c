#include <stdio.h>

int main() {
    int limit;      // La limite jusqu’à laquelle on doit générer la série de Fibonacci
    int a = 0;      // Premier terme de la série
    int b = 1;      // Deuxième terme de la série
    int next;       // Variable pour stocker le terme suivant dans la série
    int first = 1;  // Indicateur pour savoir si on est au premier nombre (pour gérer les espaces)

    // Lire la limite depuis l'entrée standard (terminal)
    if (scanf("%d", &limit) != 1) {
        // Si la lecture échoue, on quitte le programme avec un code d’erreur
        return 1;
    }

    // Boucle tant que le terme actuel est inférieur ou égal à la limite
    while (a <= limit) {
        if (!first) {
            // Pour tous les termes sauf le premier, on affiche un espace avant le nombre
            printf(" ");
        }

        // Affiche le terme actuel de la série de Fibonacci
        printf("%d", a);

        // Après le premier nombre, on change le flag pour ajouter des espaces avant les suivants
        first = 0;

        // Calcul du terme suivant : somme des deux derniers termes
        next = a + b;

        // Décalage des termes : a devient b, b devient next
        a = b;
        b = next;
    }

    // Une fois la boucle terminée, on affiche un saut de ligne pour finir proprement la sortie
    printf("\n");

    return 0;
}
