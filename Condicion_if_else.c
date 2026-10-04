#include <stdio.h>

int main()
{
    int resultado;
    printf("Cuanto es 39+50?");
    scanf("%d",&resultado);

    if(resultado==39+50)
    {
        printf("Respuesta correcta. Felicidades!");
    }
    else
    {
        printf("Respuesta incorrecta. Intente de nuevo");
    }
    return 0;
}