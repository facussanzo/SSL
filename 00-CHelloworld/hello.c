#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");

#ifdef __STDC_VERSION__
    printf("Estándar C soportado: %ldL\n", __STDC_VERSION__);
#endif

    return 0;
}