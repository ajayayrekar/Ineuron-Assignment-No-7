#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
  int i;
  for (i = 2; i <= n/2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int i;
  printf("Prime numbers under 100: \n");
  for (i = 2; i < 100; i++) {
    if (isPrime(i)) {
      printf("%d, ", i);
    }
  }
  return 0;
}
