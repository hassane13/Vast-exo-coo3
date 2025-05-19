#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lire la température Celsius
    if (scanf("%f", &celsius) != 1) {
        return 1;
    }

    // Convertir en Fahrenheit
    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    // Afficher le résultat avec caractère degré codé pour éviter problème d'encodage
    printf("%.1f\xB0C équivaut à %.1f\xB0F\n", celsius, fahrenheit);

    return 0;
}
