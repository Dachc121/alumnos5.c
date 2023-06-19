#include <stdio.h> 

int main() {
    char texto[30];
    char vocales[30];
    int i, j;

    printf("Ingrese un texto: ");
    fgets(texto, sizeof(texto), stdin);

    j = 0; // Variable para llevar la cuenta de las vocales

    for (i = 0; texto[i] != '\0'; i++) {
        // Verificar si el carácter es una vocal en minúscula o mayúscula
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
            texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U') {
            vocales[j] = texto[i]; // Guardar la vocal en el arreglo de vocales
            j++; // Incrementar el contador de vocales
            printf("%c ", texto[i]); // Imprimir la vocal encontrada
        }
    }

    vocales[j] = '\0'; // Agregar el carácter nulo al final del arreglo de vocales

    printf("\nVocales encontradas: %s\n", vocales);

    return 0;
}
