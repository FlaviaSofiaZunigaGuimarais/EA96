#include <stdio.h>
#include <string.h>

void reverseString(char* original) {
    int largo = strlen(original);
    char* inicio = original;

    while (inicio < final) {
        temp = *final;
        *final = *inicio;
        *inicio = temp;

        inicio++;
        final--;
    }
}


int main(void) {
    char cadena[100];

    printf("Introduce una cadena: ");
    scanf("%99s", cadena);

    reverseString(cadena);

    printf("La cadena invertida es: %s\n", cadena);

    return 0;
}