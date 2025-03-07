#include "complejos.h"
#include <math.h>

COMPLEJOS crear_complejo(NREAL real, NIMAGINARIO imag){
    COMPLEJOS c;
    c.real = real;
    c.imag = imag;

    return c;
}

COMPLEJOS asignar_real(COMPLEJOS comp, NREAL real){
    comp.real = real;

    return comp;
}

COMPLEJOS asignar_imaginario(COMPLEJOS comp, NIMAGINARIO imag){
    comp.imag = imag;

    return comp;
}

NREAL num_real(COMPLEJOS comp){
    return comp.real;

}

NIMAGINARIO num_imaginario(COMPLEJOS comp){
    return comp.imag;
}

NREAL modulo(COMPLEJOS comp){
    NREAL mod;
    
    mod = sqrt((comp.real * comp.real) + (comp.imag * comp.imag));

    return mod;
}

COMPLEJOS suma(COMPLEJOS comp1, COMPLEJOS comp2){
    COMPLEJOS res;
    res.real = comp1.real + comp2.real;
    res.imag = comp1.imag + comp2.imag;

    return res;
}

