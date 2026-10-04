#include <stdio.h>

int main()
{
    int dia;

    // Solicitar al usuario que ingrese un número de día de la semana
    printf("Ingrese un número de día de la semana (1-7): ");
    scanf("%d", &dia);

    // Utilizar la estructura switch para determinar el día de la semana
    switch (dia)
    {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miércoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Número inválido. Por favor, ingrese un número del 1 al 7.\n");
    }

    return 0;
}
