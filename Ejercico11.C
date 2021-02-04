#include <stdio.h>
int main() {
    int v = 18, w=21;
    const int *ptr=&v;
    ptr=&w;
    //ptr=16; se cambia el valor del apuntador
    w=3;//No estoy cambiando la posicion de memoria, y aun si lo hiciera estari permetido porque es constante.
    
    return 0;
}
  