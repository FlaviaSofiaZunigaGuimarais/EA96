#include <stdio.h>
int main(void) {

    char cadena[100];
    printf ("Introduce una cadena: ");
    scanf("%s", cadena);


    void reverseString(char* original, char* reversed);
    printf("La cadena invertida es: %s", cadena);
    scanf("%s", cadena);

    int largo, i;
    char *inicio, *final, temp;

    for (i = 0; i < largo - 1; i++)
        final++;

    for (i = 0; i < largo/2; i++)
    {
        temp = *final;
        *final = *inicio;
        *inicio = temp;

        inicio++;
        final--;

    }
    void getInput(char* phrase);

    return 0;
}