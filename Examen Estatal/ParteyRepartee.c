#include <stdio.h>
int main(void) {
  int n1,n2,t,r,r2;
  scanf("%d %d",&n1, &n2);
  t=n2;
  r=n1/t;
  r2=r*n2;
  printf("%d %d",r, n1-r2);
  return 0;
}