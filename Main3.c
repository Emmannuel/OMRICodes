/* Problema 3 - Piedra, Papel o Tijeras*/
#include <stdio.h>

int main3() {
    int n, a, b;
    int puntosMartontito = 0;
    int puntosFlix = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (a == 0) {
            if (b == 5) {
                puntosMartontito++;
            } else if (b == 2) {
                puntosFlix++;
            }
        } else if (a == 5) {
            if (b == 2) {
                puntosMartontito++;
            } else if (b == 0) {
                puntosFlix++;
            }
        } else if (a == 2) {
            if (b == 0) {
                puntosMartontito++;
            } else if (b == 5) {
                puntosFlix++;
            }
        }
    }
    if (puntosMartontito > puntosFlix) {
        printf("MARTONTITO\n");
    } else if (puntosFlix > puntosMartontito) {
        printf("FLIX\n");
    } else {
        printf("EMPATE\n");
    }
    return 0;
}
