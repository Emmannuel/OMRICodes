/* Problema 1 -  Ropa Vieja */

#include <stdio.h>

int main() {
    int calorias = 0;
    int bolsa;
    scanf("%d", &bolsa);
    while (bolsa != 0) {
        calorias += bolsa;
        scanf("%d", &bolsa);
    }
    printf("%d\n", calorias);
    return 0;
}
