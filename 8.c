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
  int n, i;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = n + 1; ; i++) {
    if (isPrime(i)) {
      printf("The next prime number of %d is %d\n", n, i);
      break;
    }
  }
  return 0;
}
