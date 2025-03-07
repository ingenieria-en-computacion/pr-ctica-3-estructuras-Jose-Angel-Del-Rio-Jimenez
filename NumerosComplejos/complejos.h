#ifndef _COMPLEJOS_H_
#define _COMPLEJOS_H_
typedef float NIMAGINARIO;
typedef float NREAL;

typedef struct COMPLEJOS{
    NIMAGINARIO imag;
    NREAL real;
}COMPLEJOS;

COMPLEJOS crear_complejo(NREAL real, NIMAGINARIO imag);
COMPLEJOS asignar_real(COMPLEJOS comp, NREAL real);
COMPLEJOS asignar_imaginario(COMPLEJOS comp, NIMAGINARIO imag);
NREAL num_real(COMPLEJOS comp);
NIMAGINARIO num_imaginario(COMPLEJOS comp);
NREAL modulo(COMPLEJOS comp);
COMPLEJOS suma(COMPLEJOS comp1, COMPLEJOS comp2);

#endif