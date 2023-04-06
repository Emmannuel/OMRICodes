#include <stdio.h>
int main() {
    long long int m, n;
    scanf("%lld %lld", &m, &n); 
    long long int c = 0; 
    long long int dedo = 1; 
    long long int d= 1; 
    while (c < n) { 
        c++; 
        dedo += d; 
        if (dedo > m) { 
            dedo = m - 1; 
            d = -1; 
        } else if (dedo < 1) {
            dedo = 1; 
            d = 1; 
        }
    }
    printf("%lld\n", dedo); 
    return 0;
}