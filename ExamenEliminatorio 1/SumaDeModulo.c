#include <stdio.h>
int main() {
    long long int n, m;
    long long int a[10000];
    scanf("%lld %lld", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += (a[i] + a[j]) % m;
        }
    }
    printf("%lld\n", sum % m);
    return 0;
}