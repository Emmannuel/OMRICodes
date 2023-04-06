#include <stdio.h>
int main(void) {
    long long int n, i, max = 0, sum = 0;
    scanf("%lld", &n);
    long long int arr[n];
    for(i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    for(i=0; i<n; i++) {
        sum += max - arr[i];
    }
    printf("%lld\n", sum);
    return 0;
}