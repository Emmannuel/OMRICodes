#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            printf("%d\n", i + 1);
            break;
        }
    }
    return 0;
}