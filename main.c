#include <stdio.h>
#include "conjunto.h"


int main(){
    CONJUNTO c, d ,e;
    c = conjunto_vacio();
    d = conjunto_vacio();
    e = conjunto_vacio();
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);

    printf("El conjunto c esta vacío %d \n");
    c = agregar(c, 2);
    c = agregar(c, 3);
    c = agregar(c, 55);
    c = agregar(c, 45);
    c = agregar(c, 7);
    print_conjunto(c);

    d = agregar(d, 12);
    d = agregar(d, 22);
    d = agregar(d, 24);
    print_conjunto(d);

    e = _union(c,d);
    print_conjunto(e);

    return 0;
}