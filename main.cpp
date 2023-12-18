//
// Created by Pizarman on 19/12/2023.
//

#include <stdlib.h>
#include <stdio.h>

int main() {
    // Declarar un número negativo
    int num = -10;

    // Obtener el valor absoluto utilizando abs()
    for (int i = 1; i > num; i--) {
        int abs_num = abs(i);

        printf("El valor absoluto de %d es %d\n", i, abs_num);
    }

    return 0;
}