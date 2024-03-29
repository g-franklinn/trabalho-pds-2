#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"


typedef struct Circulo {
    float x, y, r;
} Circulo;

Circulo circ_cria(float x, float y, float r){
    Circulo *c = malloc (sizeof(Circulo));
    c->x = x;
    c->y = y;
    c->r = r;
    return *c;
}; 

void circ_libera(Circulo *c){
    free(c);
}; 

float circ_area(Circulo *c){
    float area = 3.14 * (pow(c->r, 2));
    return area;
}; 

int circ_concentricos(Circulo *c1, Circulo *c2){
    if(c1->x == c2->x && c1->y == c2->y){
        return 1;
    } else {
        return 0;
    }
}; 

float circ_raio(Circulo *c){
    return c->r;
};

int main(){
    float x1, y1, r1, x2, y2, r2;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
    printf("Digite o valor do raio r1: ");
    scanf("%f", &r1);

    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);
    printf("Digite o valor do raio r2: ");
    scanf("%f", &r2);

    // Criar círculos com os valores inseridos
    Circulo c1 = circ_cria(x1, y1, r1);
    Circulo c2 = circ_cria(x2, y2, r2);

    // Calcular e imprimir a área dos círculos
    printf("Area do circulo 1: %.2f\n", circ_area(&c1));
    printf("Area do circulo 2: %.2f\n", circ_area(&c2));

    // Verificar se os círculos são concentricos
    if (circ_concentricos(&c1, &c2)) {
        printf("Os circulos sao concentricos.\n");
    } else {
        printf("Os circulos nao sao concentricos.\n");
        
    }

    // Liberar memória alocada para os círculos
    circ_libera(&c1);
    circ_libera(&c2);


    system("PAUSE");
    return 0;
}