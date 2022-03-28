#include <stdio.h>
#define I2S(x) ((short *) x)
//prueba1
int main() {
    int i, x[10];

    for(i=0; i<10; i++) {
        x[i] = i;
    }
    // ¿Por qué se imprimen alternados con 0 los numeros asignados en el for anterior?
    //Esto se debe a los bytes que cause que imprima uno seguido de otro si aumentamos
    //el tope imprime los 9 numeros y sigue imprimiendo el 0 por los bytes al usar short * y * a
    //antes de llamar a la macro
    for(i=0; i<20; i++) {
        printf("%d\n", *I2S(x+i));
        
    }
    
}
