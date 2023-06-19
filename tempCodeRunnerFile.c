#include <stdio.h>

#define  Datos 100

struct Estudiante {
    char nombre[Datos];
    int edad;
    char direccion[Datos];
    char carrera[Datos];
    float promedio;
};

int main() {
    struct Estudiante estudiantes[2];

    printf("Ingrese los datos de los estudiantes:\n");

    for (int i = 0; i < 2; i++) {
        printf("Estudiante %d:\n", i + 1);

        printf("Nombre: ");
        fflush(stdin);
        gets(estudiantes[i].nombre);

        printf("Edad: ");
        fflush(stdin);
        scanf("%d", &estudiantes[i].edad);
        fflush(stdin);

        printf("Dirección: ");
        fflush(stdin);
        gets(estudiantes[i].direccion);

        printf("Carrera: ");
        fflush(stdin);
        gets(estudiantes[i].carrera);

        printf("Promedio de calificaciones: ");
        fflush(stdin);
        scanf("%f", &estudiantes[i].promedio);
        fflush(stdin);

        printf("\n");
    }

    printf("Datos de los estudiantes:\n");

    for (int i = 0; i < 2; i++) {
        printf("Estudiante %d:\n", i + 1);

        printf("Nombre: ");
        puts(estudiantes[i].nombre);

        printf("Edad: %d\n", estudiantes[i].edad);

        printf("Dirección: ");
        puts(estudiantes[i].direccion);

        printf("Carrera: ");
        puts(estudiantes[i].carrera);

        printf("Promedio de calificaciones: %.2f\n", estudiantes[i].promedio);
    
        printf("\n");
    }

    return 0;
}
