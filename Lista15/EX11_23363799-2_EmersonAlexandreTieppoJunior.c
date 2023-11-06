#include <stdio.h>
#include <math.h>

float distancia_entre_pontos(float x1, float y1, float x2, float y2) {
    float distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distancia;
}

int main() {
    float x1, y1, x2, y2;
    printf("Digite as coordenadas x e y do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas x e y do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    float dist = distancia_entre_pontos(x1, y1, x2, y2);
    printf("A distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é %.2f\n", x1, y1, x2, y2, dist);

    return 0;
}
