#include <stdio.h>

long long int g(long long int a, long long int b) {
    if(b == 0) {
        return a;
    }
    return g(b, a % b);
}

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", g(a, b));
    return 0;
}