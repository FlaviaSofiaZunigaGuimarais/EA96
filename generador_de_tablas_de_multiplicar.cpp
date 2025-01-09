//
// Created by usuario on 08/01/2025.
//

#include <stdio.h>

int main(void) {

    int validatePositiveInt();
    //int numero=
    printf("Bienvenido\n");


    void generateTable(int number);

    int a,b, producto;

    printf("Ingresa dos número enteros: ");
    scanf ("%d, %d", &a, &b);
    producto = a * b;
    printf("El producto es: %d\n", producto);

    int i=1;
    for (i=1; i<=10; i++) {
        printf("%d * %d = %d\n", i, producto, i*producto);
    }

    void printTable(int number);


    return 0;
}
