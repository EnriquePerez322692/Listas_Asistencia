#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct alumnos
{
    int asistio; //1 si, 0 no
    int clave;
    char nombre[30];
    struct alumnos * sig;
}TAlumnos;

void Inicializar_alumnos(int A, TAlumnos ** alumnos);
void Tomar_asistencia(TAlumnos * cabecera);
void Imprimir_lista(TAlumnos *cabecera);
void Modificar_alumno(TAlumnos *cabecera);
void Eliminar_alumno(TAlumnos **cabecera);
void Eliminar_asistencia(TAlumnos **cabecera);
void Cargar_lista(TAlumnos **alumnos);
void Ordenar_alumnos(TAlumnos **cabecera);
