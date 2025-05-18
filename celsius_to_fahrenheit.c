#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    // Supprimer les caractères spéciaux "°"
    printf("%.1fC equivaut à %.1fF\n", celsius, fahrenheit);

    return 0;
}
