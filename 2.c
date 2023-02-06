#include <stdio.h>

void printFibonacci(int n) {
  int f[n];
  int i;

  f[0] = 0;
  f[1] = 1;

  for (i = 2; i < n; i++) {
    f[i] = f[i-1] + f[i-2];
  }

  for (i = 0; i < n; i++) {
    printf("%d, ", f[i]);
  }
}

int main() {
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("The first %d terms of the Fibonacci series are: ", n);
  printFibonacci(n);
  return 0;
}
