#include <stdio.h>

int main(void) {
  int n1, n2, n3, r;
  scanf("%d %d %d", &n1, &n2, &n3);
  if(n1<n2){
    r=n2-n1;
  } else if (n1>n2){
    r=n1-n2;
  }
  if (r < n3) {
    printf("%d\nSi", r);
  } else if (r > n3 || r == n3) {
    printf("%d\nNo", r);
  }
  return 0;
}