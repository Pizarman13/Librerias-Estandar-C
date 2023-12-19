//
// Created by Pizarman on 19/12/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0));

    int random_number = rand() % 101; // para que el num sea del 0 al 100
    printf("Numero aleatorio: %d\n", random_number);

    return 0;
}
