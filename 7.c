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
  int m, n, i;
  printf("Enter two numbers (m and n): ");
  scanf("%d%d", &m, &n);
  printf("Prime numbers between %d and %d: \n", m, n);
  for (i = m; i <= n; i++) {
    if (isPrime(i)) {
      printf("%d, ", i);
    }
  }
  return 0;
}
