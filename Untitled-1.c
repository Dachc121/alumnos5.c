#include <stdio.h>

int main (int argc, char const *argv[])
{
    struct alumno
    {
        char nombre [20];
        char direccion[20];
        char carrera[20];
        int edad;
        float promedio;
    } a1 = {"Juan","Centro","Software",20,9.1};
    
    printf ("Datos de alumnos:");

    printf ("%s",a1.nombre);

        return 0;
}
