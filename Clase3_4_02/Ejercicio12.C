#include <stdio.h>
//Apuntadores, arreglos y aritmetica de apuntadores

int main() {
    int lista_arr[5]={10,20,30,40,50};
    int *lista_ptr;
    lista_ptr = lista_arr;// Amabas Variables apuntan al mismo sitio, misma direccion de memoria
    printf("%d\n", lista_arr[0]);//Mismo resultado en ambas
    printf("%d\n", lista_ptr[0]);
    printf("%d\n", *lista_arr);
    printf("%d\n", *lista_ptr);
    
    return 0;
}