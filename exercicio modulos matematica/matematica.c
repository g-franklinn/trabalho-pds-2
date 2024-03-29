#include <math.h>

float calcular_seno(float angulo_radianos){
    float angulo = angulo_radianos * (3.14159265 / 180.0);
    return sin(angulo);
}

float calcular_cosseno(float angulo_radianos){
    float angulo = angulo_radianos * (3.14159265 / 180.0);
    return cos(angulo);
}

float calcular_tangente(float angulo_radianos){
    float angulo = angulo_radianos * (3.14159265 / 180.0);
    if (cos(angulo) == 0) {
        return NAN; //Tangente indefinida
    } else {
        return tan(angulo);
    }
}