#include <stdio.h>
//Desreferenciación de aúntadores 2
int main() {
    struct Articulo{
        char nombre[20];
        char descreipción[100];
        float precio;
    };
    struct Articulo art;
    struct Articulo *ptr_art=&art;
    (*ptr_art).precio=50.38;
    ptr_art->precio =50.38;
    printf("Precio: %f", ptr_art->precio);

    return 0;
}