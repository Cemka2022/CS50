
#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main(void)
{

    int numinicial = 0, numfinal = 0;
    int años = 0;

    // TODO: Solicitud de tamaño de inicio
    do
    {
        numinicial = get_int("Ingresa el número inicial: ");
    }
    while (numinicial < 9);

    // TODO: Solicitud de tamaño final
    do
    {
        numfinal = get_int("Ingresa el número final: ");
    }
    while (numfinal < numinicial);

    // TODO: Calcular el número de años hasta que alcancemos el umbral
    while (numinicial < numfinal)
    {
        numinicial = numinicial + (numinicial / 3) - (numinicial / 4);
        años++;
    }

    // TODO: Imprimir número de años
    printf("Years: %i\n", años);

    return 0;
}