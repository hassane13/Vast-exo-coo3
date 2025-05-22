/*
 * fibonacci_series.c
 * 
 * Programme qui génère la série de Fibonacci jusqu'à une limite donnée
 * 
 * Fonctionnement :
 * 1. Lit une limite depuis l'entrée standard
 * 2. Génère tous les nombres de Fibonacci <= à cette limite
 * 3. Affiche "Fibonacci : " suivi des nombres séparés par des espaces
 * 
 * Exemple : pour limit=20, affiche "Fibonacci : 0 1 1 2 3 5 8 13"
 */

#include <stdio.h>
#include <limits.h>  // Pour INT_MAX

int main() {
    int limit;        // Limite supérieure pour la série de Fibonacci
    int a = 0, b = 1; // Premiers termes de la série : F(0)=0, F(1)=1
    int next;         // Variable temporaire pour le calcul du terme suivant
    int first = 1;    // Flag pour gérer l'espacement (pas d'espace avant le 1er nombre)
    
    // Lecture de la limite depuis l'entrée standard
    // Vérification que la lecture s'est bien passée
    if (scanf("%d", &limit) != 1) {
        return 1; // Code d'erreur si la saisie est invalide
    }
    
    // Affichage du préfixe "Fibonacci : " (toujours affiché, même si limite < 0)
    printf("Fibonacci : ");
    
    // Cas particulier : limite négative
    // Dans ce cas, aucun nombre de Fibonacci n'est <= limite négative
    if (limit < 0) {
        printf("\n"); // Affiche juste une ligne vide après le préfixe
        return 0;
    }
    
    // Génération de la série de Fibonacci
    // Continue tant que le terme actuel est inférieur ou égal à la limite
    while (a <= limit) {
        // Gestion de l'espacement : pas d'espace avant le premier nombre
        if (!first) {
            printf(" ");
        }
        
        // Affichage du terme actuel
        printf("%d", a);
        
        // Marquer que le premier terme a été affiché
        first = 0;
        
        // PROTECTION CONTRE LE DÉPASSEMENT D'ENTIER
        // Vérifier si l'addition va causer un dépassement
        if (a > INT_MAX - b) {
            // Si a + b dépasserait INT_MAX, on s'arrête
            break;
        }
        
        // Calcul du terme suivant selon la formule : F(n) = F(n-1) + F(n-2)
        next = a + b;  // Nouveau terme = somme des deux précédents
        
        // Passage au terme suivant
        a = b;         // Le second devient le premier
        b = next;      // Le nouveau devient le second
    }
    
    // Fin de ligne obligatoire après la série
    printf("\n");
    
    return 0; // Code de succès
}