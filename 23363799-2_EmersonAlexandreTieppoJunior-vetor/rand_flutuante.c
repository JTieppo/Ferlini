#include <stdio.h>
#include <stdlib.h> // Include this header for the rand function

int main() {
    float numero;
    numero = (float)rand() / RAND_MAX; // Generate a random float between 0 and 1
    printf("%f", numero);
    return 0; // Add a return statement to indicate successful execution
}
