#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    // Suppression des caractères spéciaux ° pour éviter les erreurs
    printf("%.1f C equivaut a %.1f F\n", celsius, fahrenheit);

    return 0;
}
