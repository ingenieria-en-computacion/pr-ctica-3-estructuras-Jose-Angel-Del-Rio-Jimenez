#include <stdio.h>
#include "complejos.h"
#include <math.h>

int main(){
    COMPLEJOS comp1 = crear_complejo(4.0,9.0);
    COMPLEJOS comp2 = crear_complejo(4.0,9.0);


    printf("Primer numero complejo: %f + %fi\n", num_real(comp1), num_imaginario(comp1));
    printf("Segundo numero complejo: %f + %fi\n", num_real(comp2), num_imaginario(comp2));

    COMPLEJOS sum = suma(comp1, comp2);
    printf("La suma de ambos complejos es igual a: %f + %fi\n", num_real(sum), num_imaginario(sum));

    printf("El modulo del primer complejo es: %f\n", modulo(comp1));
    printf("El modulo del segundo complejo es: %f\n", modulo(comp2));

    comp1 = asignar_real(comp1, 5);
    comp1 = asignar_imaginario(comp1, 6);
    printf("Nuevo c1: %.2f + %.2fi\n", num_real(comp1), num_imaginario(comp1));

    return 0;
}