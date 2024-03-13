#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

int main(){
    float angulo;
    printf("Digite o valor de um angulo para calcular seu seno, cosseno e tangente: ");
    scanf("%f", &angulo);

    printf("Seno de %.1f: %.3f\n",angulo, calcular_seno(30));
    printf("Cosseno de %.1f: %.3f\n",angulo, calcular_cosseno(30));
    printf("Tangente de %.1f: %.3f\n",angulo, calcular_tangente(30));


    system("PAUSE");
    return 0;
}