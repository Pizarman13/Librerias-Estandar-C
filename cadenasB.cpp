//
// Created by Pizarman on 19/12/2023.
//
#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hola Mundo";

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

    for (int  i = 0; i <= length; i++) {
        printf("la cadena tiene %d caracteres\n", i);
    }

    return 0;
}
