#include <stdio.h>

int hcf(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return hcf(y, x % y);
  }
}

int isCoprime(int x, int y) {
  return hcf(x, y) == 1;
}

int main() {
  int x, y;
  printf("Enter two numbers: ");
  scanf("%d%d", &x, &y);
  if (isCoprime(x, y)) {
    printf("%d and %d are coprime numbers\n", x, y);
  } else {
    printf("%d and %d are not coprime numbers\n", x, y);
  }
  return 0;
}
