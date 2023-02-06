#include <stdio.h>

int hcf(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return hcf(y, x % y);
  }
}

int main() {
  int x, y;
  printf("Enter two numbers: ");
  scanf("%d%d", &x, &y);
  printf("The HCF of %d and %d is %d\n", x, y, hcf(x, y));
  return 0;
}
