#include <stdio.h>
#define I2S(x) ((short *) x)
//prueba1
int main() {
    int i, x[10];

    for(i=0; i<10; i++) {
        x[i] = i;
    }
    printf(x);
    // ¿Por qué se imprimen alternados con 0 los numeros asignados en el for anterior?
    for(i=0; i<10; i++) {
        printf("%d\n", *I2S(x+i));
    }
    
}
