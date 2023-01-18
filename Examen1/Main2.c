/* Problema 2 -  Bolsas de Ropa Vieja*/
#include <stdio.h>

int main2() {
    int bolsas[6];
    int bolsa1 = 0;
    int bolsa2 = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%d", &bolsas[i]);
    }

    for (int i = 0; i < 6; i++) {
        if (bolsas[i] > bolsa1) {
            bolsa2 = bolsa1;
            bolsa1 = bolsas[i];
        } else if (bolsas[i] > bolsa2) {
            bolsa2 = bolsas[i];
        }
    }

    printf("%d\n", bolsa1 + bolsa2);
    return 0;
}
