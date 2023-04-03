#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>

using namespace std;

struct Articulo {
    int numero;
    char nombre[100];
    char descripcion[100];
    char clasificacion[100];
    char genero[50];
    char consola[50];
    float precio;
};

int main() {
    int opcion, na, op1;
    float imp = 0.16, pres, total, timp;
    Articulo articulos[10];
    int contador = 0;
    bool agregarOtroArticulo;

    do {
        printf("\t ***MENU DE OPCIONES***\n");
        printf("1.- Alta de Articulos\n");
        printf("2.- Baja de Articulos\n");
        printf("3.- Modificacion de Articulo\n");
        printf("4.- Lista de Articulos\n");
        printf("5.- Limpiar Pantalla\n");
        printf("6.- Salir\n");
        scanf_s("%d", &opcion);

        switch (opcion) {
        case 1:
            do {
                printf("Numero de Articulo:\n");
                scanf_s("%d", &na);
                articulos[contador].numero = na;

                printf("Nombre de Articulo:\n");
                scanf_s("%s", articulos[contador].nombre, 100);

                printf("Descripcion:\n");
                scanf_s("%s", articulos[contador].descripcion, 100);

                printf("Clasificacion:\n");
                scanf_s("%s", articulos[contador].clasificacion, 100);

                printf("Genero:\n");
                scanf_s("%s", articulos[contador].genero, 50);

                printf("Consola:\n");
                scanf_s("%s", articulos[contador].consola, 50);

                printf("Precio Unitario:\n");
                scanf_s("%f", &pres);

                timp = pres * imp;
                total = pres + timp;
                articulos[contador].precio = total;

                contador++;

                printf("¿Desea agregar otro articulo?\n");
                printf("1.- Si\n");
                printf("2.- No\n");
                scanf_s("%d", &op1);
                agregarOtroArticulo = (op1 == 1);

            } while (agregarOtroArticulo);

            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            for (int i = 0; i < contador; i++) {
                printf("Articulo %d:\n", i + 1);
                printf("  Nombre: %s\n", articulos[i].nombre);
                printf("  Clasificacion: %s\n", articulos[i].clasificacion);
                printf("  Genero: %s\n", articulos[i].genero);
                printf("  Consola: %s\n", articulos[i].consola);
            }
            break;

        case 5:
            system("cls");
            break;

        case 6:
            exit(1);
            break;
        }
    } while (opcion != 6);
}