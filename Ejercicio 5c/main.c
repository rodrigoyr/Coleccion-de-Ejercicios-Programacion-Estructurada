#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
} Estudiante;

void imprimirEstudiante2(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

int main() {
    Estudiante estudiante1;

    imprimirEstudiante2(&estudiante1);

    return 0;
}
