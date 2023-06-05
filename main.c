#include <stdio.h>
#include <stdlib.h>

void main()
{
    int velocidadeHora = 278280;
    int distanciaMarte = 570000000;
    int distanciaDia = velocidadeHora * 24;
    int dias = distanciaMarte / distanciaDia;

    printf("A Voyager 1 levara %d dias para chegar em marte", dias);
}
