#include <stdio.h>

int main() {
    int opcion;
    
    printf("Introduce un número (1 para Inglés, 2 para Español, 3 para Alemán): ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Hello World\n");
            break;
        case 2:
            printf("Hola Mundo\n");
            break;
        case 3:
            printf("Hallo Welt\n");
            break;
        default:
            printf("Opción no válida. Por favor, ingresa 1, 2 o 3.\n");
            break;
    }

    return 0;
}
